#include <iostream>
#include <climits>
using namespace std;

int divide(int dividend, int divisor) {
    if (dividend == 0) {
        return 0;
    }
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX; 
    }

    bool sign = (dividend > 0) ^ (divisor > 0);

    int n = abs(dividend); 
    int d = abs(divisor);  

    int ans = 0;
    while (n >= d) {
        int temp = d, multiple = 1;

        while (n >= (temp << 1)) { 
            temp <<= 1;  
            multiple <<= 1;
        }

        n -= temp; 
        ans += multiple;
    }

    return sign ? -ans : ans; 
}

int main() {
    int dividend = 27, divisor = 4;
    cout << divide(dividend, divisor) << endl;
    return 0;
}
