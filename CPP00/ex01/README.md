# CPP00/ex01 - PhoneBook

## Issue

- Create an interactive phonebook with the commands `ADD`, `SEARCH`, and `EXIT`.
- Store at most 8 contacts.
- When the phonebook is full, replace the oldest contact.
- Display search results in fixed-width columns, truncating long fields.

## Solve

- `Contact` owns the first name, last name, nickname, phone number, and darkest secret.
- `PhoneBook` owns a static array of 8 `Contact` objects.
- `count` tracks how many valid contacts are currently stored.
- `oldest` tracks the next slot to overwrite when `ADD` is used.
- `ADD` reads every field with `std::getline` and repeats the prompt while the field is empty.
- `SEARCH` prints a compact table using 10-character columns and a trailing dot for truncated fields.
- After a valid index is selected, the full contact details are printed.

## Build / Run

- Build: `make`
- Run: `./phonebook`
- Available commands: `ADD`, `SEARCH`, `EXIT`
- Clean objects: `make clean`
- Remove executable: `make fclean`

