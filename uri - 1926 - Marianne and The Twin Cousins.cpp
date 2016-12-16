#include <iostream>
#include <algorithm> 
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;

int main() {
	int n;
	long long int count, x,y;

	long long int top = 1000000;
	long long int squareTop = 1000;
	long long int *sum = new long long int[top+1];

	bool *primes = new bool[top+1];

	memset (primes,1, sizeof(bool) * (top+1));

	primes[0] = false;
	primes[1] = false;

	for (long long int i = 2; i < squareTop; ++i)
	{
		if(primes[i]){
			for (long long int j = i*i; j <= top; j+=i)
			{
				primes[j] = false;
			}
		}
	}

	count = 0;

	for (long long int i = 0; i <= top; ++i)
	{
		if(i+2 <= top){
			if(primes[i] && primes[i+2]){
				count++;
				sum[i] = count;
				continue;
			}
		}
		if(i-2 > 0){
			if(primes[i] && primes[i-2]){
				count++;	
			}
		}


		sum[i] = count;
	}
	


	cin >> n;

	for (long long int i = 0; i < n; ++i)
	{
		cin >> x >> y;
		if(x > y)swap(x,y);

		cout << sum[y]-sum[x-1] << endl;


	}

	
	



	return 0;
}


