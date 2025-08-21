#include <iostream>
#include "Person.h"

PersonList createPersonList(int n);


PersonList shallowCopyPersonList(PersonList pl);

int main() {
 
    PersonList original = createPersonList(2);
    original.people[0].name = "X";
    original.people[1].name = "Y";

    PersonList alias = shallowCopyPersonList(original);

    alias.people[0].name = "ChangedThroughAlias";

    std::cout << "Original after modifying alias:\n";
    for (int i = 0; i < original.numPeople; ++i)
        std::cout << i << ": " << original.people[i].name << ", " << original.people[i].age << '\n';

    std::cout << "\nAlias view:\n";
    for (int i = 0; i < alias.numPeople; ++i)
        std::cout << i << ": " << alias.people[i].name << ", " << alias.people[i].age << '\n';

    delete[] original.people;
    original.people = nullptr;
    alias.people = nullptr; 

    return 0;
}
