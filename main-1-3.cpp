#include <iostream>
#include "Person.h"

PersonList deepCopyPersonList(PersonList pl);

int main() {

    PersonList original{};
    original.numPeople = 3;
    original.people = new Person[original.numPeople];

    original.people[0] = {"Alice", 20};
    original.people[1] = {"Bob", 30};
    original.people[2] = {"Carol", 40};


    PersonList copy = deepCopyPersonList(original);


    original.people[1].name = "Changed";
    original.people[1].age = 999;

    std::cout << "Original:\n";
    for (int i = 0; i < original.numPeople; ++i) {
        std::cout << i << ": " << original.people[i].name << ", " << original.people[i].age << '\n';
    }

    std::cout << "\nDeep Copy:\n";
    for (int i = 0; i < copy.numPeople; ++i) {
        std::cout << i << ": " << copy.people[i].name << ", " << copy.people[i].age << '\n';
    }

    // 释放
    delete[] original.people;
    delete[] copy.people;
    return 0;
}
