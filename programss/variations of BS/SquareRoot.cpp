#include <iostream>
using namespace std;

int squareRoot(int n)
{
    int low = 0, high = n;
    int ans;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (n == 0 || n == 1)
        {
            return n;
        }

        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid < n)
        {
            ans = mid;
            low = mid + 1; // search in left
        }
        else
        {
            high = mid - 1; // search in right
        }
    }
    return ans;
}

int main()
{
    int n = 20;
    int result = squareRoot(n);
    cout << "sqrt of " << n << " is  " << result << endl;
    return 0;
}