#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		deque<int> dq;
		string p;
		int err = 0;
		cin >> p;
		
		int n;
		cin >> n;
		for (int i = 0; i < 2 * n + 1; i++) {
			if (n == 0) {
				char c;
				cin>>c; cin>>c; break;
			}
			if (i % 2 == 0) {
				char c; cin >> c;
			}
			else {
				int x;
				cin >> x;
				dq.push_back(x);
			}			
		}

		int reverse = 0;
		for (int i = 0; i < p.size(); i++) {
			if (p[i] == 'R') {
				reverse++;
			}
			else {
				if (!dq.empty() && reverse % 2 == 0) {
					dq.pop_front();
					n--;
				}
				else if (!dq.empty() && reverse % 2 == 1) {
					dq.pop_back();
					n--;
				}
				else {
					cout << "error\n";
					err++;
					break;
				}
			}
		}
		
		if (!err) {
			if (reverse % 2 == 1) {
				for (int i = 0; i < n / 2; i++) {
					int temp = dq[i];
					dq[i] = dq[n - i - 1];
					dq[n - i - 1] = temp;
				}
			}
			cout << '[';
			for (int i = 0; i < dq.size(); i++) {
				if (i != dq.size() - 1) cout << dq[i] << ',';
				else cout << dq[i];
			}
			cout << "]\n";
		}
	}
}