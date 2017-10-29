#include<iostream>
#include<cmath>
using namespace std;

double dp[110][110];  

int main() {
	int n;
	cin >> n;
	double* a = new double[n+1];

	for (int i = 1; i <= n; ++i)  cin >> a[i];   //注意这里跟动态规划矩阵的下标关系

	dp[0][0] = 1.0;

	for (int i = 1; i <= n; ++i) {
		//cout << dp[i - 1][0] * (100 - a[i]) / 100;
		dp[i][0] = dp[i - 1][0] * (100 - a[i]) / 100;   //前i道题做对了0道
		
		for (int j = 1;j <= i; ++j) {     //前i道题做对了j道
			dp[i][j] = dp[i - 1][j] * (100 - a[i]) / 100 + dp[i - 1][j - 1] * a[i] / 100;
		}
	}

	double sum = 0.0;
	int start = static_cast<int>(floor(3*n/5+1));      //大于等于百分之60

	for (int i = start; i <= n; ++i)   sum += dp[n][i];
	
	printf("%.5f",sum);
	cout << endl;

	delete[] a;
	system("pause");
	return 0;
}