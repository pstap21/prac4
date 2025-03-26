#include "Person.h"

// Constructor definition
Person::Person(const std::string& name, int age) : name(name), age(age) {}

// Destructor definition
Person::~Person() {
    // Optional: Print message when object is destroyed
    // std::cout << "Destroying Person: " << name << std::endl;
}

// Function to create an array of Person objects
Person* createPersonArray(int n) {
    if (n <= 0) return nullptr; // Prevent invalid allocation

    // Allocate memory for n Person objects using new[]
    Person* arr = new Person[n];

    return arr;
}




// Person* createPersonArray(int n){
//     Person* personArray = new Person[n];

//     for ( int i = 0; i < n; i++) {
//         personArray[i].name = "John Doe";
//         personArray[i].age = 0;

//     }

//     return personArray;
// }