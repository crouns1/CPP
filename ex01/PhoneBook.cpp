#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook() {
    count = 0;
    oldest = 0;
}

void PhoneBook::addContact(const Contact &contact) {
    contacts[oldest] = contact;
    oldest = oldest + 1;
    if (oldest == 8)
        oldest = 0;
    if (count < 8)
        count = count + 1;
}

void printColumn(std::string str) {
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
        std::cout << "Invalid index." << std::endl;
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