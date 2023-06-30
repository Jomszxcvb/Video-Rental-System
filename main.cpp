#include <iostream>

#include "includes/tabulate/tabulate.hpp"
#include "includes/Helper/file-helper.h"
#include "includes/Person/person.h"
#include "includes/Person/Customer/customer.h"
#include "includes/Movie/movie.h"

int main() {
    FileHandler fileHandler;
    CustomerQueue customers = fileHandler.readCustomersFromFile();
    MovieLibrary movies = fileHandler.readMoviesFromFile();

    std::cout << "Test" << std::endl;

    return 0;
}
