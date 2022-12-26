#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	queue<int> qu;
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		if (s == "push") {
			int x;
			cin >> x;
			qu.push(x);
		}
		else if (s == "pop") {
			if (!qu.empty()) {
				cout << qu.front() << '\n';
				qu.pop();
			}
			else cout << -1 << '\n';
		}
		else if (s == "size") {
			cout << qu.size() << '\n';
		}
		else if (s == "empty") {
			if (qu.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if (s == "front") {
			if (!qu.empty()) cout << qu.front() << '\n';
			else cout << -1 << '\n';
		}
		else {
			if (!qu.empty()) cout << qu.back() << '\n';
			else cout << -1 << '\n';
		}
	}
}