#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList copy{};
    copy.people = pl.people;     // 指向同一块数组
    copy.numPeople = pl.numPeople;
    return copy;
}
