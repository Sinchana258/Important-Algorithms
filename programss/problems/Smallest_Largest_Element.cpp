#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// using  manual sorting
void small_large(vector<int> &arr)
{
    // Bubble Sort
    for (int i = 0; i < arr.size(); i++)
    {
        bool swapped = false;
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break; // array already sorted
    }

    int small = arr[0];
    int large = arr[arr.size() - 1]; //

    cout << "Smallest number is: " << small << endl;
    cout << "Largest number is: " << large << endl;
}

// using sort from algorithm(stl)
void min_max(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int min = arr.front();
    int max = arr.back();
    cout << "Smallest number is: " << min << endl;
    cout << "Largest number is: " << max << endl;
}

// without using sorting
void smallest_largest(vector<int> &arr)
{
    int small = arr[0];
    int large = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < small)
            small = arr[i];

        if (arr[i] > large)
            large = arr[i];
    }
    cout << "Smallest number is: " << small << endl;
    cout << "Largest number is: " << large << endl;
}

// using algorithm(stl)

void smallAndLarge(vector<int> &arr)
{
    int smallest = *min_element(arr.begin(), arr.end());
    int largest = *max_element(arr.begin(), arr.end());

    cout << "Smallest number is: " << smallest << endl;
    cout << "Largest number is: " << largest << endl;
}

int main()
{
    vector<int> arr1 = {4, 9, 17, 134, 0, 9, 1};
    small_large(arr1);
    smallest_largest(arr1);
    smallAndLarge(arr1);
    min_max(arr1);
    return 0;
}
