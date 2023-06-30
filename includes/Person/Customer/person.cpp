#include <iostream>

#include "person.h"

/******************************************************************************************
 * Person class implementation
 *****************************************************************************************/

/**
 * @brief Static member variable to keep track of the number of persons.
 * @note This is a protected member variable, so it is accessible by the derived classes.
 *       This variable is initialized to 1, because the first person will have an id of 1.
 *       This is because the id is incremented after it is assigned to the person.
 *       So the first person will have an id of 1, the second person will have an id of 2, etc.
 **/
unsigned int Person::mIdCounter = 1;

Person::~Person() {}    

void Person::setName(std::string name) {
    mName = name;
}

void Person::setAddress(std::string address) {
    mAddress = address;
}

void Person::getName() {
    std::cout << mName << std::endl;
}

void Person::getAddress() {
    std::cout << mAddress << std::endl;
}   

/**
 * @brief Overloaded operator to compare two Person objects.
 * @param Person The Person object to compare with.
 * @return True if the two Person objects are the same, false otherwise.
 **/
bool Person::operator==(const Person& person) const {
    return mId == person.mId;
}

/*****************************************************************************************/
