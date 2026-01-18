#include <iostream>
#include <fstream>
#include <string.h>
#include "SugarSupplier.hpp"
#include "ChocolateSupplier.hpp"

namespace Factory
{
    class CandyMaker : public SugarSupplier, public ChocolateSupplier
    {
        private:
        public:
        void makeCandy(const char* candyName){
           std::cout << "Using sugar from " << getSugarName() << " and chocolate from " << getChocolateName() << " to create " << candyName << "! 🍭";
        };
        CandyMaker(const char *sugarSupplierName, const char *chocolateSupplierName);
    };
}