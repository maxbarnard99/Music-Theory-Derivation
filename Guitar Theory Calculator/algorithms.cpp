/**
 * @file algorithms.cpp
 * @author Arturo Alchimi (nachtschatten43@gmail.com)
 * @brief my first library of algorithms, no order.
 * @version 0.1
 * @date 2020-01-22
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <vector>
using namespace std;

template <typename T>
int find_index(T array[], int size, T search_value)
{
    for (int i = 0; i < size; i++)
    {
        if (search_value == array[i])
        {
            return i;
        }
    }
}