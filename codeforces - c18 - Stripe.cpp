#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, temp, res = 0;
	vector <int> sum;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{

		cin >> temp;

		if(i != 0){
			sum.push_back(temp+ sum[i-1]);
		}else{
			sum.push_back(temp);
		}
	}


	for (int i = 0; i < n-1; ++i)
	{
		if(sum[i] == sum[n-1]-sum[i])res ++;

	}

	cout << res << endl;

	return 0;
}