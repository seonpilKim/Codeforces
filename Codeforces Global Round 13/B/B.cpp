#include <iostream>
#include <algorithm>
#include <math.h>
#include <limits.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;

	cin >> t;

	while (t--) {
		int n, u, v;
		int ans = INT_MAX;
		int* arr;

		cin >> n >> u >> v;
		arr = new int[n + 1];

		for (int i = 1; i <= n; i++) {
			cin >> arr[i];
			if (i > 1) {
				if (abs(arr[i] - arr[i - 1]) >= 2) ans = 0;
				if (abs(arr[i] - arr[i - 1]) == 1) ans = min(ans, min(u, v));
				if (arr[i] == arr[i - 1]) ans = min(ans, v + min(u, v));
			}
		}

		cout << ans << '\n';
	}

	return 0;
}