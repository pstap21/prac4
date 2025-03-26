#include <iostream>
#include "Person.h"

int main() {
    int n = 3;

   
    PersonList originalList = createPersonList(n);

    
    PersonList shallowCopyList = originalList.shallowCopyPersonList();

    
    originalList.people[0].name = "Changed Name";
    originalList.people[0].age = 25;

    
    std::cout << "Original List:" << std::endl;
    for (int i = 0; i < originalList.numPeople; i++) {
        std::cout << "Person " << i + 1 << " : " <<
            originalList.people[i].name << ", Age: " <<
            originalList.people[i].age << std::endl;
    }

    std::cout << "\nShallow Copy List (after modification in original):" << std::endl;
    for (int i = 0; i < shallowCopyList.numPeople; i++) {
        std::cout << "Person " << i + 1 << " : " <<
            shallowCopyList.people[i].name << ", Age: " <<
            shallowCopyList.people[i].age << std::endl;
    }

    return 0;
}
