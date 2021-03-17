#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <string>
#include <math.h>
#include <limits.h>

#define MAX INT_MAX

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;

	cin >> T;

	while (T--) {
		int n, k;

		cin >> n >> k;

		vector<int> v;
		for (int i = 1; i <= n; i++) {
			if (i >= ceil((double)k / 2) && i != k)
				v.push_back(i);
		}

		cout << v.size() << '\n';
		for (int num : v) {
			cout << num << ' ';
		}
		cout << '\n';

	}


	return 0;
}