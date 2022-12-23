#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, arr[20];
	for (int i = 0; i < 20; i++) {
		arr[i] = i + 1;
	}

	for (int i = 0; i < 10; i++) {
		cin >> a >> b;
		for (int j = 0; a < b - j; a++, j++) {
			int temp = arr[a - 1];
			arr[a - 1] = arr[b - j - 1];
			arr[b - j - 1] = temp;
		}
	}

	for (int i = 0; i < 20; i++) {
		cout << arr[i] << " ";
	}

	return 0;

}