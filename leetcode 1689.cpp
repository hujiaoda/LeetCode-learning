#include<iostream>
#include<algorithm>
#include<ranges>
using namespace std;

int solve(string n) {
	return ranges::max(n)-'0';
}

int poorsolve(string n) {//我第一次做的时候用的方法,拉完了
	int size = n.size(), count = 0;
	while (1) {
		int key = 1;
		for (int i = 0; i < size; i++) {
			if (n[i] > '0') {
				n[i]--;
			}
			if (n[i] != '0') {
				key = 1;
			}
		}
		count++;
		if (key) {
			break;
		}
	}
	return count;
}
int main() {
	string s;
	cin >> s;
	int ans=solve(s);
	cout << ans;
	return 0;
}
