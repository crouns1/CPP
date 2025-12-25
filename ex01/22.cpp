#include "phonebook.hpp"
#include "contact.hpp"


void fix_Add(PhoneBook &phoneBook) {
    Contact contact;
    std::string first = getInput("First name : ");
    std::string first = getInput("First name : ");
    std::string first = getInput("First name : ");
    std::string first = getInput("First name : ");

}


int main(int c, char **v) {
    PhoneBook phoneBook;
    std::string cmd;
    if(c != 2)
    {
        std::cout << "Error: Invalid number of arguments." << std::endl;
        return 1;
    }
    std::cout << "Available cmds : ADD , SEARCH , EXIT" << std::endl;
    while(1) {
        std::cout << "\nEnter Cmd";
        // read entire line from in stream
        std::getline(std::cin , cmd) , '\n';
        // check ctrl + d
        if(std::cin.eof())
            break;
        if(cmd == "ADD")
            fix_Add(phoneBook);
        else if(cmd == "SEARCH")
            fix_Search(phoneBook);
        else if(cmd == "EXIT") {
            std::cout << "Goodbye!" << std::endl;
            break; 
        } else if (!cmd.empty())
            std::cout << "Unknown cmd , try Again" << std::endl;
    }
   

}