#include <iostream>
#include <fstream>
#include <string.h>
#include "CandyMaker.hpp"
#include "SugarSupplier.hpp"
#include "ChocolateSupplier.hpp"

// ID: 327397105, name: Denis Beigel
// ID: 212692875, name: Roei Tal

namespace Factory
{
    CandyMaker::CandyMaker(const char *sugarSupplierName, const char *chocolateSupplierName) 
    : SugarSupplier(sugarSupplierName), ChocolateSupplier(chocolateSupplierName)
    {
        std::cout << "the chocolate supplier is - " << chocolateSupplierName <<", and the sugar supplier is - " << sugarSupplierName;
    }

    void CandyMaker:: makeCandy(const char* candyName)
    {
        if (!candyName || candyName[0] == '\0')
        {
            std::cout << "Using sugar from " << getSugarName() << " and chocolate from " << getChocolateName() << " to create " << candyName << "! 🍭";
        }
        else
        {
            std::cout << "Using sugar from " << getSugarName() << " and chocolate from " << getChocolateName() << " to create " << currentCandy << "! 🍭";
        }
        
        
    }
}
