#include <iostream>
#include <string>
using namespace std;

int main() {
	string w,s;
	int n = 0;

	cin >> w >> s;

	size_t nPos = w.find(s,0);
	while(nPos != string::npos)
	{
		n++;
		nPos = w.find(s, nPos+s.size());
	}


	cout << n << endl;

	return 0;
}