#include <iostream>
#include <algorithm>    
#include <vector> 
using namespace std;

int main() {
	vector <int> f;
	int temp, espaco = 0;

	cin >> temp;
	f.push_back(temp);
	cin >> temp;
	f.push_back(temp);
	cin >> temp;
	f.push_back(temp);

	sort(f.begin(),f.end());


	if(f[0] > 0 ){
		espaco += f[0];
	}

	if (f[0]+200 < f[1]){
		espaco += f[1] - (f[0]+200);
	}

	if (f[1]+200 < f[2]){
		espaco += f[2] - (f[1]+200);	
	}

	if (f[2]+200 < 600){
		espaco += 600 - (f[2]+200);
	}

	cout << espaco*100 << endl;


	return 0;
}