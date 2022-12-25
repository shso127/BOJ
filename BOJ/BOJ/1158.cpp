#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;

	list<int> ls;
	for (int i = 0; i < n; i++)	ls.push_back(i + 1);

	cout << '<';
	auto t = ls.begin();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k - 1; j++) {
			if (t == ls.end()) {
				t = ls.begin();
			}
			t++;
		}
		if (t == ls.end()) t = ls.begin();
		if (ls.size() != 1) {
			cout << *t << ", ";
		}
		else cout << *t;

		t = ls.erase(t);
	}
	cout << '>';
	
	return 0;
}