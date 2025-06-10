class Solution {
public:

    // time : O(n^2)
    // space: O(1)

    int maxArea(vector<int>& height) {

        int maxSofar = 0;
        int n = height.size();

        for (int i = 0; i <= n - 2; i++) {
            for (int j = i + 1; j <= n - 1; j++) {
                // find the area of the container
                // formed using the ith and jth
                // line
                int wij = j - i;
                int hij = min(height[i], height[j]);
                int aij = wij * hij;
                maxSofar = max(maxSofar, aij);
            }
        }

        return maxSofar;

    }
};