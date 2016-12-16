#include <iostream>
#include <vector>
using namespace std;

int main() {
long long int m,n,result;
vector <long long int> factor;
void fillFactor(vector <long long int>& vector);

fillFactor(factor);

while(cin >> m >> n){
	result = factor[m]+factor[n];
	cout << result << endl;

}


return 0;
}


void fillFactor(vector <long long int>& vector){
for (int i = 0; i <= 20; ++i)
{
	if(i == 0) vector.push_back(1);
	else if(i == 1) vector.push_back(1);
	else{
		vector.push_back(i*vector[i-1]);
	}
}

}


