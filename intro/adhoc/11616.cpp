#include <bits/stdc++.h>
using namespace std;

string convert(string s) {
	map <char, int> mp;
	mp['I'] = 1;
	mp['V'] = 5;
	mp['X'] = 10;
	mp['L'] = 50;
	mp['C'] = 100;
	mp['D'] = 500;
	mp['M'] = 1000;
	res = ""
	if(is_digit(s[0])) {

	}
	else {
		int cnt = 0;
		for(char &c : s){
			cnt += mp[c];
		}
	}
	return res;
}

int main() {
	string s;
	while(cin >> s) {
		cout << convert(s) << '\n';
	}
	return 0;
}