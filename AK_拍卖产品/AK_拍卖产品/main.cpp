#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int min(int n, int m) {
	return n < m ? n : m;
}

int main() {
	int n, m, price;
	cin >> n >> m;     //产品数目：n，客户数目：m
	vector<int> viPrice;

	for (int i = 0; i < m; ++i) {
		cin >> price;
		viPrice.push_back(price);
	}

	sort(viPrice.begin(),viPrice.end());  //排序

	int index, sum, result;
	int max = 0;

	for (index = 0; index < m; ++index) {
		sum = viPrice[index] * min(n, m  - index);    //limitation of products.
		if (max < sum) {
			max = sum;
			result = index;
		}
	}

	cout << "利润最大化售价为： " << viPrice[result] << endl;

	system("pause");
	return 0;
}