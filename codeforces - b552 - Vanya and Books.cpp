#include <iostream>
using namespace std;


int main(){
	long long int n, out , nine = 8100000000;
	cin >> n;

if(n > 999999999)
	out = 9+2*(90)+3*(900)+4*(9000)+5*(90000)+6*(900000)+7*(9000000)+8*(90000000)+nine+10*(n-999999999);
else if(n > 99999999)
	out = 9+2*(90)+3*(900)+4*(9000)+5*(90000)+6*(900000)+7*(9000000)+8*(90000000)+9*(n-99999999);
else if(n > 9999999)
	out = 9+2*(90)+3*(900)+4*(9000)+5*(90000)+6*(900000)+7*(9000000)+8*(n-9999999);
else if(n > 999999)
	out = 9+2*(90)+3*(900)+4*(9000)+5*(90000)+6*(900000)+7*(n-999999);
else if(n > 99999)
	out = 9+2*(90)+3*(900)+4*(9000)+5*(90000)+6*(n-99999);
else if(n > 9999)
	out = 9+2*(90)+3*(900)+4*(9000)+5*(n-9999);
else if(n > 999)
	out = 9+2*(90)+3*(900)+4*(n-999);
else if(n > 99)
	out = 9+2*(90)+3*(n-99);
else if(n > 9)
	out = 9+2*(n-9);
else if(n > 0)
	out = n;


cout << out << endl;

return 0;	
}