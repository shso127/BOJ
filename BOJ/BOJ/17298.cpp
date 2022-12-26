#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<int> st1, st2, st3;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		st1.push(num);
	}

	for (int i = 0; i < n; i++) {
		int num = st1.top();
		while (!st2.empty() && st2.top() <= num) {
			st2.pop();
		}

		if (st2.empty()) st3.push(-1);
		else st3.push(st2.top());
		st1.pop();
		st2.push(num);
	}

	for (int i = 0; i < n; i++) {
		cout << st3.top() << ' ';
		st3.pop();
	}
}