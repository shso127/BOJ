#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, X;
	int arr[10000];
	cin >> N >> X;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if (arr[i] < X)
			cout << arr[i] << " ";
	}

	return 0;
}