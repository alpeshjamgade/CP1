#include <bits/stdc++.h>
using namespace std;

int count_bottles(int n) {
	int drinks = n;
	int empty = n+1;
	while(empty >= 3) {
		drinks += empty/3;
		empty = empty%3 + empty/3;
	}
	return drinks;
}

int main() {
	int n;
	while (cin >> n) {
		cout << count_bottles(n) << '\n';
	}
	return 0;
}