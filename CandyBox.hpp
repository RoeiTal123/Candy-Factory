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
        
        CandyBox(int size) : capacity(size), count(0)
        {
            items = new T[capacity]; 
        }

        bool addItem(const T &newItem)
        {
            if (count < capacity)
            {
                items[count] = newItem; // Add the new element
                count++;
                return true;
            }
            return false;
        }

        bool removeItem(int index)
        {
            if (index >= 0 && index < count)
            {
                for (int i = index; i < count - 1; i++)
                {
                    items[i] = std::move(items[i + 1]);
                }
                count--;
                return true;
            }
            return false;
        }


        void displayItems()
        {
            

            for (int i = 0; i < count; i++)
            {
                if constexpr (std::is_same_v<T, CandyMaker>)
                {
                    items[i].makeCandy();
                }
                else if constexpr (std::is_same_v<T, ChocolateSupplier>)
                {
                    items[i].supplyChocolate();
                }
                else if constexpr (std::is_same_v<T, SugarSupplier>)
                {
                    items[i].supplySugar();
                }
                else
                {
                    std::cout << items[i] << std::endl;
                }
            }
        }

        ~CandyBox()
        {
            delete [] items;
            items = nullptr;
        }
    };

};