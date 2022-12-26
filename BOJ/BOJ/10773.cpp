#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<int> st;
	int k;
	cin >> k;
	while (k--) {
		int num;
		cin >> num;
		if (num == 0) {
			st.pop();
		}
		else {
			st.push(num);
		}
	}

	int sum = 0;
	while (!st.empty()) {
		sum += st.top();
		st.pop();
	}
	cout << sum;

	return 0;
}