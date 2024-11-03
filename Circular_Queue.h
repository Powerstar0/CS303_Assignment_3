//
// Created by Johnny on 11/2/2024.
//

#ifndef CS303_ASSIGNMENT_3_CIRCULAR_QUEUE_H
#define CS303_ASSIGNMENT_3_CIRCULAR_QUEUE_H

#include <iostream>

using namespace std;
namespace CQ { // Circular queue namespace
    template<typename Item_type>
    class Circular_Queue {
    private:
        // Data fields
        static const size_t DEFAULT_CAPACITY = 10; // Default Capacity
        size_t capacity; // Current Capacity
        size_t num_items; // Number of items
        size_t front_index; // Front index
        size_t rear_index; // Rear Index
        Item_type* the_data; // Queue
    public:
        void push(const Item_type& item); // Pushes item to back to queue
        void pop(); // Removes front of queue
        Item_type front(); // Returns front item
        size_t size(); // Returns size of queue
        void reallocate(); // Reallocates for bigger array
        Circular_Queue(); // Default constructor
        void move_to_rear(); // moves front item to rear
        void display(); // Displays items in queue
        bool empty(); // Checks to see if queue is empty
        };


};

#endif //CS303_ASSIGNMENT_3_CIRCULAR_QUEUE_H
