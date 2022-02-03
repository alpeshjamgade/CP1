#include <bits/stdc++.h>
using namespace std;

int main() {
	string line;
	while(getline(cin, line)) {
		stringstream ss(line);
		string s;
		bool flag = 0;
		while(ss >> s) {
			reverse(s.begin(), s.end());
			if(flag) cout << " ";
			cout << s;
			flag = 1;
		}
		cout << '\n';
	}
}