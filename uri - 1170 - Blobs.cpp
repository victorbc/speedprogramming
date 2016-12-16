#include <iostream>
using namespace std;

int main() {
int n,count = 0;
float temp;

cin >> n;

for (int i = 0; i < n; ++i)
{
	cin >> temp;
	while(temp > 1){
		temp = temp/2;
		count++;
	}
	cout << count << " dias" << endl;
	count = 0;
}

return 0;
}

