class Solution {
public:

    // time : O(n)
    // space: O(1)

    int maxArea(vector<int>& height) {

        int n = height.size();
        int maxSofar = 0;

        int i = 0;
        int j = n - 1;

        while (i < j) {
            // find the area of the container formed using
            // the ith and jth line

            int wij = j - i;
            int hij = min(height[i], height[j]);
            int aij = wij * hij;
            maxSofar = max(maxSofar, aij);

            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }

        }

        return maxSofar;
    }
};