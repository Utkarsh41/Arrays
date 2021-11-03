#include <iostream>
using namespace std;

string isSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return "Not sorted";
        }
    }
    return "Sorted";
}
int main()
{
    int ary[5] = {12, 22, 25, 26, 28};
    cout << isSorted(ary, 5);

    return 0;
}