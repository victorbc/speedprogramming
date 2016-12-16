#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
	int n, l;
	long long int d1,d2;
	string  s1, s2;
	long long int mdc(long long int a, long long int b);

	cin >> n;

for (int i = 0; i < n; ++i)
{
	cin >> s1 >> s2;
	d1 = stoull(s1, 0, 2);
	d2 = stoull(s2, 0, 2);

	l = mdc(d1,d2);

	if(l == 1){
		printf("Pair #%d: Love is not all you need!\n",i+1);
	}else{
		printf("Pair #%d: All you need is love!\n",i+1);
	}

}

	return 0;
}

long long int mdc(long long int a, long long int b){
	if(a%b == 0) return b;
	else{
		return mdc(b,a%b);
	}

}

