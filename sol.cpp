#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	int beads = 0;
	int n = (int) s.size();
	for (int i = 0; i < n; i++) {
		beads += (s[i] == 'o');
	}
	int links = n - beads;
	// we need to check if there beads
	// if there are, then we need to check again if the no. of links is divible by
	// the no. of beads
	// if there aren't any beads, then the answer is YES
	if (beads > 0) {
		cout << (links % beads == 0 ? "YES" : "NO");
	} else {
		cout << "YES";
	}
	cout << '\n';
	return 0;
}
