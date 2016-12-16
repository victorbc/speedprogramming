#include <iostream>
using namespace std;

int main() {
	long long int money, plastic,glass,refund, qt1 = 0,qt2 = 0;

	cin >> money >> plastic >> glass >> refund;


	qt1 = money/plastic;


	if(money >= glass){
		qt2 = (money-refund)/(glass-refund);
		money -= qt2*(glass-refund);

		if(money >= plastic){
			qt2 += money/plastic;
		}
	}
	

	cout << max(qt1,qt2) << endl;


	return 0;
}
