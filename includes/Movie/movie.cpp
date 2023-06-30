#include <iostream>

#include "movie.h"

/******************************************************************************************
 * Movie class implementation
 *****************************************************************************************/

/**
 * @brief Static member variable to keep track of the number of movies.
 * @note This variable is initialized to 1, because the first movie will have an id of 1.
 *       This is because the id is incremented after it is assigned to the movie.
 *       So the first movie will have an id of 1, the second movie will have an id of 2, etc.
 **/
unsigned int Movie::mIdCounter = 1;
Movie::Movie() {
    mId = mIdCounter++;
    mTitle = "";
    mGenre = "";
    mProduction = "";
    mNumOfCopies = 0;
    mImgFilename = "";
}

Movie::~Movie() {}

void Movie::setTitle(std::string title) {
    mTitle = title;
}

void Movie::setGenre(std::string genre) {
    mGenre = genre;
}

void Movie::setProduction(std::string production) {
    mProduction = production;
}

void Movie::setNumOfCopies(unsigned int numOfCopies) {
    mNumOfCopies = numOfCopies;
}

void Movie::setImgFilename(std::string imgFilename) {
    mImgFilename = imgFilename;
}

void Movie::increaseNumOfCopies() {
    mNumOfCopies++;
}

void Movie::decreaseNumOfCopies() {
    mNumOfCopies--;
}

/**
 * @brief Overloaded operator to compare two Movie objects.
 * @param Movie The Movie object to compare with.
 * @return True if the two Movie objects are the same, false otherwise.
 **/
bool Movie::operator==(const Movie& movie) const {
    return mId == movie.mId;
}
/*****************************************************************************************/