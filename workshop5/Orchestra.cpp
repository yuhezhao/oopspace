#include "Orchestra.h"

Orchestra::Orchestra() : max_size(0), current_size(0), members(nullptr) {}

Orchestra::Orchestra(int size)
    : max_size(size < 0 ? 0 : size), current_size(0),
      members(max_size > 0 ? new Musician[max_size] : nullptr) {}

void Orchestra::copy_from(const Orchestra& other) {
    max_size = other.max_size;
    current_size = other.current_size;
    if (max_size > 0) {
        members = new Musician[max_size];
        for (int i = 0; i < current_size; ++i) {
            members[i] = other.members[i];
        }
    } else {
        members = nullptr;
    }
}

Orchestra::Orchestra(const Orchestra& other) : max_size(0), current_size(0), members(nullptr) {
    copy_from(other);
}

Orchestra& Orchestra::operator=(const Orchestra& other) {
    if (this != &other) {
        delete[] members;
        copy_from(other);
    }
    return *this;
}

Orchestra::~Orchestra() {
    delete[] members;
}

int Orchestra::get_current_number_of_members() {
    return current_size;
}

bool Orchestra::has_instrument(std::string instrument) {
    for (int i = 0; i < current_size; ++i) {
        if (members[i].get_instrument() == instrument) {
            return true;
        }
    }
    return false;
}

Musician* Orchestra::get_members() {
    return members; // may be nullptr if max_size == 0
}

bool Orchestra::add_musician(Musician new_musician) {
    if (current_size >= max_size) {
        return false;
    }
    members[current_size++] = new_musician;
    return true;
}
