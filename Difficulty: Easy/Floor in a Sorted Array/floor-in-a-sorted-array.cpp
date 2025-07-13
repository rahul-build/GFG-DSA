class Solution {
public:
    int findFloor(vector<int>& arr, int x) {
        int low = 0, high = arr.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] <= x) {
                ans = mid; // possible floor
                low = mid + 1; // move right to find last occurrence ≤ x
            } else {
                high = mid - 1;
            }
        }
        // for first occurance
        // if (arr[mid] <= x) {
        //         ans = mid;         // possible floor
        //         high = mid - 1;    // move left for earlier occurrence
        //     } else {
        //         high = mid - 1;
        //     }
        // }

        return ans; // -1 if not found
    }
};
// Time and Space Complexity:
// Time: O(log N) — Binary search.

// Space: O(1)

