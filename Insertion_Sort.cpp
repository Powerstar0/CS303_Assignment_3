//
// Created by Johnny on 11/2/2024.
//

#include "Insertion_Sort.h"
#include "Circular_Queue.h"
#include <vector>
void insertion_sort(CQ::Circular_Queue<int> &queue) {
    // Create vector to sort
    vector<int> num;
    // Find queue size
    int orig_queue_size = queue.size();
    // Push queue items to vector
    for (int i = 0; i < orig_queue_size; i++) {
        num.push_back(queue.front());
        queue.pop();
    }

    // Sorts vector using insertion sort taken from slides
    int i, j, key;
    bool insertionNeeded = false;
    for (j = 1; j < num.size(); j++) {
        key = num[j];
        insertionNeeded = false;
        for (i = j - 1; i >= 0; i--) {
            if (key < num[i]) {
                num[i + 1] = num[i]; // larger values move right
                insertionNeeded = true;
            } else
                break;
        }
        if (insertionNeeded)
            num[i + 1] = key; //Put key into its proper location
    }

    // Pushes sorted vectors into queue
    for (int z = 0; z < num.size(); z++) {
        queue.push(num.at(z));
    }
}