#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin >> s;

	list<char> L;
	for (char c : s) L.push_back(c);
	list<char>::iterator cursor = L.end();

	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		char c;
		cin >> c;
		if (c == 'L') {
			if (cursor != L.begin()) cursor--;
		}
		else if (c == 'D') {
			if (cursor != L.end()) cursor++;
		}
		else if (c == 'B'){
			if (cursor != L.begin()) {
				cursor--;
				cursor = L.erase(cursor);
			}
		}
		else if (c == 'P') {
			char c1;
			cin >> c1;
			L.insert(cursor, c1);
		}
	}

	for (auto c : L) cout << c;
	
	return 0;
}