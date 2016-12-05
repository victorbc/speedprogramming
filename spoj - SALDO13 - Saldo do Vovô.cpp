#include <iostream>
using namespace std;

int main ()
{
	int n, s, m ,t;
	cin >> n;
	cin >> s;

m = s;
while(n> 0){
cin >> t;
s = s+t;
if(s < m){m = s;}
n--;
}
			cout << m;
	
	return 0;
}