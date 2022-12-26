#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	queue<int> qu;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		qu.push(i);
	}

	for (int i = 0; i < 2*n; i++) {
		if (qu.size() == 1) {
			cout << qu.front();
			break;
		}

		if (i % 2 == 0) qu.pop();
		else {
			int temp = qu.front();
			qu.pop();
			qu.push(temp);
		}
	}
}