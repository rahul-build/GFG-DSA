class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
                // int n = arr.size();
    //      d = d%n;
    //       if (d == 0) return;
    //   vector<int> temp;
    //     for (int i = 0;i<d;i++){
    //         temp.push_back(arr[i]);
    //     }
    //     for(int i = d ;i<n;i++){
    //         arr[i-d] = arr[i];
    //     }
    //     for(int i = n-d;i<n;i++){
    //         arr[i] = temp[i-(n-d)];
    //     }
    // }
   int n = arr.size();
    d = d % n;  // Handle d > n
    if (d == 0) return;

    reverse(arr.begin(), arr.begin() + d);     // Reverse first d
    reverse(arr.begin() + d, arr.end());       // Reverse the rest
    reverse(arr.begin(), arr.end()); 
    }
};
