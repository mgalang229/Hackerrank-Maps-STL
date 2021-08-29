#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int q;
	cin >> q;
	map<string, int> m;
	// simply follow the instructions in the problem statement
	for (int i = 0; i < q; i++) {
		int type;
		string x;
		cin >> type >> x;
		if (type == 1) {
			int y;
			cin >> y;
			map<string, int>::iterator itr = m.find(x);
			if (itr == m.end()) {
				m.insert(make_pair(x, y));
			} else {
				m[x] = m[x] + y;
			}
		} else if (type == 2) {
			m.erase(x);
		} else {
			cout << m[x] << '\n';
		}
	}
	return 0;
}
