

#include <iostream>
using namespace std;
int binarySearch(int arr[], int low, int high, int x)//x is the search key
{
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main(void)
{
    int n;
	cout<< "Enter the number of elements:";
	cin>>n;
	int arr[n];
	cout<< "enter  the elements:";
	for (int i=0;i<n;i++){
        cin>> arr[i];
	}
	int x;
	cout<<"Enter the number x:";
	cin>> x;
    int result = binarySearch(arr, 0, n - 1, x);
    if(result == -1) {cout << "Element is not present in array";}
    else {cout << "Element is present at index " << result;}
    return 0;
}
