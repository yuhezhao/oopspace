#include "Person.h"

PersonList createPersonList(int n) {
    PersonList pl{};
    pl.numPeople = (n > 0) ? n : 0;
    if (pl.numPeople == 0) {
        pl.people = nullptr;
        return pl;
    }

    pl.people = new Person[pl.numPeople];
    for (int i = 0; i < pl.numPeople; ++i) {
        pl.people[i].name = "Jane Doe";
        pl.people[i].age = 1;
    }
    return pl;
}
