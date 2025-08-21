#include <iostream>
#include "Person.h"

PersonList createPersonList(int n);

int main() {
    int n = 4;
    PersonList pl = createPersonList(n);

    std::cout << "PersonList with " << pl.numPeople << " people:\n";
    for (int i = 0; i < pl.numPeople; ++i) {
        std::cout << i << ": " << pl.people[i].name << ", " << pl.people[i].age << '\n';
    }

  
    delete[] pl.people;
    pl.people = nullptr;
    pl.numPeople = 0;
    return 0;
}
