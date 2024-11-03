//
// Created by Johnny on 11/2/2024.
//

#include "Recursive_Search_Last.h"
#include <vector>

using namespace std;
template<typename Item_type>
// Finds last instance of target
int linear_search(vector<Item_type>& items, const Item_type& target, size_t pos_last) {
    // Not in vector
    if (pos_last == -1)
        return -1;
    // Returns position
    if (target == items[pos_last])
        return pos_last;
    // Recursively goes through vector
    else
        return linear_search(items, target, pos_last - 1);
}

// Explicit instantiation
template int linear_search<int>(vector<int>& items, const int& target, size_t pos_last);
