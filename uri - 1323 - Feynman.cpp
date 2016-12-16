#include <iostream>
using namespace std;

int main() {
int n,result;
float temp;

cin >> n;

while(n != 0){

	result = (n+1)*(2*n+1)*n/6;
	cout << result << endl;
	cin >> n;

}


return 0;
}

