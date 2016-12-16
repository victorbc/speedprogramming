#include <iostream>
#include <string> 
using namespace std;

int main() {
	long long int a,b,n;
	bool ok = false;
	string s = "";

	cin >> a >> b >> n;

	a *= 10;
	for (int i = 0; i <= 9; ++i)
	{
		if(a % b == 0){
			ok = true; 
			break;
		}
		a ++;
	}
	if(ok){
		s = to_string(a);
		for (int i = 0; i < n-1; ++i)
		{
			s += '0';
		}
		cout << s << endl;
	}else{
		cout << -1 << endl;	
	}



	return 0;
}

