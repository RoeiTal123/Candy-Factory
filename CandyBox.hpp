#pragma once
#include <iostream>
#include <fstream>
#include <string.h>
#include <type_traits>

// ID: 327397105, name: Denis Beigel
// ID: 212692875, name: Roei Tal


namespace Factory
{
    template <class T>
    class CandyBox
    {
        private:
            T* items;               // Pointer to the dynamically allocated array
            int capacity;           // Max size of the array
            int count;              // Currant size of occupied storage 
        
        public:
        
        CandyBox(int size);

        bool addItem(const T& newItem);

        bool removeItem(int index);

        void displayItems();

        ~CandyBox();
    };

};