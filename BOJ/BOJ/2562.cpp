#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int num[9];
	for (int i = 0; i < 9; i++) cin >> num[i];

	int maxNum = 0, index = 0;
	for (int i = 0; i < 9; i++) {
		if (maxNum < num[i]) {
			maxNum = num[i];
			index = i + 1;
		}
	}

	cout << maxNum << '\n' << index;

	return 0;
}