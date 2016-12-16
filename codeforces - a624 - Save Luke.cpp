#include <iostream>
using namespace std;

int main() {
	double d,l,v1,v2;
	double t;

	cin >> d >> l >> v1 >> v2;

	l-=d;
	if(l < 0 )l =0;

	t = l/(v1+v2);

	cout.precision(16);
	cout << fixed << t << endl;



	return 0;
}


