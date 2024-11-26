#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>

using namespace std;


class Person {
    string name;
    float totalPayment;

    public:
    // creating constructors for name and payment
    Person(string name, float totalPayment);
    Person(const string& PersonName);


    // creating getter for name
    string getName() const;

    // method to add all the purchases
    void addPurchases(float payment);

    // creating getter for payment
    float getTotalPayment() const;

};



#endif //PERSON_H
