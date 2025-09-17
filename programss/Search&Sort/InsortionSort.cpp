#include <iostream>
using namespace std;

void InsertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i - 1;
        int key = arr[i]; // pick the current element

        while (j >= 0 && arr[j] > key) // j<0 means control reached the beginning og the array  and arr[j]<=key means the element is already in its correct position
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int testcases[5][6] =
        {{3, 5, 6, 19, 0, 1},
         {1, 2, 3, 4, 5, 6},
         {6, 5, 4, 3, 2, 1},
         {4, 0, 0, 0, 0, 0},
         {2, 2, 1, 0, 1, 4}};

    for (int i = 0; i < 5; i++)
    {
        int size = 6;
        InsertionSort(testcases[i], size);
        printArray(testcases[i], size);
    }
}
