#include "Person.h"
#include <iostream>
#include <string>



Person::Person(const std::string& name, int age) : name(name), age(age) {}


Person::~Person() {}


PersonList::PersonList(int n) : numPeople(n) {
    if (n > 0) {
        people = new Person[n];  

        
        for (int i = 0; i < n; ++i) {
            people[i] = Person("Jane Doe", 1);
        }
    } else {
        people = nullptr;  
        numPeople = 0;
    }
}


PersonList::~PersonList() {
    delete[] people;  
}


PersonList createPersonList(int n) {
    return PersonList(n);
}

