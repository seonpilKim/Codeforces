#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, q;
	int* arr;
	int cnt = 0;

	cin >> n >> q;
	arr = new int[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		if (arr[i] == 1) cnt++;
	}

	while (q--) {
		int type, idx;
		cin >> type >> idx;

		if (type == 1) {
			int bef = arr[idx];
			arr[idx] = 1 - arr[idx];

			if (bef > arr[idx]) cnt--;
			else if (bef < arr[idx]) cnt++;
		}

		else if (type == 2) {
			if (idx <= cnt) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
	}

	return 0;
}