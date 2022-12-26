#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N;
	cin >> N;

	stack<int> st;
	while (N--) {

		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int i;
			cin >> i;
			st.push(i);
		}
		else if (cmd == "pop") {
			if (st.size() != 0) {
				cout << st.top() << '\n';
				st.pop();
			}
			else cout << -1 << '\n';
		}
		else if (cmd == "size") {
			cout << st.size() << '\n';
		}
		else if (cmd == "empty") {
			if (st.empty()) cout << st.empty() << '\n';
			else cout<< st.empty() << '\n';
		}
		else {//top
			if (st.size() != 0) {
				cout << st.top() << '\n';
			}
			else cout << -1 << '\n';
		}
	}
	return 0;
}