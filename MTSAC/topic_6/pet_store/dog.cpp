#include "dog.h"

Dog::Dog(size_t id, const std::string& name, Sex sex, const std::string& breed, size_t age){
    updateId(id);
    updateName(name);
    updateSex(sex);
    updateBreed(breed);
    updateAge(age);


}

size_t Dog::getId()
{
    return id;
}
std::string Dog::getName(){

    return name;

}
Sex Dog::getSex(){
    return sex;

}
std::string Dog::getBreed(){
    return breed;

}
size_t Dog::getAge(){

    return age;

}
    


void Dog::updateId(size_t id){
    this->id = id;

}
void Dog::updateName(const std::string& name){
    this->name = name;

}
void Dog::updateSex(Sex sex){
    this->sex = sex;
    

}
void Dog::updateBreed(const std::string& breed){
    this->breed = breed;

}
void Dog::updateAge(size_t age){

}
std::string Dog::speak(){
    return "Woof!";
}
    