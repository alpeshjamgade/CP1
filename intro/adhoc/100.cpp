#include <bits/stdc++.h>
using namespace std;


int count_length(int n) {
	if (n == 1) return 1;
	else if (n&1) return 1 + count_length(3*n + 1);
	else return 1 + count_length(n/2);
}

int main() {
	int i, j, k;

	while(cin >> i >> j) {
		k=0;
		int mx = INT_MIN;
		int a = min(i, j), b = max(i, j);
		while(a <= b) {
			k++;
			mx = max(mx, count_length(a++));
		}
		cout << i << ' ' << j << ' ' << mx << '\n';
	}
}