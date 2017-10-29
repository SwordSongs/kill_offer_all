#include<iostream>
#include<set>
#include<algorithm>

using namespace std;

int main() {
	int n, m;
	int temp;
	cin >> n >> m;

	set<int> a;
	set<int> b;

	for (int i = 0; i < n; ++i) {
		cin >> temp;
		a.insert(temp);
	}

	for (int i = 0; i < m; ++i) {
		cin >> temp;
		b.insert(temp);
	}

	for (set<int>::iterator it = a.begin(); it != a.end(); ++it) {
		b.insert(*it);
	}

	//sort(b.begin(),b.end());         //set容器底层是用树实现的，本身有序。

	for (set<int>::iterator it = b.begin(); it != b.end(); ++it) {
		cout << *it << " ";
	}

	system("pause");
	return 0;
}