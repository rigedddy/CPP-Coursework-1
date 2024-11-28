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
    private:
    string name;
    //float totalPayment;
    vector<string> items;
    vector<float> prices;

    public:
    // creating constructors for name and payment
    //Person(string name, float totalPayment);
    Person(const string& PersonName);

    // creating getter for name
    string getName() const;

    // method to add all the purchases
    void addPurchases(const string& item, float price);

    // creating getter for payment
    float getTotalPayment() const;
    //float addPayment(float payment);

    // getters for the vector values
    const vector<string>& getItem() const;
    const vector<float>& getPrice() const;
};



#endif //PERSON_H
