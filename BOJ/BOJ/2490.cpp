#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[4];
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			cin >> arr[i];
			sum += arr[i];
		}

		if (sum == 0)
			cout << "D\n";
		else if (sum == 1)
			cout << "C\n";
		else if (sum == 2)
			cout << "B\n";
		else if (sum == 3)
			cout << "A\n";
		else
			cout << "E\n";
	}

	return 0;
}