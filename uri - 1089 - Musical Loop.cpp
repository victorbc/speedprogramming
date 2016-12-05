#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
int n,lsize,temp, sum = 0;
bool up = false;


cin >> n;

while(n != 0){
	vector <int> mag;
for (int i = 0; i < n; ++i)
{
cin >> temp;
mag.push_back(temp);
}

mag.push_back(mag[0]);
for (int i = 0; i < mag.size(); ++i)
{
if(i == 0){
(mag[i] < mag[i+1] ? up = true : up = false);
}else{}
if(mag[i] < mag[i+1])
}
}

cin >> n;
}


cout << sum << endl;
return 0;
}

