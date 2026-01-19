#pragma once
#include <iostream>
#include <fstream>
#include <string.h>

// ID: 327397105, name: Denis Beigel
// ID: 212692875, name: Roei Tal

namespace Factory
{
    class ChocolateSupplier{
        private:
          char* chocolateName;

        public:
        const char* getChocolateName();
        void setChocolateName(const char* name);

        void supplyChocolate(){std::cout << this->chocolateName <<" is now supplying chocolate! 🍫\n";};

        ChocolateSupplier(const char* chocolateName);
        ~ChocolateSupplier();
    };
}