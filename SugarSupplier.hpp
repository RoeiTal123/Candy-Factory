#pragma once
#include <iostream>
#include <fstream>
#include <string.h>

// ID: 327397105, name: Denis Beigel
// ID: 212692875, name: Roei Tal

namespace Factory
{
    class SugarSupplier{
        private:
          char* sugarName;

        public:
        const char* getSugarName();
        void setSugarName(const char* name);

        void supplySugar(){std::cout << this->sugarName <<" is now supplying sugar! 🍬 \n";};

        SugarSupplier(const char* sugarName);
        ~SugarSupplier();
    };
}
