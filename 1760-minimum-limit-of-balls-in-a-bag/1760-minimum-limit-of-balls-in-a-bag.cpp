class Solution {
public:

    bool isPossible(int maxBallsInBag, vector<int> nums, int maxOperations) {
        int totalOperations = 0;

        for (int num : nums) {
            int operations = (int)ceil((double)num / maxBallsInBag) - 1;
            totalOperations += operations;

            if (totalOperations > maxOperations) {
                return false;
            }
        }

        return true;
    }

    int minimumSize(vector<int>& nums, int maxOperations) {
        
        int l = 1, r = 0;
        for (int num : nums) r = max(r, num);
        int ans = r;

        while (l <= r) {
            int mid = (l + r) / 2;

            if (isPossible(mid, nums, maxOperations)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        return ans;
    }
};