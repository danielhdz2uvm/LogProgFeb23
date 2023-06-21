#include <iostream>
#include <string>
#include <vector>
#include <locale.h>

using namespace std;

struct Contact {
    string matricula;
    string nombre;
    string carrera;
    string promedio;
    string direccion;
};

void addContact(vector<Contact>& contacts) {
    Contact contact;
    cout << "Captura el matricula: ";
    getline(cin, contact.matricula);
    cout << "Captura el nombre: ";
    getline(cin, contact.nombre);
    cout << "Captura la carrera: ";
    getline(cin, contact.carrera);
    cout << "Captura el promedio: ";
    getline(cin, contact.promedio);
    cout << "Captura la direccion: ";
    getline(cin, contact.direccion);
    contacts.push_back(contact);
    cout << "Contact added successfully." << endl;
}

void displayContacts(const vector<Contact>& contacts) {
    if (contacts.empty()) {
        cout << "No contacts found." << endl;
    } else {
        cout << "Alumnos:" << endl;
        for (const auto& contact : contacts) {
            cout << contact.matricula << " | " << contact.nombre << " | " << contact.carrera << " | " << contact.promedio << " | " << contact.direccion << endl;
        }
    }
}
/*
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
*/
int main() {
    setlocale(LC_ALL, "Spanish"); // ñ á é
    vector<Contact> contacts;
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Agregar Alumno" << endl;
        cout << "2. Mostrar alumnos" << endl;
        cout << "3. Exit" << endl;
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
                return 0;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    }
}
