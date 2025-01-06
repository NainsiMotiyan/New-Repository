#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        for (int i = 0; i < 31; i++) {
            if (n == pow(2, i)) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution solution;
    int n = 16;
    cout << solution.isPowerOfTwo(n) << endl;
    return 0;
}
