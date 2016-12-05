#include <iostream>
using namespace std;

int main ()
{
	int n,a = 0,b= 0, c= 0, d =0, e =0, f =0, g=0;
	cin >> n;

	while(n > 0){
		if(n >= 100){
			n -= 100;
			a++;
			continue;
		}
		if(n >= 50){
			n -= 50;
			b++;
			continue;
		}
		if(n >= 20){
			n -= 20;
			c++;
			continue;
		}
		if(n >= 10){
			n -= 10;
			d++;
			continue;
		}
		if(n >= 5){
			n -= 5;
			e++;
			continue;
		}
		if(n >= 2){
			n -= 2;
			f++;
			continue;
		}
		if(n >= 1){
			n -= 1;
			g++;
			continue;
		}
	}


	cout << a << " nota(s) de R$ 100,00" << endl;
	cout << b << " nota(s) de R$ 50,00" << endl;
	cout << c << " nota(s) de R$ 20,00" << endl;
	cout << d << " nota(s) de R$ 10,00" << endl;
	cout << e << " nota(s) de R$ 5,00" << endl;
	cout << f << " nota(s) de R$ 2,00" << endl;
	cout << g << " nota(s) de R$ 1,00";

	return 0;
}