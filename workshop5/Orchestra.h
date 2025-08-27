#ifndef ORCHESTRA_H
#define ORCHESTRA_H

#include <string>
#include "Musician.h"

class Orchestra {
private:
    int max_size;
    int current_size;
    Musician* members;

    void copy_from(const Orchestra& other);

public:
   
    Orchestra();

   
    Orchestra(int size);

    Orchestra(const Orchestra& other);
    Orchestra& operator=(const Orchestra& other);


    ~Orchestra();


    int get_current_number_of_members();


    bool has_instrument(std::string instrument);


    Musician* get_members();

   
    bool add_musician(Musician new_musician);

   
    int get_max_size() const { return max_size; }
};

#endif 
