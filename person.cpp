// declare the methods here
#include "person.h"
#include <iostream>

using namespace std;

// declare a constructor to initialise name and totalPayment using person.h
Person::Person(const string& PersonName) : name(PersonName), totalPayment() {}

// getter for name
string Person::getName() const {
    return name;
}

// method for adding payments together
float Person::getTotalPayment(float payment) {
    totalPayment += totalPayment;
}

// getter for totalPayment
float Person::getTotalPayment() const {
    return totalPayment;
}