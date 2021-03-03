#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;

	cin >> t;

	while (t--) {
		int n;
		int cnt = 0;
		int a = 3;

		cin >> n;

		while (a * a <= 2 * n - 1) {
			cnt++;
			a += 2;
		}
		cout << cnt << '\n';
	}

	return 0;
}
