#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:

    bool f(vector<int>& bloomDay, int m, int k, int timeLimit) { // time : O(n)

        // can I make 'm' bouquets of 'k' adj. flowers in given timeLimit i.e. mid no. of days ?

        int cnt = 0; // to track adjacent bloomed flowers we've picked so far
        int bouquetCnt = 0; // to track bouquets we've made so far

        for (int day : bloomDay) {

            if (day <= timeLimit) {

                // current flower has bloomed within the timeLimit therefore you can
                // pick the current flower

                cnt++;
                if (cnt == k) {

                    // you've made a bouquet of k adj flowers
                    bouquetCnt++;
                    cnt = 0;

                }

            } else {

                // current flower has not bloomed within the timeLimit therefore you
                // cannot pick it plus you've to reset the cnt to make sure we only
                // pick adjacent flowers

                cnt = 0;

            }

        }

        return bouquetCnt >= m;

    }

    // bool f(vector<int>& bloomDay, int m, int k, int timeLimit) {

    //     // can I make 'm' bouquets of 'k' adj. flowers in given timeLimit i.e. mid no. of days ?

    //     int cnt = 0; // to track adjacent bloomed flowers we've picked so far

    //     for (int day : bloomDay) {

    //         if (day <= timeLimit) {

    //             // current flower has bloomed within the timeLimit therefore you can
    //             // pick the current flower

    //             cnt++;
    //             if (cnt == k) {

    //                 // you've made a bouquet of k adj flowers
    //                 m--;
    //                 if (m == 0) {
    //                     // you've managed to make 'm' bouquets of 'k' adj. flowers within the timeLimit
    //                     return true;
    //                 }
    //                 cnt = 0;

    //             }

    //         } else {

    //             // current flower has not bloomed within the timeLimit therefore you
    //             // cannot pick it plus you've to reset the cnt to make sure we only
    //             // pick adjacent flowers

    //             cnt = 0;

    //         }

    //     }

    //     return false;

    // }

    int minDays(vector<int>& bloomDay, int m, int k) {

        int s = *min_element(bloomDay.begin(), bloomDay.end());
        int e = *max_element(bloomDay.begin(), bloomDay.end());

        int ans = -1;

        // total time : O(log(e-s).n)

        while (s <= e) { // log(e-s) where e-s is the size of the search space


            int mid = s + (e - s) / 2;

            // can I make 'm' bouquets of 'k' adj flowers in 'mid' no. of days ?

            if (f(bloomDay, m, k, mid)) {
                // yes, you can make 'm' bouquets of 'k' adj flowers in 'mid' no. of days
                ans = mid;
                // to minimize the answer go towards the left of the mid point
                e = mid - 1;

            } else {
                // no, you cannot make 'm' bouquets of 'k' adj flowers in 'mid' no. of days
                // to find the answer you've go towards the right of the mid point
                s = mid + 1;

            }

        }

        return ans;

    }
};

int main() {

    // todo ...

    return 0;
}