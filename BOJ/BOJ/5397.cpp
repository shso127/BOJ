#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		list<char> L;
		list<char>::iterator t = L.begin();
		for (auto c : s) {
			if (c == '<') {
				if (t != L.begin()) t--;
			}
			else if (c == '>') {
				if (t != L.end()) t++;
			}
			else if (c == '-') {
				if (t != L.begin()) {
					t--;
					t = L.erase(t);
				}
			}
			else {
				L.insert(t, c);
			}
		}
		for (auto c : L) {
			cout << c;
		}
		cout << '\n';
	}

	return 0;
}