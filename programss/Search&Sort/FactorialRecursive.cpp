#include <iostream>
using namespace std;

int factR(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factR(n - 1);
}
int main()
{
    int num = 5;
    int factnum = factR(num);
    cout << "the factorial of the number " << num << " is " << factnum << endl;
}

// int fact(int num)
// {
//     if (num == 0 || num == 1)
//     {
//         return 1;
//     }
//     int result = 1;
//     for (int i = 2; i <= num; i++)
//     {
//         result *= i;
//     }
//     return result;
// }

// int main()
// {
//     int n;
//     cout << "the factorial of the num is : " << fact(1) << endl;
// }
