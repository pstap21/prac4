// #ifndef PERSON_H
// #define PERSON_H

// #include <string>
// #include <iostream>

// class Person {
// public:
//     std::string name;
//     int age;

  
//     Person(const std::string& name = "John Doe", int age = 0);

    
//     ~Person() = default;
// };

// class PersonList {
// public:
//     Person* people;
//     int numPeople;

    
//     PersonList(int n);

//     ~PersonList();

    
//     PersonList deepCopyPersonList() const;
// };


// PersonList createPersonList(int n);

// #endif 
#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person {
public:
    std::string name;
    int age;

    // Constructor
    Person(const std::string& name = "John Doe", int age = 0);

    // Destructor (No need for destructor in this case)
    ~Person() = default;
};

class PersonList {
public:
    Person* people;
    int numPeople;

    // Constructor
    PersonList(int n);

    // Destructor
    ~PersonList();

    // Method to deep copy PersonList
    PersonList deepCopyPersonList() const;

    // Method to shallow copy PersonList
    PersonList shallowCopyPersonList() const;
};

// Function declaration (moved to header)
PersonList createPersonList(int n);

#endif // PERSON_H
