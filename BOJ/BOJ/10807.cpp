#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a[100];
	int n, v, cnt = 0;

	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> v;
	for (int i = 0; i < n; i++) {
		if (a[i] == v)
			cnt++;
	}

	cout << cnt;
	
	return 0;
}