#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<int> st;
	vector<char> pp;
	int n;
	int cnt = 1;
	cin >> n;

	while (n--) {
		int num;
		cin >> num;
		while (cnt <= num) {
			st.push(cnt);
			cnt++;
			pp.push_back('+');
		}

		if (st.top() == num) {
			st.pop();
			pp.push_back('-');
		}
		else {
			cout << "NO";
			return 0;
		}
	}

	for (auto t : pp) cout << t << '\n';

	return 0;
}