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
            char* candy;
        public:
        void makeCandy(const char* candyName);
        CandyMaker(const char *sugarSupplierName, const char *chocolateSupplierName);
    };
}