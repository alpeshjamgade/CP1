#include <bits/stdc++.h>
using namespace std;


string tex_it(string line) {
	int flag = 0;
	string res = "";
	for (int i = 0; i < line.length(); i++) {
		if (line[i] == '"' && !flag) {
			res += "``";
			flag ^= 1;
		}
		else if (line[i] == '"' && flag) {
			res += "''";
			flag ^= 1;
		}
		else{
			res += line[i];
		}

	}
	return res;
}

int main() {
	string line;
	int flag = 0;
	while (getline(cin, line, '\n')) {
		// cout << line << '\n';
		if (flag) cout << '\n';
		else flag ^= 1;
		cout << tex_it(line);

	}
}