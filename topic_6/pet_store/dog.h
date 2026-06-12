#ifndef DOG_H
#define DOG_H
#include "pet_gender.h"
#include <cstddef>
#include <string>

class Dog {
public: 
    Dog(size_t, const std::string&, Sex, const std::string&, size_t);
    size_t getId();
    std::string getName();
    Sex getSex();
    std::string getBreed();
    size_t getAge();
    


    void updateId(size_t);
    void updateName(const std::string&);
    void updateSex(Sex);
    void updateBreed(const std::string&);
    void updateAge(size_t);
    std::string speak();
    

private:
size_t id;
std::string name;
Sex sex;
std::string breed;
size_t age;
};

#endif // DOG_H