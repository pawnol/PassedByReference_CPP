/*
Passed By Reference
Pawelski
5/10/2022
Please follow the instructions on the activity guide!
*/

#define LENGTH 5
#include <iostream>

/// <summary>
/// Prints the elements within the array in the following format:
/// index : element
/// index : element
/// ...
/// </summary>
/// <param name="arr">Array to display.</param>
/// <param name="length">Length of the array.</param>
void Print(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << i << " : " << arr[i] << "\n";
    }
    std::cout << "\n";
}

/// <summary>
/// Doubles the first element of the array.
/// </summary>
/// <param name="arr">An array with at least 1 element.</param>
void DoubleFirstNumber(int arr[])
{
    arr[0] = arr[0] * 2;
}

int main()
{
    int some_numbers[LENGTH] = { 1, 2, 3, 4, 5 };
    Print(some_numbers, LENGTH);
    DoubleFirstNumber(some_numbers);
    Print(some_numbers, LENGTH);
    return 0;
}
