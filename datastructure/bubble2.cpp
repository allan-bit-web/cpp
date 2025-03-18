
// Bubble sort in C++

#include <iostream>
using namespace std;

// perform bubble sort
void bubbleSort(int array[], int n) {

  // loop to access each array element
  for (int i = 0; i < n -1; ++i) {

    // loop to compare array elements
    for (int j = 0; j < n - i - 1; ++j) {

      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[j] > array[j + 1]) {

        // swapping elements if elements
        // are not in the intended order
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

// print array
void printArray(int array[], int n) {
  for (int i = 0; i < n; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  int n;
  cout<<"enter the numbers to be sorted:";
  cin >>n;
  int array[n];
  for (int i=0;i<n;++i){
  cin >> array[i];
  }

  bubbleSort(array, n);

  cout << "Sorted Array in Ascending Order:\n";
  printArray(array, n);
}
