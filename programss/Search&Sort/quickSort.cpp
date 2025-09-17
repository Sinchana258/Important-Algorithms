#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = arr[low];
    while (i < j)
    {
        while (i <= high - 1 && arr[i] <= pivot)
        {

            i++;
        }
        while (j >= low + 1 && arr[j] > pivot)
        {
            j--;
        }
        if (i < j)

            swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int partI = partition(arr, low, high);
        quickSort(arr, low, partI - 1);
        quickSort(arr, partI + 1, high);
    }
}

int main()
{
    vector<int> arr1 = {2, 1, 1, 0, 5, 6};
    int size = arr1.size();
    cout << "the sorted array : " << endl;
    quickSort(arr1, 0, size - 1);

    for (int x : arr1)
        cout << x << " ";
}