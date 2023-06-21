#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Contact {
    string name;
    string phone;
    string email;
};

void addContact(vector<Contact>& contacts) {
    Contact contact;
    cout << "Enter name: ";
    getline(cin, contact.name);
    cout << "Enter phone number: ";
    getline(cin, contact.phone);
    cout << "Enter email address: ";
    getline(cin, contact.email);
    contacts.push_back(contact);
    cout << "Contact added successfully." << endl;
}

void displayContacts(const vector<Contact>& contacts) {
    if (contacts.empty()) {
        cout << "No contacts found." << endl;
    } else {
        cout << "Contacts:" << endl;
        for (const auto& contact : contacts) {
            cout << contact.name << " | " << contact.phone << " | " << contact.email << endl;
        }
    }
}

void searchContacts(const vector<Contact>& contacts) {
    string search;
    cout << "Enter search query: ";
    getline(cin, search);
    bool found = false;
    for (const auto& contact : contacts) {
        if (contact.name.find(search) != string::npos ||
            contact.phone.find(search) != string::npos ||
            contact.email.find(search) != string::npos) {
            cout << contact.name << " | " << contact.phone << " | " << contact.email << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "No contacts found." << endl;
    }
}

void modifyContact(vector<Contact>& contacts) {
    string search;
    cout << "Enter name of contact to modify: ";
    getline(cin, search);
    bool found = false;
    for (auto& contact : contacts) {
        if (contact.name == search) {
            cout << "Enter new phone number (leave blank to keep current value): ";
            string phone;
            getline(cin, phone);
            if (!phone.empty()) {
                contact.phone = phone;
            }
            cout << "Enter new email address (leave blank to keep current value): ";
            string email;
            getline(cin, email);
            if (!email.empty()) {
                contact.email = email;
            }
            cout << "Contact modified successfully." << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Contact not found." << endl;
    }
}

int main() {
    vector<Contact> contacts;
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Add contact" << endl;
        cout << "2. Display contacts" << endl;
        cout << "3. Search contacts" << endl;
        cout << "4. Modify contact" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter option: ";
        int option;
        cin >> option;
        cin.ignore();
        switch (option) {
            case 1:
                addContact(contacts);
                break;
            case 2:
                displayContacts(contacts);
                break;
            case 3:
                searchContacts(contacts);
                break;
            case 4:
                modifyContact(contacts);
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    }
}
