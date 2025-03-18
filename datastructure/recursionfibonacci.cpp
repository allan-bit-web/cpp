
 #include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num, result;
    cout<< "enter the fibonacci number:";
    cin>> num;
    result = fibonacci(num);
    cout << result << endl;
    return 0;
}
