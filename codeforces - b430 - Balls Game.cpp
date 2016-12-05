#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, colors, ownColor, temp, trackColor, maxLp = 0, maxRp = 0, li = 0, ri, result = 0, lp = 0, rp = 0;
	vector <int> row;
	vector <int*> options;
	int burn(vector<int> row);


	cin >> n >> colors >> ownColor;


	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		row.push_back(temp);
	}


for (int i = 0; i < n; ++i)
{
			if(row[i] == ownColor)lp++;
			else{
				if (lp >=2) options.push_back(new int [2]{i,lp});
			}
}

/*	for (int i = 0; i < n; ++i)
	{
		if(row[i] == ownColor)lp++;
		else {
			if(lp > maxLp){maxLp = lp; li = i;}
			lp = 0;
		}; 

	}*/

		for (int i = 0; i < options.size(); ++i)
		{
			vector <int> rowTest (row);
			rowTest.erase(rowTest.begin()+options[i][0]-options[i][1],rowTest.begin()+options[i][0]);
			temp = burn (rowTest);
			if(temp > result ) result = temp;
		}


	/*if(maxLp > 0){
		row.erase(row.begin()+li-maxLp,row.begin()+li);
		result =  maxLp;
		n -= maxLp;
		maxLp = 0;		*/




		cout << result << endl;
/*	}else{
		cout << "0" << endl;
	}*/

	return 0;
}


int burn(vector<int> row)  {

int n = row.size();
int trackColor, lp = 0 , li = 0, result = 0;

		while(n > 0){
			for (int i = 0; i < n; ++i)
			{
				if(i == 0 ){
					trackColor = row[i]; 
					lp = 1;
					li = 0;
				}
				else{
					if(row[i] == trackColor) lp++;
					else{
						if(lp >= 3){
							break;
						}else{
							trackColor = row[i];
							lp = 1;
							li = i;
						}
					}
				}
			}

			if(lp < 3) break;
			else{

				row.erase(row.begin()+li,row.begin()+li+lp);
				result+= lp;
				n -= lp;
				li = 0;
				lp = 0;
			}

		}

		return row.size();
	}