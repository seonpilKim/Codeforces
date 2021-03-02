#include <iostream>
#include <queue>

#define MAX 101

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;

	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		queue<int> q;
		int min = MAX;

		while (n--) {
			int hero;
			cin >> hero;
			q.push(hero);
			if (hero < min) min = hero;
		}

		n = 0;
		while (!q.empty()) {
			int hero = q.front(); q.pop();
			if (hero > min) n++;
		}
		cout << n << '\n';
	}


	return 0;
}