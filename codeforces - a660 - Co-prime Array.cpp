#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n, k = 0;
	long long int temp;
	vector<long long int> vec;
	vector<long long int> covec;
	long long int mdc(long long int a, long long int b);

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		vec.push_back(temp);
	}

	for (int i = 0; i < n-1; ++i)
	{
		covec.push_back(vec[i]);
		if(mdc(vec[i],vec[i+1]) != 1){
			k ++;
			covec.push_back(1);
		}
	
	}
	covec.push_back(vec[n-1]);

	cout << k << endl;

	for (int i = 0; i < n+k; ++i)
	{
		cout << covec[i] << " ";
	}

	cout << endl;



	return 0;
}

long long int mdc(long long int a, long long int b){
	if(a%b == 0) return b;
	else{
		return mdc(b,a%b);
	}

}


