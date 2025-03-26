#include <iostream>
#include "Person.h"

int main() {
    int n = 3;

    
    PersonList personList = createPersonList(n);

    if (personList.people) {
        for (int i = 0; i < personList.numPeople; i++) {
            std::cout << "Person " << i + 1 << " : " <<
            personList.people[i].name << ", Age: " <<
            personList.people[i].age << std::endl;
        }
    } else {
        std::cout << "Invalid input" << std::endl;
    }

    return 0;
}
