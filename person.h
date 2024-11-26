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

    // creating getters for name and payment
    string getName() const;
    //float getTotalPayment();

    // method to add all the purchases
    void addPurchases(float payment) {
        totalPayment += payment;
    }

    float getTotalPayment() const {
        return totalPayment;
    }


};



#endif //PERSON_H
