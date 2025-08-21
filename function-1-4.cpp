#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    // Just copy the pointer and the count; no new allocation
    PersonList copy{};
    copy.people = pl.people;
    copy.numPeople = pl.numPeople;
    return copy;
}
