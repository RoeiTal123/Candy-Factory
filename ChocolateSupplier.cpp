#include <iostream>
#include <fstream>
#include <string.h>
#include "ChocolateSupplier.hpp"

// ID: 327397105, name: Denis Beigel
// ID: 212692875, name: Roei Tal

namespace Factory
{
    ChocolateSupplier::ChocolateSupplier(const char* chocolateName)
    {
        this->chocolateName = new char[strlen(chocolateName) + 1];
        strcpy(this->chocolateName, chocolateName);
    }

    ChocolateSupplier::~ChocolateSupplier(){
        delete[] chocolateName;
    }

    const char* ChocolateSupplier::getChocolateName(){
        return this -> chocolateName;
    }

    void ChocolateSupplier::setChocolateName(const char* chocolateName){
        strcpy(this->chocolateName, chocolateName);
    }
}