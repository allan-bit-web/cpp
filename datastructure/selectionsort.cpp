#include <iostream>
using namespace std;
int main()
{
   int i;
   int j;
   int num;
   int P;
   int temp;
   int min;
   int arr[10];
   cout<<"Enter the number of elements:";
   cin>>num;
   cout<<"\n elements \n";
   for(i=0;i<num;i++)
   {
       cin>>arr[i];
   }
   for(i=0;i<num-1;i++)
   {
     min=arr[i];
     P=i;
     for(j=i+1;j<num;j++)
     {
       if(min>arr[j])
       {
         min=arr[j];
         P=j;
       }
     }
     temp=arr[i];
     arr[i]=arr[P];
     arr[P]=temp;

   }
   cout<<"\nSorted elements :\n";
   for(i=0;i<num;i++)
   {
      cout<<arr[i]<<"";
   }
   return 0;


}
