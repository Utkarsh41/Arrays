#include <iostream>

using namespace std;

int main()
{
    int i , arr[8] , rev_arr = 0;
   for (i=0 ; i <= 8 ; i++)
   {
       cout<<"Enter the values of an array:"<<endl;
       cin>>arr[i];
   }
   for ( i = 0; i <= 8 ; i++)
   {
       cout<<"The values of Array are:"<<endl;
       cout<<arr[i];
   }
   //loop to reverse an array
   cout<<"The reversed array is:"<<endl;
   for ( i = 8; i >= 0 ; i--)
   {
       cout<<arr[i]<<" ";

   }
   cout<<endl;
    return 0;
}
