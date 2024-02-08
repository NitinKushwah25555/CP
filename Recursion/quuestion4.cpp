#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    if (n <= 0) {
       cout << "Invalid input" << endl;
       return -1; 
    } else if (n==1) {
        return 0;
    } else if (n==2) {
        return 1;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

int main() {
    int n;
    cout << "Enter the number= ";
    cin >> n;
    int result = fib(n);
    if (result != -1) {
        cout << result;
    }
    return 0;
}

