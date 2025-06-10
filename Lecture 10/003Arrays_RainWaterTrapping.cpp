class Solution {
public:

	// time : O(n^2)
	// space: O(1)

	int trap(vector<int>& height) {

		int n = height.size();
		int ans = 0;

		for (int i = 0; i < n; i++) {

			// find out the water trapped
			// on top of the ith

			// li = max(h[0...i])

			int li = height[i]; // assume ith building is the tallest in the range [0, i]
			for (int j = i - 1; j >= 0; j--) { // verify the assumption by iterating over buildings from i-1 to 0
				li = max(li, height[j]);
			}

			// ri = max(h[i..n-1])

			int ri = height[i]; // assume ith building is the tallest in the range [i, n-1]
			for (int j = i + 1; j <= n - 1; j++) { // verify the assumption by iterating over buildings from i+1 to n-1
				ri = max(ri, height[j]);
			}

			int wi = min(li, ri) - height[i];
			ans += wi;

		}

		return ans;
	}
};