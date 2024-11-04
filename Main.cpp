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
    // Random seeding
    srand(time(0));
    // Queue creation
    CQ::Circular_Queue<int> queue;
    // Push integers
    for (int i = 0; i < 10; i++) {
        queue.push(i);

    }
    // Displays current queue
    cout << "The current queue is: ";
    queue.display();
    cout << endl;
    string user_input = "";
    // User Choice
    while (user_input != "8") {
        cout << "Select a number \n"
                "1. Push \n"
                "2. Pop \n"
                "3. Front \n"
                "4. Size \n"
                "5. Empty \n"
                "6. Display all elements \n"
                "7. Move to rear function \n"
                "8. Move to Recursive Linear Search Function \n" << endl;
        cin >> user_input;
        // Push to queue
        if (user_input == "1") {
            string queue_input;
            cout << "What would you like to push to the queue?: " << endl;
            cin >> queue_input;
            queue.push(stoi(queue_input));
            cout << "Element added" << endl;
        }
        // Remove front element
        else if (user_input == "2") {
            queue.pop();
            cout << "Front item has been removed." << endl;
        }
        // Returns front
        else if (user_input == "3")
            cout << "The front is: " << queue.front() << endl;
        // Returns queue size
        else if (user_input == "4")
            cout << "There are " << queue.size() << " elements in the queue" << endl;
        // Returns is queue is empty
        else if (user_input == "5") {
            if (queue.empty())
                cout << "The queue is empty" << endl;
            else
                cout << "The queue is not empty" << endl;
        }
        // Display
        else if (user_input == "6") {
            queue.display();
            cout << endl;
        }
        // Moves top element to rear
        else if (user_input == "7") {
            queue.move_to_rear();
            cout << "Top element has been moved to rear" << endl;
        }
        // Break
        else if (user_input == "8")
            break;
        // Invalid input
        else
            cout << "Invalid Input" << endl;
    }

    vector<int> numbers = {10, 5, 7, 3, 10, 5};
    cout << "The current vector is: ";
    for (auto i : numbers)
        cout << i << " ";
    cout << endl;
    cout << "The last occurrence of 10 is at index : " << linear_search(numbers, 10, numbers.size() - 1) << endl;
    cout << endl;
    while (user_input != "4") {
        cout << "Select an option: \n"
                "1. Push Back \n"
                "2. Pop Back \n"
                "3. Search \n"
                "4. Move to queue insertion sort \n" << endl;
        cin >> user_input;
        cout << endl;
        if (user_input == "1") {
            string vector_input;
            cout << "What number would you like to push to the queue?: " << endl;
            cin >> vector_input;
            numbers.push_back(stoi(vector_input));
            cout << "Element added" << endl;
        }
        else if (user_input == "2") {
            numbers.pop_back();
            cout << "Element removed";
        }
        else if (user_input == "3") {
            string target;
            cout << "What target would you like to search the last instance for?: ";
            cin >> target;
            cout << endl;
            cout << "The last occurrence of " << target << " is at index : " << linear_search(numbers, stoi(target), numbers.size() - 1) << endl;

        }
        else if (user_input == "4") {
            break;
        }
        else {
            cout << "Invalid input" << endl;
        }
        cout << "The current vector is: ";
        for (auto i : numbers)
            cout << i << " ";
        cout << endl;
    }



    while (user_input != "n") {
        string user_input2 = "";
        cout << "Here is a randomly generated Queue: ";
        CQ::Circular_Queue<int> stuff;
        for (int i = 0; i < 10; i++) {
            stuff.push(rand() % 100);
        }
        stuff.display();
        cout << endl;
        cout << "Here's the queue after sorting: " << endl;
        insertion_sort(stuff);
        stuff.display();
        cout << endl;
        while (true) {
            cout << "Would you like to generate another randomly generated queue and sort that? (y/n)" << endl;
            cin >> user_input2;
            if (user_input2 == "y") {
                user_input = user_input2;
                break;
            }
            else if (user_input2 == "n") {
                user_input = user_input2;
                break;
            }
            else
                cout << "Invalid input" << endl;
        }
    }
}