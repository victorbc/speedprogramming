#include <iostream>
using namespace std;


int main(){

	long long int temp1,temp2,temp3,temp4;

	pair <long long int,long long int> p1;
	pair <long long int,long long int> p2;

	pair <long long int,long long int> p3;
	pair <long long int,long long int> p4;

	cin >> temp1 >> temp2 >> temp3 >> temp4;

	p1 = make_pair(temp1,temp2);
	p2 = make_pair(temp3,temp4);

	cin >> temp1 >> temp2 >> temp3 >> temp4;

	p3 = make_pair(temp1,temp2);
	p4 = make_pair(temp3,temp4);


	if (p1.first <= p4.first && p2.first >= p3.first &&
		p1.second <= p4.second && p2.second >= p3.second)
		cout << 1 << endl;
	else cout << 0 << endl;


	return 0;	
}