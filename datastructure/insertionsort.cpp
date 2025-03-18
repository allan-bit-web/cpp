

#include <iostream>
using namespace std;
void printArray(int array[], int n) {
  for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}
void insertionSort(int array[], int n) {
  for (int i = 1; i < n; i++) {
    int key = array[i];
    int j = i - 1;
    while (j >=0 &&  array[j]> key) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}
int main() {
  int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int A[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        }
  cout<< "unsorted array in descending order:\n";
  printArray(A,n);
  insertionSort(A, n);
  cout << "Sorted array in ascending order:\n";
  printArray(A, n);
}
