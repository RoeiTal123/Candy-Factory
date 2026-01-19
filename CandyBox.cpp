#include <iostream>
#include <fstream>
#include <string.h>
#include <utility>
#include "CandyBox.hpp"
#include "SugarSupplier.hpp"
#include "ChocolateSupplier.hpp"
#include "CandyMaker.hpp"


// ID: 327397105, name: Denis Beigel
// ID: 212692875, name: Roei Tal

namespace Factory
{
    // private:
    
    template <class T>
    void CandyBox<T>::resizeArray(int newSize)
    {

        // Double capacity
        int newCapacity = capacity == 0 ? 1 : capacity * 2;
        T* temp = new T[newCapacity];

        // Copy elements from old array to new array
        for (int i = 0; i < current_size; ++i) 
        {
            temp[i] = items[i];
        }

        delete[] items;
        items = temp;
        capacity = newCapacity;
    }

    // public:

    template <class T>
    CandyBox<T>::CandyBox(int size)
    {
        count = 0;
        capacity = size;
        items = new T[capacity]; 
    }

    template <class T>
    bool CandyBox<T>::addItem(const T &newItem)
    {
        if (count < capacity)
        {
            items[count] = value; // Add the new element
            count++;
        }
        return false;
    }

    template <class T>
    bool CandyBox<T>::removeItem(int index)
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

    template <class T>
    void CandyBox<T>::displayItems()
    {
        for (int i = 0; i < count - 1; i++)
        {
            if (std::is_same_v(T, CandyMaker))
            {
                items[i].makeCandy();
            }
            else if (std::is_same_v(T, SugarSupplier))
            {
                items[i].supplySugar();
            }
            else if (std::is_same_v(T, ChocolateSupplier))
            {
                items[i].supplyChocolate();
            }
            else
            {
                std::cout << items[i] << std::endl;
            }
        }
    }

    template <class T>
    CandyBox<T>::~CandyBox()
    {
        delete [] items;
        items = nullptr;
    }
}