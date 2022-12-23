#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c;
	int arr[10] = {};
	cin >> a >> b >> c;
	int result = a * b * c;

	while (result)
	{
		arr[result % 10]++;
		result /= 10;
	}
	
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << '\n';
	}

	return 0;
}