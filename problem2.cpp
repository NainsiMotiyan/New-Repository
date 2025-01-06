#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xy = 0;
        for (int n : nums) {
            xy ^= n;
        }
        xy &= -xy;
        vector<int> result = {0, 0};
        for (int n : nums) {
            if (xy & n) {
                result[0] ^= n;
            } else {
                result[1] ^= n;
            }
        }
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 2, 1, 4};
    vector<int> result = solution.singleNumber(nums);
    cout << "The two unique numbers are: " << result[0] << " and " << result[1] << endl;
    return 0;
}
