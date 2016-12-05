#include <iostream>
using namespace std;

int main ()
{
	int a, b,t;
	cin >> a;
	cin >> b;

	if(a == 0 || b == 0) {
		cout << "Sao Multiplos" << endl;
	}
	else{
		if(b > a){
			t =a;
			a = b;
			b = t;
		}
		if(a%b == 0)
			cout << "Sao Multiplos" << endl;
		else
			cout << "Nao sao Multiplos" << endl;
	}
	return 0;
}