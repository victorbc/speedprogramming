#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> banknotes;
	int n,temp;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		banknotes.push_back(temp);
	}

	sort(banknotes.begin(),banknotes.end());

	if(banknotes[0] == 1)cout << "-1";
	else cout << "1";
	cout << endl;

	return 0;
}
