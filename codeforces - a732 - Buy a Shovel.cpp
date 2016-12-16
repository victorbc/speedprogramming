#include <iostream>
#include <climits>
using namespace std;

int main() {
	int k, r;

	cin >> k >> r;

	for (int i = 1; i < INT_MAX; ++i)
	{
		if((k*i-r)%10 == 0 || (k*i)%10 == 0){
			cout << i << endl;
			break;
		}
	}
	





	return 0;
}


