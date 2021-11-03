#include <iostream>
using namespace std;

int LinSearch(int arr[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int ut[5] = {2, 5, 45, 13, 33};
    cout << "Element found at:" << LinSearch(ut, 5, 33);

    return 0;
}