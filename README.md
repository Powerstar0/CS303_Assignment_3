# CS303_Assignment_3
Johnny Diep

## How To Run

### NOTE:

This program was created and compiled in CLion on Windows. If using mac you may have to run this command in the terminal:

clang++ -arch arm64 -std=c++17 -stdlib=libc++ -o my_program Main.cpp Circular_Queue.cpp Insertion_Sort.cpp Recursive_Search_Last.cpp 

To sucessfully compile it. Afterwards you can run

./my_program

To run the program in the terminal.

You may run into issues using any other IDE.

### Part 1 (Q1)
1. When ran, the program will automatically generate a queue and instatiate it with 10 integers as per the requirement in the Assignment. Additionally, the menu will pop up.

![image](https://github.com/user-attachments/assets/907588d4-1ff7-40ed-a936-3a2005304f42)

2. You can display all elements in the queue by selecting "6", meeting the second requirement

![image](https://github.com/user-attachments/assets/18c0db4d-9458-4eb0-aeaa-06d28b7add06)

3. You can use the move_to_rear function to move the current element at the head of the queue to the rear by selecting "7". You can see the effect when you display the queue again. This fulfills the 3rd requirement for Q1.

![image](https://github.com/user-attachments/assets/81e04bb3-10a2-4380-ae64-44f15ba6de82)

![image](https://github.com/user-attachments/assets/b6791ea9-31b4-4b25-a235-473bea87c78d)

4. Also you can push an element by selecting "1":

![image](https://github.com/user-attachments/assets/707fc268-d777-4b32-ba68-a80911b4dc83)

![image](https://github.com/user-attachments/assets/fb1d09d5-5805-47a4-84f5-6ecc896216e3)

5. You can pop the top element by selecting "2". Here 0 is removed from the starting queue:

![image](https://github.com/user-attachments/assets/14ce894d-b7d2-4b31-921c-ac5ccaa5d861)

![image](https://github.com/user-attachments/assets/9bdb30c1-9720-4510-adf2-25784885892b)

6. You can get the front element in the queue with "3":

![image](https://github.com/user-attachments/assets/b0037601-a9f4-4a41-a504-eaf671e2fff5)

7. You can get the size of the queue with "4":

![image](https://github.com/user-attachments/assets/03d2dfe9-1737-4e48-9623-4aa2083bd7cb)

8. And you can check if the queue is empty with "5":

![image](https://github.com/user-attachments/assets/94fd1c58-e051-410c-a76e-648245ffba95)

9. You can move on to the recursive linear search function with "8":

### Part 2 (Q2)

1. A preset vector will be created and it will return to you the last occurence of 10 in it at what index.

![image](https://github.com/user-attachments/assets/0b7930a6-b350-4637-8c89-cd00911644a6)

2. Push back an element with "1". Since it is a integer vector in this case please enter a number:

![image](https://github.com/user-attachments/assets/a19aa624-6968-466b-93b4-65e49ebe4e29)

3. Pop Back an element with "2".

![image](https://github.com/user-attachments/assets/ea57469d-f400-47a2-95b6-64807b83fabc)

3. Search for the last instance of a target. Again, please enter a number in the queue in this case. This should satisfy the requirement.

![image](https://github.com/user-attachments/assets/ea107c51-9185-4d0a-b163-bca22ea86e86)

4. Move onto the insertion sort with "4"

### Part 3 (Q3)

1. A randomly generated queue will be made. It will then be sorted afterwards.

![image](https://github.com/user-attachments/assets/9eb17dcd-5d39-47f9-a133-c745a51dd0fc)

2. It will then ask you if you would like to generate another queue to sort. Selecting "y" repeats this.

![image](https://github.com/user-attachments/assets/d7ca0253-fe74-4542-952c-9bdfea34f98d)

3. Selecting "n" quits the program.

![image](https://github.com/user-attachments/assets/f99e841e-2b07-4120-a838-ead3ae27ea2d)








