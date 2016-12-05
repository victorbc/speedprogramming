#include <iostream>
using namespace std;

int main ()
{
	int n, a, b, k;
	cin >> n;
	cin >> a;
	cin >> b;

	k= a + b;
	if (b < 0) {
		while (k < 0) {
			k = n + k;
		}
		if(k == 0)k = n;
	}
	else if (b > 0) {
		while (k > n) {
			k = k-n;
		}

	}

		if(k == 0)k=1;

	cout << k;
	return 0;
}