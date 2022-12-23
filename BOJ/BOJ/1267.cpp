#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[20], n;
	int sumYoungsick = 0, sumMinsick = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sumYoungsick += (arr[i] / 30*10 + 10);
		sumMinsick += (arr[i] / 60 * 15 + 15);
	}

	if (sumYoungsick == sumMinsick) {
		cout << "Y M " << sumMinsick;
	}
	else if (sumMinsick > sumYoungsick) {
		cout << "Y " << sumYoungsick<<'\n';
	}
	else {
		cout << "M " << sumMinsick;
	}

	return 0;

}