/*Teju considers the number 3 unlucky and wishes to remove the element located at the 3rd position in an array, considering the first position in the array as position 1. 



Write a program that eliminates the element at this 3rd position and then displays the modified array.

Input format :
The first line consists of an integer 'n', the size of the array.

The second line consists of 'n' space-separated integers representing the elements of the array.

Output format :
After removing the element at the 3rd position, the output displays space-separated integer array values.*/

#include <iostream>
using namespace std;

int main() {
    int size;

    cin >> size;

    int arr[size]; 

    for (int i = 0; i < size; i++) {
        cin >> *(arr + i); 
    }

    for (int* ptr = arr + 2; ptr < arr + size - 1; ptr++) {
        *ptr = *(ptr + 1); 
    }

    size--;

    for (int* ptr = arr; ptr < arr + size; ptr++) {
        cout << *ptr << " ";
    }

    return 0;
}
