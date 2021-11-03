#include <iostream>
using namespace std;
void deletion(int arr[], int n, int index)
{
    for (int i = index; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    --n;
    // return n;
}
int main()
{
    int ut[6] = {2, 5, 45, 13, 33};
    deletion(ut, 6, 2);
    for (int i = 0; i < 6; i++)
    {
        cout << ut[i] << " ";
    }
    return 0;
}