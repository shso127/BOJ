#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	deque<int> dq;
	int ans = 0;

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) dq.push_back(i);

	int m;
	cin >> m;
	while (m--) {
		int x;
		cin >> x;
		int idx = find(dq.begin(), dq.end(), x) - dq.begin();
		if (idx <= dq.size() - idx) {
			while (x != dq.front()) {
				int temp = dq.front();
				dq.pop_front();
				dq.push_back(temp);
				ans++;
			}
		}
		else {
			while (x != dq.front()) {
				int temp = dq.back();
				dq.pop_back();
				dq.push_front(temp);
				ans++;
			}
		}
		dq.pop_front();
	}
	cout << ans;
}