#include <iostream>
#include "Person.h"

PersonList createPersonList(int n);

PersonList deepCopyPersonList(PersonList pl);

int main() {

    PersonList original = createPersonList(3);
    original.people[0].name = "Alice";
    original.people[1].name = "Bob";
    original.people[2].name = "Carol";
    original.people[0].age = 20;
    original.people[1].age = 30;
    original.people[2].age = 40;

    PersonList copy = deepCopyPersonList(original);


    original.people[1].name = "Changed";
    original.people[1].age = 999;

    std::cout << "Original:\n";
    for (int i = 0; i < original.numPeople; ++i)
        std::cout << i << ": " << original.people[i].name << ", " << original.people[i].age << '\n';

    std::cout << "\nDeep Copy:\n";
    for (int i = 0; i < copy.numPeople; ++i)
        std::cout << i << ": " << copy.people[i].name << ", " << copy.people[i].age << '\n';

    delete[] original.people;
    delete[] copy.people;
    return 0;
}
