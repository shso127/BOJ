#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll a, b;
	cin >> a >> b;

	ll sub = abs(a - b) - 1;
	ll minVal = min(a, b);
	ll maxVal = max(a, b);

	if (a == b || maxVal - minVal == 1) {
		cout << 0;
		return 0;
	}

	cout << sub << '\n';
	for (ll i = 0; i < sub; i++) {
		cout << minVal + i + 1 << " ";
	}

	return 0;
}