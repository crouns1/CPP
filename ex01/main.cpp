#include "PhoneBook.hpp"
#include "Contact.hpp"


std::string getInput(const std::string &prompt) {
    std::string input;
    std::cout << prompt;
    std::getline(std::cin, input);
    while (input.empty()) {
        std::cout << prompt;
        if (std::cin.eof()) return "";
        std::getline(std::cin, input);
    }
    return input;
}


void handleAdd(PhoneBook &phoneBook) {
    Contact contact;
    std::string first = getInput("First name: ");
    std::string last = getInput("Last name: ");
    std::string nick = getInput("Nickname: ");
    std::string phone = getInput("Phone number: ");
    std::string secret = getInput("Darkest secret: ");
    contact.setContact(first, last, nick, phone, secret);
    phoneBook.addContact(contact);
    std::cout << "Contact added!" << std::endl;
}


void handleSearch(PhoneBook &phoneBook) {
    if (phoneBook.getCount() == 0) {
        std::cout << "PhoneBook is empty." << std::endl;
        return;
    }
    phoneBook.displayContacts();
    std::cout << "Enter index: ";
    std::string idxStr;
    std::getline(std::cin, idxStr);
    if (std::cin.eof())
        return;
    int idx = -1;
    std::istringstream iss(idxStr);
    iss >> idx;
    if (iss.fail() || idx < 0) {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    phoneBook.displayContact(idx);
}


void handleExit() {
    std::cout << "Exiting PhoneBook. Goodbye!" << std::endl;
}

int main() {
    PhoneBook phoneBook;
    std::string command;
    std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
    while (1) {
        std::cout << "\nEnter command: ";
        std::getline(std::cin, command);
        if (std::cin.eof())
            break;
        if (command == "ADD") {
            handleAdd(phoneBook);
        } else if (command == "SEARCH") {
            handleSearch(phoneBook);
        } else if (command == "EXIT") {
            handleExit();
            break;
        } else if (!command.empty()) {
            std::cout << "Unknown command. Please use ADD, SEARCH, or EXIT." << std::endl;
        }
    }
    return 0;
}