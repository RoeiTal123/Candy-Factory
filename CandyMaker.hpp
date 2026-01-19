#pragma once
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
            char* currentCandy;

        public:

        void makeCandy(const char* candyName);
        CandyMaker(const char *sugarSupplierName, const char *chocolateSupplierName);
    };
}