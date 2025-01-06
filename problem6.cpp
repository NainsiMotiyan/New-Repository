#include <iostream>
using namespace std;

int* countBits(int n) {
    int* result = new int[n + 1];
    result[0] = 0;
    for (int i = 1; i <= n; i++) {
        result[i] = result[i >> 1] + (i & 1);
    }
    return result;
}

int main() {
    int n = 10;
    int* result = countBits(n);
    
    for (int i = 0; i <= n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    delete[] result;
    return 0;
}

