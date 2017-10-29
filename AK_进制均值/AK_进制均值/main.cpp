#include<iostream>

using namespace std;

int radixSum(int i, int A) {
	int sum = 0;

	while (A != 0) {
		sum += A % i;
		A /= i;
	}

	return sum;
}

int gcd(int a, int b) {
	if (b == 0)
		return a;

	int r = a % b;
	gcd(b,r);
}

int main() {
	int A;
	
	while (cin >> A) {
		int sum = 0;

		for (int i = 2; i <= A - 1; ++i) {
			sum += radixSum(i, A);
		}


		int max = sum > A - 2 ? sum : A - 2;
		int min = sum < A - 2 ? sum : A - 2;
		
		int r = gcd(max, min);  //Ô¼·Ö

		cout << sum / r << "/" << (A - 2) / r << endl;
	}

    system("pause");
	return 0;
}