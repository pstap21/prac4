#include "Person.h"

int main() {
    int n = 5;  

    // Create an array of Person objects
    Person* persons = createPersonArray(n);

    if (persons) { 
        for (int i = 0; i < n; ++i) {
            std::cout << "Person " << i + 1 << ": " << persons[i].name 
                      << ", Age: " << persons[i].age << std::endl;
        }

       
        delete[] persons;
    } else {
        std::cout << "Failed to allocate memory for Person array." << std::endl;
    }

    return 0;
}
