#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include <iostream>
#include <ctime>
#include "Test_Array.h"

namespace BubbleSort
{

template <typename T>
void BubbleSort (std::vector<T> &v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = v.size() - 1; j > i; j--)
            if (v.at(j) < v.at(j - 1))
                std::swap(v.at(j), v.at(j - 1));
    }
}


void DoBubbleSort()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    const int size = 10;
    std::vector<int> bubble_array(size);

    std::cout << "Unsorted array : " << std::endl;
    InitArray(bubble_array);
    ShowArray(bubble_array);
    std::cout << "=======" << std::endl;

    std::cout << "Sorted array : " << std::endl;
    BubbleSort(bubble_array);
    ShowArray(bubble_array);
    std::cout << "=======" << std::endl;
}

}

#endif // BUBBLE_SORT_H
