class Solution {
public:
    bool twoSum(vector<int>& arr, int target) {
        int left = 0;
        int right = arr.size() - 1;

        sort(arr.begin(), arr.end());  // Two-pointer only works on sorted array

        while (left < right) {
            int sum = arr[left] + arr[right];

            if (sum == target)
                return true;
            else if (sum < target)
                left++;
            else
                right--;
        }

        return false;
    }
};
