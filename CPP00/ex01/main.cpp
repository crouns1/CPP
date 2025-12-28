/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd < jait-chd@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 18:13:21 by jait-chd          #+#    #+#             */
/*   Updated: 2025/12/28 14:22:04 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"



Contact::Contact()
    : firstName(""), lastName(""), nickname(""), phoneNumber(""), darkestSecret("") {}

void Contact::setContact(const std::string &first, const std::string &last, const std::string &nick,
                         const std::string &phone, const std::string &secret) {
    firstName = first;
    lastName = last;
    nickname = nick;
    phoneNumber = phone;
    darkestSecret = secret;
}

std::string Contact::getFirstName() const { return firstName; }
std::string Contact::getLastName() const { return lastName; }
std::string Contact::getNickname() const { return nickname; }
std::string Contact::getPhoneNumber() const { return phoneNumber; }
std::string Contact::getDarkestSecret() const { return darkestSecret; }
bool Contact::isEmpty() const { return firstName.empty(); }


PhoneBook::PhoneBook() : count(0), oldest(0) {}

void PhoneBook::addContact(const Contact &contact) {
    contacts[oldest] = contact;
    oldest = oldest + 1;
    if (oldest == 8)
        oldest = 0;
    if (count < 8)
        count = count + 1;
}

static void printColumn(std::string str) {
    if (str.length() > 10) {
        for (size_t i = 0; i < 9; i++)
            std::cout << str[i];
        std::cout << ".";
    } else {
        size_t len = str.length();
        for (size_t i = 0; i < 10 - len; i++)
            std::cout << " ";
        std::cout << str;
    }
}

void PhoneBook::displayContacts() const {
    std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
    for (int i = 0; i < count; i++) {
        std::cout << "         " << i << "|";
        printColumn(contacts[i].getFirstName());
        std::cout << "|";
        printColumn(contacts[i].getLastName());
        std::cout << "|";
        printColumn(contacts[i].getNickname());
        std::cout << std::endl;
    }
}

void PhoneBook::displayContact(int index) const {
    if (index < 0 || index >= count) {
        std::cout << "Invalid idx." << std::endl;
        return;
    }
    std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
    std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
}

int PhoneBook::getCount() const { 
    return count; 
}

static std::string getInput(const std::string &prompt) {
    std::string input;
    std::cout << prompt;
    std::getline(std::cin, input);
    while (input.empty()) {
        std::cout << prompt;
        if (std::cin.eof())
            return "";
        std::getline(std::cin, input);
    }
    return input;
}

static void handleAdd(PhoneBook &phoneBook) {
    Contact contact;
    std::string first = getInput("First name: ");
    std::string last = getInput("Last name: ");
    std::string nick = getInput("Nickname: ");
    std::string phone = getInput("Phone number: ");
    std::string secret = getInput("Darkest secret: ");
    contact.setContact(first, last, nick, phone, secret);
    phoneBook.addContact(contact);
}

static void handleSearch(PhoneBook &phoneBook) {
    if (phoneBook.getCount() == 0) {
        std::cout << "PhoneBook is empty" << std::endl;
        return;
    }
    phoneBook.displayContacts();
    std::cout << "Enter idx: ";
    std::string idxStr;
    std::getline(std::cin, idxStr);
    if (std::cin.eof())
        return;

    int idx = -1;
    std::istringstream iss(idxStr);
    iss >> idx;
    if (iss.fail() || idx < 0) {
        std::cout << "invalid idx." << std::endl;
        return;
    }
    phoneBook.displayContact(idx);
}

int main() {
    PhoneBook phoneBook;
    std::string cmd;

    std::cout << "Welcome to PhoneBook!" << std::endl;
    while (1) {
        std::cout << "\nEnter cmd: ";
        std::getline(std::cin, cmd);
        if (std::cin.eof()) {
            return 1;
        }
        if (cmd == "ADD") {
            handleAdd(phoneBook);
        } else if (cmd == "SEARCH") {
            handleSearch(phoneBook);
        } else if (cmd == "EXIT") {
            break;
        } else 
            std::cout << "Unknown cmd" << std::endl;
    }
    return 0;
}
