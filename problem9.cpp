#include <iostream>
using namespace std;

void PowerSet(int num[], int n) {
    int Subsets = 1 << n;
    
    for (int i = 0; i < Subsets; i++) {
        cout << "{ ";
        
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                cout << num[j] << " ";
            }
        }
        
        cout << "}\n";
    }
}

int main() {
    int num[] = {1, 2, 3};
    int n = sizeof(num) / sizeof(num[0]);
    
    PowerSet(num, n);
    
    return 0;
}
