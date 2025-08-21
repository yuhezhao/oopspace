#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
    PersonList copy{};
    copy.numPeople = pl.numPeople;

    if (copy.numPeople <= 0 || pl.people == nullptr) {
        copy.people = nullptr;
        return copy;
    }

    copy.people = new Person[copy.numPeople];
    for (int i = 0; i < copy.numPeople; ++i) {

        copy.people[i] = pl.people[i];
    }
    return copy;
}
