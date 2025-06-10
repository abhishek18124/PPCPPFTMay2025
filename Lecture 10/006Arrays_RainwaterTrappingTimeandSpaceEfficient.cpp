class Solution {
public:

    // time : O(n)
    // space: O(1)

    int trap(vector<int>& height) {

        int i = 0;
        int j = height.size() - 1;

        int ans = 0;

        int l = 0; // max(h[0...i])
        int r = 0; // max(h[j...n-1])

        while (i <= j) {

            l = max(l, height[i]);
            r = max(r, height[j]);

            if (l < r) {
                int wi = l - height[i];
                ans += wi;
                i++;
            } else {
                int wj = r - height[j];
                ans += wj;
                j--;
            }
        }

        return ans;
    }
};