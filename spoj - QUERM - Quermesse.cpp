#include <iostream>
using namespace std;

int main() {
	int n,t,c = 1;

string clear;
	cin >> n;

	while(n != 0){
		for(int i =0; i < n ; i++){
			cin >> t;
			if(t == i+1){

				cout << "Teste " << c << endl;
				cout << t << endl << endl;


				break;
			}
		}
		c++;
		getline(cin, clear);
		cin >> n;

	}

	return 0;
}