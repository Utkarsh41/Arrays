#include <iostream>
using namespace std;

int remDuplicates(int arr[], int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[res - 1])
        {
            arr[res] = arr[i];
            res++;
        }
    }

    return res;
}
int main()
{
    int ary[5] = {2, 2, 1, 1, 1};
    cout << remDuplicates(ary, 5) << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << ary[i] << " ";
    }

    return 0;
}