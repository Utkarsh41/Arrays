#include <iostream>
#include <algorithm>
using namespace std;

int getLarg(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[res])
        {
            res = i;
        }
    }
    return res;
}
int main()
{
    int ut[5] = {22, 55, 45, 1356, 33};
    //    for (int i = 0; i < 5; i++)
    //    {
    //     int mx = max(mx,ut[i]);
    //    }
    cout << "Largest element is at index: " << getLarg(ut, 5);
    return 0;
}