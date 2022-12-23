#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int arr[10] = {};
	cin >> n;

	while (n)
	{
		if (((n % 10 == 6) || (n % 10 == 9)) && arr[6] > arr[9])
			arr[9]++;
		else if (((n % 10 == 6) || (n % 10 == 9)) && arr[6] < arr[9])
			arr[6]++;
		else
			arr[n % 10]++;
		n /= 10;
	}

	cout << *max_element(arr, arr + 10);

	return 0;
}