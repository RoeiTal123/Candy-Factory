#pragma once
#include <iostream>
#include <fstream>
#include <string.h>

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
            void resizeArray(int newSize);     // Re-size the array
        
        public:
        
        CandyBox(int size);

        bool addItem(const T& newItem);

        bool removeItem(int index);

        void displayItems();

        T getVar() { return var; }

        ~CandyBox();
    };

};