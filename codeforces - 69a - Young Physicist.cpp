#include <iostream>
using namespace std;

int main ()
{
	int n, x,y,z;
	int result[] = {0,0,0};
	cin >> n;

	while(n >0){
		cin >> x >> y >> z;
		result[0]+=x;
		result[1]+=y;
		result[2]+=z;
		n--;
	}

	if(result[0] == 0 && result[1] == 0 && result[2] == 0 ) {
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}