#include <iostream>
#include <math.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;

	cin >> t;

	while (t--) {
		int n, k;
		int n_moves;
		cin >> n >> k;

		if (n % 2 == 1) {
			int interval = n / 2;

			int n_doubles = ceil((double)k / interval) - 1;
			n_moves = n_doubles * 2 + k - n_doubles;
		}
		else n_moves = k;

		cout << (n_moves % n == 0 ? n : n_moves % n) << '\n';
	}

	return 0;
}