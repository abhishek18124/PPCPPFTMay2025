class Solution {
public:

	// time : 3n.const ~ O(n)
	// space: n due r[] ~ O(n)

	int trap(vector<int>& height) {

		int n = height.size();

		vector<int> r(n);
		r[n - 1] = height[n - 1];
		for (int i = n - 2; i >= 0; i--) {
			r[i] = max(r[i + 1], height[i]);
		}

		int ans = 0;
		int maxSofar = 0; // track maximum of all the heights from 0 to i // maxSofar works like li
		for (int i = 0; i < n; i++) {
			// find out the water trapped on top of the ith building
			maxSofar = max(maxSofar, height[i]);
			int wi = min(maxSofar, r[i]) - height[i];
			ans += wi;
		}

		return ans;

	}
};