#include<iostream>
using namespace std;
#include <iostream>
using namespace std;
    int minBitFlips(int start, int goal) {
        int ans = start ^ goal;
        int count = 0;
        for (int i = 0; i < 32; i++) {
            if (ans & (1 << i)) {
                count = count + 1;
            }
        }
        return count;
    }

int main() {

    int start = 10, goal = 7;
    cout << minBitFlips(start, goal) << endl;
    return 0;
}
