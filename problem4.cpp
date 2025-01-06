#include <iostream>
using namespace std;

int Position(int n) {
    if (n == 0) {
        return -1;
    }
    if ((n & (n - 1)) == 0) {
        int count = 1;
        while (n > 1) {
            count++;
            n = n >> 1;
        }
        return count;
    }
    return -1;
}

int main() {
    int n = 64;
    cout << Position(n) << endl;

    n = 20;
    cout << Position(n) << endl;

    return 0;
}
