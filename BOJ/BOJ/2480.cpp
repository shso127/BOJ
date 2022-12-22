#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c;
	cin >> a >> b >> c;

	if (a == b && b == c)
		cout << 10000 + 1000 * a;
	else if (a == b)
		cout << 1000 + 100 * a;
	else if (b == c)
		cout << 1000 + 100 * b;
	else if (c == a)
		cout << 1000 + 100 * c;
	else
		cout << max({ a, b, c }) * 100;

	return 0;
}