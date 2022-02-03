#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<string, set<string>> mp;
	for (int i = 0; i < n; i++) {
		
		string a, b;
		while(cin >> a) {
			cin.ignore();
			getline(cin, b);
			mp[a].insert(b);
		}
		
	}
	for(auto a: mp) {
		cout << a.first<< ' ' << a.second.size() << '\n';
	}

	return 0;
}