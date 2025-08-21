#include <iostream>
#include "Person.h"

// 声明要测试的函数（在 function-1-4.cpp 中实现）
PersonList shallowCopyPersonList(PersonList pl);

int main() {
    // 手动构造原始 PersonList
    PersonList original{};
    original.numPeople = 2;
    original.people = new Person[original.numPeople];

    original.people[0] = {"X", 1};
    original.people[1] = {"Y", 2};

    // 浅拷贝（共用同一数组）
    PersonList alias = shallowCopyPersonList(original);

    // 通过 alias 修改， original 会同步变化
    alias.people[0].name = "ChangedThroughAlias";

    std::cout << "Original after modifying alias:\n";
    for (int i = 0; i < original.numPeople; ++i) {
        std::cout << i << ": " << original.people[i].name << ", " << original.people[i].age << '\n';
    }

    std::cout << "\nAlias view:\n";
    for (int i = 0; i < alias.numPeople; ++i) {
        std::cout << i << ": " << alias.people[i].name << ", " << alias.people[i].age << '\n';
    }

    // 只释放一次（两者指向同一数组）
    delete[] original.people;
    original.people = nullptr;
    alias.people = nullptr;

    return 0;
}
