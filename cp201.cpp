#include <iostream>
#include <vector>

int combinationSumCount(std::vector<int>& candidates, int target) {
    std::vector<int> dp(target + 1, 0);
    dp[0] = 1;  // Base case: there's one way to make sum 0 - by not choosing any number

    for (int i = 1; i <= target; ++i) {
        for (int candidate : candidates) {
            if (i - candidate >= 0) {
                dp[i] += dp[i - candidate];
            }
        }
    }

    return dp[target];
}

int main() {
    std::vector<int> candidates = {2, 3, 6, 7};
    int target = 5;
    int count = combinationSumCount(candidates, target);
    std::cout << count << std::endl;

    return 0;
}


