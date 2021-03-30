#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <limits.h>
#include <math.h>
#include <map>

using namespace std;

long long gcd(const long long& a, const long long& b) {
	long long A = a, B = b;
	if (a < b) {
		long long tmp = A;
		A = b;
		B = tmp;
	}

	while (A % B) {
		long long r = A % B;
		A = B;
		B = r;
	}

	return B;
}

long long gcdSum(const long long& X) {
	long long tmp = X;
	long long digitSum = 0;

	while (tmp) {
		digitSum += tmp % 10;
		tmp /= 10;
	}

	return gcd(X, digitSum);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;

	cin >> T;

	while (T--) {
		long long X;

		cin >> X;

		if (gcdSum(X) != 1)
			cout << X << '\n';
		else if (gcdSum(X + 1) != 1)
			cout << X + 1 << '\n';
		else if (gcdSum(X + 2) != 1)
			cout << X + 2 << '\n';		
	}
	return 0;
}