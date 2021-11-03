#include <iostream>
using namespace std;

void rotateLeftbyone(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int array[] = {2369, 4, 5, 5, 25, 9};
    rotateLeftbyone(array, 7);
    return 0;
}