#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(A) A.begin(), A.end()
typedef vector<int> vi;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector<int> top(k + 1, n), bottom(k + 1, -1), left(k + 1, n), right(k + 1, -1);
       // time o(n*n)  10^5 * 10^5 >> 10^10 time 
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int color = min(a[i], a[j]);
                top[color] = min(top[color], i);
                bottom[color] = max(bottom[color], i);
                left[color] = min(left[color], j);
                right[color] = max(right[color], j);
            }
        }

        for (int color = 1; color <= k; ++color) {
            if (top[color] > bottom[color] || left[color] > right[color]) {
                cout << "0 ";
            } else {
                int width = right[color] - left[color] + 1;
                int height = bottom[color] - top[color] + 1;
                cout << width + height << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
