#include <iostream>
#include <string>
using namespace std;

int main() {
	int format;
	string hour;

	cin >> format >> hour;

	if(format == 12){
		if(hour[0] == '1' && hour[1]-'0' > 2){
			hour[0] = '0';
		}
		else if (hour[0] - '0' > 1){
			if(hour[1]-'0' > 2)
				hour[0] = '0';
			else
				hour[0] = '1';

		}
		else if (hour[0] == '0' && hour[1] == '0') hour[1] = '1';

	}
	else if(format == 24){
		if(hour[0] == '2' && hour[1] -'0' > 3) hour[0] = '0';
		else if (hour[0] - '0' > 2) hour[0] = '0';
	}


	if(hour[3] - '0' > 5) hour[3] = '0';

	cout << hour << endl;

	return 0;
}