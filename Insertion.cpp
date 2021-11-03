#include <iostream>
using namespace std;

int insert(int arr[], int n, int element, int index)
{
    for (int i = n; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return n;
}
int main()
{
    int ut[9] = {2, 5, 45, 13, 33};
    insert(ut, 9, 8552, 3);
    for (int i = 0; i < 9; i++)
    {
        cout << ut[i] << " ";
    }
    return 0;
}