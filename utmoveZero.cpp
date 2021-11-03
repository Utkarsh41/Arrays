#include <iostream>
using namespace std;

void moveZeroEnd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int array[] = {2, 0, 4, 5, 0, 0, 9};
    // int n = sizeof(array) / sizeof(array[0]);
    moveZeroEnd(array, 7);
    return 0;
}