#pragma once

#include <fstream>
#include <iostream>

#include "../Person/person.h"
#include "../Movie/movie.h"
#include "../Person/Customer/customer.h"

class FileHandler {
    private:
        std::string mFileName;
        std::fstream mFile;

    public:
        FileHandler();
        ~FileHandler();

        void writeCustomersToFile(CustomerQueue customers);
        void writeMoviesToFile(MovieLibrary movies);

        CustomerQueue readCustomersFromFile();
        MovieLibrary readMoviesFromFile();
};