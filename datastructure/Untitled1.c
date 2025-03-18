#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to generate all permutations of a given vector
void generatePermutations(vector<int>& nums, vector<vector<int>>& result, int index) {
    if (index == nums.size()) {
        result.push_back(nums);
        return;
    }

    for (int i = index; i < nums.size(); i++) {
        swap(nums[index], nums[i]);
        generatePermutations(nums, result, index + 1);
        swap(nums[index], nums[i]); // Backtrack
    }
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations;

    generatePermutations(nums, permutations, 0);

    cout << "Permutations of " << nums.size() << " elements:" << endl;
    for (const auto& perm : permutations) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;

