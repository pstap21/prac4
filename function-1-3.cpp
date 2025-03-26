#include "Person.h"

// Constructor for Person class
Person::Person(const std::string& name, int age) : name(name), age(age) {}

// Constructor for PersonList class
PersonList::PersonList(int n) : numPeople(n) {
    if (n > 0) {
        people = new Person[n];  

        // Initialize the people array with default values
        for (int i = 0; i < n; ++i) {
            people[i] = Person("Jane Doe", 1);
        }
    } else {
        people = nullptr;  
        numPeople = 0;
    }
}

// Destructor for PersonList class
PersonList::~PersonList() {
    delete[] people;  
}

// Function to create and return a PersonList
PersonList createPersonList(int n) {
    return PersonList(n);
}

// Deep copy for PersonList
PersonList PersonList::deepCopyPersonList() const {
    PersonList copiedList(numPeople);

    for (int i = 0; i < numPeople; ++i) {
        copiedList.people[i] = people[i];  // Deep copy of each Person
    }
    
    return copiedList;
}
