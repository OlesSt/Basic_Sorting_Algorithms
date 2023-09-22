#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include <iostream>
#include <vector>
#include "Test_Array.h"

namespace SelectionSort
{

template <typename T>
void SelectionSort (std::vector<T> &v)
{
    for (int i = 0; i < v.size() - 1; i++)
        for (int j = i + 1; j < v.size(); j++)
            if (v[j] < v[i]) // --------------------- CHANGE < TO > TO INVERT
                std::swap(v[j], v[i]); // ----------- WORKS WITH TEMP VARIABLE TO SWAP
}

void DoSelectionSort()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    const int size = 10;
    std::vector<int> selection_array(size);

    std::cout << "Unsorted array : " << std::endl;
    InitArray(selection_array);
    ShowArray(selection_array);
    std::cout << "=======" << std::endl;

    std::cout << "Sorted array : " << std::endl;
    SelectionSort(selection_array);
    ShowArray(selection_array);
    std::cout << "=======" << std::endl;
}

}

#endif // SELECTION_SORT_H
