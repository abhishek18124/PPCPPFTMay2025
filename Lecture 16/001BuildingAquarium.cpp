#include<iostream>
#include<vector>

using namespace std;

bool f(int n, vector<int>& a, int x, int m) { // time : O(n)

    // can we build a tank of height 'm' such that water consumption allowed is <= x units

    long long sum = 0; // to track total water trapped above columns such that tank height is 'm'

    for (int hgt : a) {
        sum = sum + max(0, m - hgt); // m-hgt represents water trapped on top of current column
    }

    return sum <= x;

}

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int s = 1;
        int e = 2e9;

        int ans;

        while (s <= e) { // time : log(e-s).n

            int m = s + (e - s) / 2;

            // can we build a tank of hgt 'm' such that water consumption is <= x

            if (f(n, a, x, m)) {
                // yes, you can a build a tank of hgt 'm' such that consumption is <= x
                ans = m;
                // to maximize the ans, go towards the right of the mid point
                s = m + 1;
            } else {
                // no, you cannot build a tank of hgt 'm' therefore to find
                // the answer go towards the left of the mid point
                e = m - 1;
            }

        }

        cout << ans << endl;

    }

    return 0;
}