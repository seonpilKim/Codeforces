#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <map>
#include <stack>

using namespace std;

int arr[20];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;

	cin >> T;

	while (T--) {
		int n, w;
		cin >> n >> w;

		for (int i = 0; i < n; i++) {
			int num;
			cin >> num;
			arr[(int)log2(num)]++;
		}

		int h = 1, space_left = w;
		while (n) {
			int largest = -1;

			for (int power = 19; power >= 0; power--) {
				if (arr[power] && (1 << power) <= space_left) {
					largest = power;
					n--;
					break;
				}
			}

			if (largest == -1) {
				space_left = w;
				h++;
				for (int power = 19; power >= 0; power--) {
					if (arr[power] && (1 << power) <= space_left) {
						largest = power;
						n--;
						break;
					}
				}
			}
			
			arr[largest]--;
			space_left -= (1 << largest);
		}
		cout << h << '\n';
	}
	return 0;
}