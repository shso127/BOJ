#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k, s, y;
	int min = 12;
	int a[12] = {};
	cin >> n >> k;

	while (n--) {
		cin >> s >> y;
		a[s + 2 * (y - 1)]++;
	}

	for (int i = 0; i < 12; i++) {
		if (a[i] == 0) min--;
		if (a[i] - k > 0 && a[i] % k != 0) min += a[i] / k;
		else if (a[i] - k > 0) min += a[i] / k - 1;
	}

	cout << min;

	return 0;
}