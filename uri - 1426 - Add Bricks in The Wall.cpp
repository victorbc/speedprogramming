#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,temp, m = 1;
	vector <int>  calcTemp;
	int bricks [9][9];
	vector <int> calc(int a,int d,int f);




	cin >> n;

	for (int k = 0; k < n; ++k)
	{

		m = 1;
		for (int i = 0; i < 5; ++i)
		{

			for (int j = 0; j < m ; ++j)
			{
				cin >> temp;
				bricks[i*2][j*2] = temp;
			}
			m++;

		}

		calcTemp = calc(bricks[0][0],bricks[2][0],bricks[2][2]);
		bricks[1][0] =  calcTemp[0];
		bricks[1][1] =  calcTemp[1];
		bricks[2][1] =  calcTemp[2];

//2
		calcTemp = calc(bricks[2][0],bricks[4][0],bricks[4][2]);
		bricks[3][0] =  calcTemp[0];
		bricks[3][1] =  calcTemp[1];
		bricks[4][1] =  calcTemp[2];

		calcTemp = calc(bricks[2][2],bricks[4][2],bricks[4][4]);
		bricks[3][2] =  calcTemp[0];
		bricks[3][3] =  calcTemp[1];
		bricks[4][3] =  calcTemp[2];

//3
		calcTemp = calc(bricks[4][0],bricks[6][0],bricks[6][2]);
		bricks[5][0] =  calcTemp[0];
		bricks[5][1] =  calcTemp[1];
		bricks[6][1] =  calcTemp[2];

		calcTemp = calc(bricks[4][2],bricks[6][2],bricks[6][4]);
		bricks[5][2] =  calcTemp[0];
		bricks[5][3] =  calcTemp[1];
		bricks[6][3] =  calcTemp[2];

		calcTemp = calc(bricks[4][4],bricks[6][4],bricks[6][6]);
		bricks[5][4] =  calcTemp[0];
		bricks[5][5] =  calcTemp[1];
		bricks[6][5] =  calcTemp[2];
//4

		calcTemp = calc(bricks[6][0],bricks[8][0],bricks[8][2]);
		bricks[7][0] =  calcTemp[0];
		bricks[7][1] =  calcTemp[1];
		bricks[8][1] =  calcTemp[2];

		calcTemp = calc(bricks[6][2],bricks[8][2],bricks[8][4]);
		bricks[7][2] =  calcTemp[0];
		bricks[7][3] =  calcTemp[1];
		bricks[8][3] =  calcTemp[2];

		calcTemp = calc(bricks[6][4],bricks[8][4],bricks[8][6]);
		bricks[7][4] =  calcTemp[0];
		bricks[7][5] =  calcTemp[1];
		bricks[8][5] =  calcTemp[2];

		calcTemp = calc(bricks[6][6],bricks[8][6],bricks[8][8]);
		bricks[7][6] =  calcTemp[0];
		bricks[7][7] =  calcTemp[1];
		bricks[8][7] =  calcTemp[2];



		m = 1;
		for (int i = 0; i < 9; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << bricks[i][j];
				if(j < m-1) cout << " ";
			}
			
			cout << endl;
			m++;
		}
	}
	return 0;
}


vector<int> calc(int a,int d,int f){
	vector<int> result;
	int b,c,e;
	e = (a - d - f)/2;
	b = e + d;
	c = e + f; 

	result.push_back(b);
	result.push_back(c);
	result.push_back(e);

	return result;


}