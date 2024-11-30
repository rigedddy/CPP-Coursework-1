// NAZIFA FIROZ
// ID NUMBER: 230025069
#include <iostream>
#include "person.h"
#include <fstream>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

vector<Person> read_people (ifstream& peopleIn, ifstream& paymentsIn){
    vector<Person> people;
    string line;

    // reading people.txt file
    while (getline(peopleIn, line)) {
        if(!line.empty()) {
            people.push_back(line);
        }
    }

    //cout << people.size() << endl;

    // reading payments.txt
    while (getline(paymentsIn, line)) {
        // creating a string stream for the current line
        istringstream isLine(line);
        string PersonName, item;
        float price;

        // get name, item and price in that line
        if (isLine >> PersonName >> item >> price) {
            // loop through people to match the names
            for (Person& person : people) {
                if (person.getName() == PersonName) {
                    person.addPurchases(item, price);
                }
            }
        }
    }

    return people;
}

int main(){


    ifstream filePeople("people.txt");
    if (!filePeople) { // check if people.txt can open
        cout << "Error opening file " << endl;
        return 1;
    }
    ifstream filePayments("payments.txt");
    if (!filePayments) { // check if payments.txt can open
        cout << "Error opening file " << endl;
        return 1;
    }

    // read people and purchases
    vector<Person> people = read_people(filePeople, filePayments);

    // print the results
    for (const Person& person : people) {
        cout << person.getName() << endl;

        const vector<string>& items = person.getItem();
        const vector<float>& prices = person.getPrice();
        float total = 0;

        // loop through all purchased items and their prices
        for (int i = 0; i < items.size(); i++) {
            cout << items[i] << " " << prices[i] << endl;
            total = total + prices[i];
        }

        cout << "Total: " << total << endl << endl;
    }

    return 0;



}
