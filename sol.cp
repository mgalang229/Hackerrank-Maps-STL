#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int q;
	cin >> q;
	map<string, int> mp;
	for(int i=0; i<q; ++i) {
		int t;
		string x;
		cin >> t >> x;
		if (t==1) {
			int y;
			cin >> y;
			mp[x]+=y;
		}
		else if(t==2) {
			mp.erase(x);
		}
		else
			cout << mp[x] << "\n";
	}
}
