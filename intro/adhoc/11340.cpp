#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		map<char, int> mp;
		while(n--) {
			char c; int v; cin >> c >> v;
			mp[c] = v;	
		}
		int m;
		cin >> m;
		
		int cnt = 0;
		cin.ignore(); // ignore the '\n' that is left on inputstream
		for(int i = 0; i < m; i++) {
			string article;
			getline(cin, article, '\n');
			for(char c : article) {
				if (mp[c]) cnt+=mp[c];
			}
			// cout << article << '\n';
		}
		// cout << (float)cnt/100 << setprecision(2) << fixed << "$" << '\n';
		printf("%.2f$\n", float(cnt)/100);
	}
	return 0;
}