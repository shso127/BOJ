#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr1[7], arr2[7] = { 100,100,100,100,100,100,100 };
	int sum = 0;
	for (int i = 0; i < 7; i++) {
		cin >> arr1[i];
		if (arr1[i] % 2 == 1) {
			sum += arr1[i];
			arr2[i] = arr1[i];
		}
	}

	if (*min_element(arr2, arr2 + 7) == 100)
		cout << -1;
	else {
		cout << sum << "\n";
		cout << *min_element(arr2, arr2 + 7);
	}
	
	return 0;
}