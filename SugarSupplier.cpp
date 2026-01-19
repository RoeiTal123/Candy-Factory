#include <iostream>
#include <fstream>
#include <string.h>
#include "SugarSupplier.hpp"

// ID: 327397105, name: Denis Beigel
// ID: 212692875, name: Roei Tal

namespace Factory
{
    SugarSupplier::SugarSupplier(const char* sugarName)
    {
        this->sugarName = new char[strlen(sugarName) + 1];
        strcpy(this->sugarName, sugarName);
    }

    SugarSupplier::~SugarSupplier(){
        delete[] sugarName;
    }

    const char* SugarSupplier::getSugarName(){
        return this -> sugarName;
    }

    void SugarSupplier::setSugarName(const char* sugarName){
        strcpy(this->sugarName, sugarName);
    }
}