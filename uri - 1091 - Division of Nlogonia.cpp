#include <iostream>
using namespace std;

int main() {
	int n;
	int p [2] = {0,0};
	int c [2] = {0,0};

	cin >> n;

	while(n != 0){

		cin >> p[0] >> p[1];

		for(int i =0; i < n ; i++){
			
			cin >> c[0] >> c[1];

			if(c[0] == p[0] || c[1] == p[1]){

				cout << "divisa" << endl;
			}
			else if(c[0] > p[0]){
				if( c[1] > p[1]){
					cout << "NE" << endl;
				} else 	if( c[1] < p[1]){
					cout << "SE" << endl;
				}
			}
			else if(c[0] < p[0]){
				if( c[1] > p[1]){
					cout << "NO" << endl;
				} else 	if( c[1] < p[1]){
					cout << "SO" << endl;
				}
			}


		}

		cin >> n;
	}
	return 0;
}