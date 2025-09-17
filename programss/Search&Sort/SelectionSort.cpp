// #include <iostream>
// using namespace std;
// void SelectionSort(int arr[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         int minIndex = i;
//         for (int j = i; j < size; j++)
//         {
//             if (arr[j] < arr[minIndex])
//             {
//                 minIndex = j;
//             }
//         }
//         if (minIndex != i)
//         {
//             swap(arr[i], arr[minIndex]);
//         }
//     }
// }

// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     cout << endl;
// }
// int main()
// {
//     int arr[] = {3, 5, 6, 19, 0, 1};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     SelectionSort(arr, size);
//     printArray(arr, size);
// }

#include <iostream>
using namespace std;

int selSort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        if (minIndex != i)
        {
            swap(arr[i], arr[minIndex]);
        }
    }
    return 0;
}

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {1, 3, 0, 9, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "unsorted input" << endl;

    printArray(arr, size);
    selSort(arr, size);
    cout << "sorted array" << endl;
    printArray(arr, size);
}
