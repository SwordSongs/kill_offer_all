#include<iostream>
#include<string>

using namespace std;

int transform(int n, string s) {
	int sum = 0;
	int base = 1;

	for (int i = n-1; i>=0; --i) {
		sum += base * (s[i] - '0');
		base *= 2;
	}

	return sum;
}

int main() {
	string s;
	int n;

	cin >> n;
	cin >> s;
	int a = transform(n, s);
	cin >> s;
	int b = transform(n, s);
	cout << (a ^ b) << endl;
	system("pause");
	return 0;
}