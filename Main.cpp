#include <iostream>
#include <fstream>
#include <string.h>
#include <utility>
#include "CandyMaker.hpp"
#include "CandyBox.hpp"

int main()
{
    using namespace Factory;
    
    CandyMaker maker("SugarCo", "ChocoDelight");
    maker.supplySugar();
    maker.supplyChocolate();
    maker.makeCandy("Fudge Surprise");

    // The CandyBox
    CandyBox<const char*> box(5);
    box.addItem("SourLollipop");
    box.addItem("MintChoco");
    box.displayItems();
    box.removeItem(1);
    box.displayItems();

    return 0;
}
