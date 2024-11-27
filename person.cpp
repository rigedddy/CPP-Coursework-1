// declare the methods here
#include "person.h"
#include <iostream>

using namespace std;

// declare a constructor to initialise name and totalPayment using person.h
Person::Person(const string& PersonName) : name(PersonName) {}

// getter for name
string Person::getName() const {
    return name;
}

// method for adding payments together
void Person::addPurchases(const string& item, const float price) {
    items.push_back(item);
    prices.push_back(price);
}

// getter for totalPayment
// float Person::getTotalPayment() const {
//     return totalPayment;

const vector<string>& Person::getItem() const {
    return items;
}

const vector<float>& Person::getPrice() const {
    return prices;
}

