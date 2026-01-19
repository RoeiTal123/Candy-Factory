#pragma once
#include <iostream>
#include <fstream>
#include <string.h>
#include <type_traits>
#include <utility>
#include "SugarSupplier.hpp"
#include "ChocolateSupplier.hpp"
#include "CandyMaker.hpp"

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
        
        CandyBox(int size)
        {
            count = 0;
            capacity = size;
            items = new T[capacity]; 
        }

        bool addItem(const T &newItem)
        {
            if (count < capacity)
            {
                items[count] = newItem; // Add the new element
                count++;
            }
            return false;
        }

        bool removeItem(int index)
        {
            if(0 <= index < count)
            {
                delete [] items[index];
                for (int i = index; i < count; i++)
                {
                    items[i] = std::move(items[i + 1]);
                }
                return true;
            }
            return false;
        }


        void displayItems()
        {
            for (int i = 0; i < count - 1; i++)
            {
                // if (std::is_class_v<CandyMaker>)
                // {
                //     items[i].supplySugar();
                // }
                // else if (std::is_class_v<ChocolateSupplier>)
                // {
                //     items[i].supplyChocolate();
                // }
                // else if (std::is_class_v<SugarSupplier>)
                // {
                //     items[i].supplySugar();
                // }
                // else
                // {
                //     std::cout << items[i] << std::endl;
                // }
                std::cout << items[i] << std::endl;
            }
        }

        ~CandyBox()
        {
            delete [] items;
            items = nullptr;
        }
    };

};