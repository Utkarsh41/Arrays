#include <iostream>
using namespace std;
int SecondMax(int arr[], int n)
{
    int res = -1, larg = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[larg])
        {
            res = larg;
            larg = i;
        }
        else if (arr[i] != arr[larg])
        {
            if (res == -1 || arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}
int main()
{

    int ary[5] = {12, 22, 15, 16, 28};
    cout << "Second largest element is present at : " << SecondMax(ary, 5) << " index";

    return 0;
}