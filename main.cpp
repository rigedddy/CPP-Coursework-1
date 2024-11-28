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
        istringstream isLine(line);
        string PersonName, item;
        float price;

        if (isLine >> PersonName >> item >> price) {
            //cout << "Reading: " << PersonName << " " << item << " " << price << endl;
            for (Person& person : people) {
                if (person.getName() == PersonName) {
                    //cout << PersonName << " " << item << " " << price << endl;
                    person.addPurchases(item, price);
                }
            }
        }
    }

    return people;
}

int main(){


    ifstream filePeople("people.txt");
    if (!filePeople) {
        cout << "Error opening file " << endl;
        return 1;
    }
    ifstream filePayments("payments.txt");
    if (!filePayments) {
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

        for (size_t i = 0; i < items.size(); ++i) {
            cout << items[i] << " " << prices[i] << endl;
            total = total + prices[i];
        }

        cout << "Total: " << total << endl << endl;
    }

    return 0;

    // string fileName;
    //
    // cout << "Please enter the file name: ";
    // getline(cin, fileName);
    //
    // ifstream inFile;
    //
    // inFile.open(fileName);
    //
    // if (inFile.fail()) {
    //     cout << "Error opening file " << fileName << endl;
    //     return 1;
    // }
    //
    // char c;
    // while (inFile.get(c)) {
    //     cout << c;
    // }
    // inFile.close();


}
