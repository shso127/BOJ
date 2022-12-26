#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<pair<int, int>> st1;
	st1.push({ 1000000001,0 });
	stack<int> st2;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int height;
		cin >> height;
		st2.push(height);
	}

	long long sum = 0;
	for (int i = 1; i <= n; i++) {
		int height = st2.top();
		st2.pop();
		while (st1.top().first <= height) {
			st1.pop();
		}
		sum += i - st1.top().second - 1;
		st1.push({ height,i });
	}

	cout << sum;
}