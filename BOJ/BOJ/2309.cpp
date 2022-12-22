#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr1[9], arr2[7];
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> arr1[i];
	}

	for (int i = 0; i < 8; i++) {
		sum = 0;

		for (int j = i + 1; j < 9; j++) {
			int temp = 0;
			sum = 0;

			for (int k = 0; k < 9; k++) {
				
				if (i == k || j == k)
					continue;

				sum += arr1[k];
				arr2[temp] = arr1[k];
				temp++;
			}

			if (sum == 100)
				break;
		}
		if (sum == 100)
			break;
	}

	sort(arr2, arr2 + 7);
	for (int i = 0; i < 7; i++) {
		cout << arr2[i] << "\n";
	}

	return 0;
}