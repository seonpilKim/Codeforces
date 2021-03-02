#include <iostream>
#include <vector>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;

	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		
		vector<int> v;

		if (n == 2) v.push_back(0);
		else if (n % 2 == 1) {
			for (int i = 0; i < n / 2; i++) {
				v.push_back(1);
			}
			for (int i = 0; i < n / 2; i++) {
				v.push_back(-1);
			}
		}
		else {
			for (int i = 0; i < n / 2 - 1; i++) {
				v.push_back(1);
			}
			v.push_back(0);
			for (int i = 0; i < n / 2 - 1; i++) {
				v.push_back(-1);
			}
		}

		for (int i = 0; i < v.size(); i++) {
			for (int j = 0; j < v.size() - i; j++) {
				cout << v[j] << ' ';
			}
		}
		v.clear();
		cout << '\n';
	}


	return 0;
}