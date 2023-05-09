#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Contact {
    string name;
    string phone;
    string email;
};

vector<Contact> contacts;

void addContact() {
    Contact c;
    cout << "Enter contact name: ";
    cin >> c.name;
    cout << "Enter phone number: ";
    cin >> c.phone;
    cout << "Enter email address: ";
    cin >> c.email;
    contacts.push_back(c);
    cout << "Contact added successfully!" << endl;
}

void displayContacts() {
    if (contacts.size() == 0) {
        cout << "No contacts to display." << endl;
        return;
    }
    cout << "Contact list:" << endl;
    for (int i = 0; i < contacts.size(); i++) {
        cout << "Name: " << contacts[i].name << endl;
        cout << "Phone: " << contacts[i].phone << endl;
        cout << "Email: " << contacts[i].email << endl;
        cout << endl;
    }
}

void searchContact() {
    string name;
    cout << "Enter name to search: ";
    cin >> name;
    for (int i = 0; i < contacts.size(); i++) {
        if (contacts[i].name == name) {
            cout << "Name: " << contacts[i].name << endl;
            cout << "Phone: " << contacts[i].phone << endl;
            cout << "Email: " << contacts[i].email << endl;
            return;
        }
    }
    cout << "Contact not found." << endl;
}

int main() {
    int choice;
    do {
        cout << "Choose an option:" << endl;
        cout << "1. Add contact" << endl;
        cout << "2. Display contacts" << endl;
        cout << "3. Search contact" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
                break;
        }
    } while (choice != 4);
    return 0;
}
