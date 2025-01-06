#include<iostream>
using namespace std;

int square(int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result += n;
    }
    return result;
}

int main() {
    int n = 8;
    cout << "Square of " << n << " is: " << square(n) << endl;
    return 0;
}

