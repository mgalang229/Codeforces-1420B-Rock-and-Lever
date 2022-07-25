#include <bits/stdc++.h>

using namespace std;

//int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
//int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};

//int dx[4] = {1, 0, -1, 0};
//int dy[4] = {0, 1, 0, -1};

//int dx[4] = {-1, -1, 1, 1};
//int dy[4] = {-1, 1, -1, 1};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		vector<long long> counter(30, 0);
		for (int i = 0; i < n; i++) {
			int temp = a[i];
			int exp = 0;
			for (int bit = 0; bit < 30; bit++) {
				if ((temp >> bit) == 1) {
					exp = bit;
				}
			}
			counter[exp]++;
		}
		long long ans = 0;
		for (int i = 0; i < 30; i++) {
			ans += ((counter[i] * (counter[i] - 1)) / 2);
		}
		cout << ans << '\n';
	}
	return 0;
}
