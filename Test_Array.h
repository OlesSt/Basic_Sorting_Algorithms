#ifndef TEST_ARRAY_H
#define TEST_ARRAY_H

#include <iostream>

void InitArray(std::vector<int> &v)
{
    for (int i {}; i < v.size(); i++)
        v.at(i) = rand() % 10;
}
void ShowArray(const std::vector<int> v)
{
    for (int i {}; i < v.size(); i++)
        std::cout << v.at(i) << " ";
    std::cout << std::endl;
}

#endif // TEST_ARRAY_H
