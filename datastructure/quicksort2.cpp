#include <iostream>
using namespace std;


void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


int partition(int A[], int lo, int hi) {
    int p = A[lo];
    int i = lo - 1;
    int j = hi + 1;

    while (true) {

        do {
            i = i + 1;
        } while (A[i] < p);


        do {
            j = j - 1;
        } while (A[j] > p);


        if (i >= j) {
            return j;
        }


        swap(A[i], A[j]);
    }
}


void quicksort(int A[], int lo, int hi) {
    if (lo >= 0 && hi >= 0 && lo < hi) {

        int p = partition(A, lo, hi);


        quicksort(A, lo, p);


        quicksort(A, p + 1, hi);
    }
}


void displayArray(int A[], int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;


    cout << "Enter the number of elements: ";
    cin >> n;


    int A[n];


    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }




    cout << " unsorted: ";
    displayArray(A, n);

    quicksort(A, 0, n - 1);

    cout << "Sorted: ";
    displayArray(A, n);

    return 0;
}

