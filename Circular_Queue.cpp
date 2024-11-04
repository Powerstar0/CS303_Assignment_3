//
// Created by Johnny on 11/2/2024.
//

#include "Circular_Queue.h"
#include <iostream>

template<typename Item_type>
// Push Function
void CQ::Circular_Queue<Item_type>::push(const Item_type &item) {
    // Reallocate if bigger array is needed
    if (num_items == capacity) {
        reallocate();
    }
    // Increases num of items
    num_items++;
    // Moves rear index
    rear_index = (rear_index + 1) % capacity;
    // Adds item
    the_data[rear_index] = item;
}

template<typename Item_type>
// Removes item
void CQ::Circular_Queue<Item_type>::pop() {
    // Removes front item
    front_index = (front_index + 1) % capacity;
    // Decrements num items
    num_items--;
}

template<typename Item_type>
// Returns front item
Item_type CQ::Circular_Queue<Item_type>::front() {
    return the_data[front_index];
}

template<typename Item_type>
// Returns current size of queue
size_t CQ::Circular_Queue<Item_type>::size() {
    return num_items;
}

template<typename Item_type>
// Reallocates for bigger array
void CQ::Circular_Queue<Item_type>::reallocate() {
    // Double size
    size_t new_capacity = 2 * capacity;
    // New queue
    Item_type* new_data = new Item_type[new_capacity];
    size_t j = front_index;

    // Copy over items in order

    for (size_t i = 0; i < num_items; i++) {
        new_data[i] = the_data[j];
        j = (j+1) % capacity;
    }

    //Reset index and rear
    front_index = 0;
    rear_index = num_items - 1;
    // New capacity
    capacity = new_capacity;
    // Swap data
    std::swap(the_data, new_data);
    // Remove old array
    delete[] new_data;
}

template<typename Item_type>
// Default Constructor
CQ::Circular_Queue<Item_type>::Circular_Queue() {
    the_data = new Item_type[DEFAULT_CAPACITY];
    rear_index = -1;
    front_index = 0;
    num_items = 0;
    capacity = DEFAULT_CAPACITY;
}

template<typename Item_type>
// Displays all items
void CQ::Circular_Queue<Item_type>::display() {
    int j = front_index;
    // Goes from front_index to rear
    for (int i = 0; i < size(); i++) {
        cout << the_data[j % capacity] << " ";
        j++;
    }
}

template<typename Item_type>
// Move item to rear
void CQ::Circular_Queue<Item_type>::move_to_rear() {
    front();
    Item_type temp = front();
    // remove top
    pop();
    // push old top to rear
    push(temp);
}

template<typename Item_type>
bool CQ::Circular_Queue<Item_type>::empty() {
    if (num_items == 0)
        return true;
    return false;
}

// Explicit instantiation
template class CQ::Circular_Queue<int>;
template class CQ::Circular_Queue<string>;