#include <iostream>
#include <fstream>
#include <string.h>

// ID: 327397105, name: Denis Beigel
// ID: 212692875, name: Roei Tal


namespace Factory
{
    class CandyMaker{
        private:

        public:

        CandyMaker(const char* sugarSupplierName, const char* chocolateSupplierName); // 

        void makeCandy(const char* candyName);

    };
}