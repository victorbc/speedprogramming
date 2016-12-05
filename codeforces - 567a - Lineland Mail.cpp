	#include <iostream>
	#include <cmath>
	#include <vector>
	#include <climits>
	#include <algorithm>
	using namespace std;

	int main() {
		int n,temp,min,max;
		vector <int> cities;
		cin >> n;



		for (int i = 0; i < n; ++i)
		{

			cin >> temp;
			cities.push_back(temp);
		}


		for (int i = 0; i < n; ++i)
		{
			max = std::max(abs(cities[i] - cities[(i == n-1 ? n-2 : n-1)]),abs(cities[i] - cities[(i == 0 ? 1 : 0)]));

			if(i == 0) min = abs(cities[i] - cities[i+1]);
			else if (i == n-1) min = abs(cities[i] - cities[i-1]);
			else min = std::min(abs(cities[i] - cities[i-1]),abs(cities[i] - cities[i+1]));

			cout << min << " " << max << endl;
		

		}

		return 0;
	}