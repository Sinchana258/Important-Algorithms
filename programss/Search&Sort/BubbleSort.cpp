#include <iostream>
using namespace std;

void swapp(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int bubSort(int arr[], int size)
{

    for (int i = 0; i < size; i++)

    {
        bool swapped = false;
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapp(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
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
    bubSort(arr, size);
    cout << "sorted array" << endl;
    printArray(arr, size);
}
