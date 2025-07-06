#include <iostream>
#include <vector>
using namespace std;

void pairsum(vector<int> nums, vector<int>& ans, int n, int t) {
    int l = 0, r = n - 1;

    while (l < r) {
        int sum = nums[l] + nums[r];
        if (sum == t) {
            ans.push_back(l);
            ans.push_back(r);
            return; // Exit after finding the pair
        } else if (sum < t) {
            l++;
        } else {
            r--;
        }
    }
}

int main() {
    vector<int> nums = {7, 9, 12, 15, 18};
    int t = 30;
    int n = nums.size();
    vector<int> ans;

    pairsum(nums, ans, n, t);

    for (int i : ans) {
        cout << i << ", ";
    }

    return 0;
}
