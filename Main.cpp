//
// Created by Johnny on 11/2/2024.
//

#include "Circular_Queue.h"
#include "Recursive_Search_Last.h"
#include "Insertion_Sort.h"
#include <vector>
#include <iostream>

using namespace std;
int main() {
    srand(time(0));
    CQ::Circular_Queue<int> customers;
    for (int i = 0; i < 10; i++) {
        customers.push(i);

    }
    cout << "The current queue is: ";
    customers.display();

    string user_input = "";
    if (user_input != "q") {
        cout << "Select a number"
                "1. Push"
                "2. Pop"
                "3. Front"
                "4. Size"
                "5. Empty" << endl;
        if (user_input == "1")
            cout << "What would you like to push?";
    }



    customers.move_to_rear();
    customers.display();
    cout << endl;
    vector<int> numbers = {10, 5, 7, 3, 10, 5};
    cout << "The last occurrence is at index : " << linear_search(numbers, 10, numbers.size() - 1) << endl;
    CQ::Circular_Queue<int> stuff;
    for (int i = 0; i < 10; i++) {
        stuff.push(rand() % 100);
    }
    stuff.display();
    cout << endl;
    insertion_sort(stuff);
    stuff.display();
}