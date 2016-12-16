#include <iostream>
using namespace std;

int main() {
	int a,b,n;
	int mdc(int a, int b);

	cin >> n;

for (int i = 0; i < n; ++i)
{
	cin >> a >> b;
	cout << mdc(a,b) << endl;

}

	return 0;
}

int mdc(int a, int b){
	if(a%b == 0) return b;
	else{
		return mdc(b,a%b);
	}

}

