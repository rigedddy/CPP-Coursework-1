#include <iostream>
#include "person.h"
#include <fstream>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

vector<Person> read_people (istream& peopleIn, istream paymentsIn){
    vector<Person> people;
    string line;

    // reading people.txt file
    while (getline(peopleIn, line)) {
        if(!line.empty()) {
            people.push_back(line);
        }
    }
}

int main(){
    // Person bob("Bob");
    //
    // bob.addPurchases(2.5);
    // bob.addPurchases(3.5);
    //
    // cout << "Name: " << bob.getName() << endl;
    // cout << "Total Payment: " << bob.getTotalPayment() << endl;
    //
    // return 0;

}
