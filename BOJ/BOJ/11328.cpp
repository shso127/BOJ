#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	string s1, s2;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int a1[26] = {}, a2[26] = {};

		cin >> s1 >> s2;
		if (s1.length() != s2.length()) {
			cout << "Impossible\n";
			continue;
		}

		for (int j = 0; j < s1.length(); j++) {
			a1[s1[j] - 'a']++;
			a2[s2[j] - 'a']++;
		}

		int cnt = 0;
		for (int i = 0; i < 26; i++)
			if (a1[i] == a2[i]) cnt++;

		if (cnt == 26)
			cout << "Possible\n";
		else
			cout << "Impossible\n";
	}

	return 0;
}