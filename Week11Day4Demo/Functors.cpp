/*
Functors - Function objects
A Function object is any type that implement operator().
This operator is referered to as call operator or application operator.

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Sample
{
public:
    int operator()(int a, int b)
    {
        return a < b;
    }
};
int main()
{
    Sample s;
    s.operator()(10, 11);
    int ans = s(10, 11);
    cout<<ans;
    return 0;
}
// class increment
// {
// private:
//     int num;

// public:
//     increment(int n) : num(n) {}
//     int operator()(int arrNum)
//     {
//         return num + arrNum;
//     }
// };
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int add_val = 5;

//     transform(arr, arr + n, arr, increment(add_val));
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;

// }