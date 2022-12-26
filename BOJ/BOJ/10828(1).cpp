#include <bits/stdc++.h>
using namespace std;

int dat[10000];
int pos = 0;

void push(int x) {
	dat[pos] = x;
	pos++;
}

void pop() {
	if (pos == 0) cout << -1 << '\n';
	else {
		pos--;
		cout << dat[pos] << '\n';
	}
}

void size() {
	cout << pos << '\n';
}

void empty() {
	if (pos == 0) cout << 1 << '\n';
	else cout << 0 << '\n';
}

void top() {
	if (pos == 0) cout << -1 << '\n';
	else {
		cout << dat[pos - 1] << '\n';
	}
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		if (s == "push") {
			int i;
			cin >> i;
			push(i);
		}
		else if (s == "pop") pop();
		else if (s == "size") size();
		else if (s == "empty") empty();
		else if (s == "top") top();
	}
	
	return 0;
}