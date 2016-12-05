#include <iostream>
using namespace std;

int main ()
{
	int q,y,n,t;
	cin >> q;


	for(int i = 0; i< q; ++i){
	cin >> t;
	if(t == 0) y++;
	if(t == 1) n++;
	}

	if(y> n)
			cout << "Y";
		else
			cout << "N";

	return 0;
}