#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m, temp, l1, l2, l3, sum = 0;
	

	cin >> n >> m;

	int numbers[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		numbers[i] = temp;
	}

	for (int i = 0; i < m; ++i)
	{
		cin >> l1 >> l2;
		if(l1 == 1){ 
			cin >> l3;
			numbers[l2-1] = -1*(sum-l3);
		}else if (l1 == 2){
			sum += l2;
		}else if (l1 == 3){
			cout << numbers[l2-1]+sum << endl;
		}

	}


	return 0;
}



