#include <iostream>
#include <string>
using namespace std;

int main() {
	char alphabet [26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	
	int cright = 0, cleft = 0, j = 0 , lastright = 0, lastleft = 0 , result = 0;
	string word;

	cin >> word;


	for (int i = 0; i < word.length(); ++i)
	{
		while(j+1 != lastright){
			if(word[i] == alphabet[j]){
				lastright = j;
				break;
			}
			cright++;
			++j;
			if(j > 25) j = 0;
		}



		j = lastleft;
		while(j-1 != lastleft){
			if(word[i] == alphabet[j]){
				lastleft = j;
				break;
			}
			cleft++;
			--j;
			if(j < 0) j = 25;
		}


		//cout << endl << "cright" << cright << " cleft"  << cleft;

		if(cright < cleft){



			result += cright;
			lastleft = lastright;
			//cout << endl << result;
		}else{
			result += cleft;
			lastright = lastleft;

			//cout << endl << result << "  " << j;
		}

		cright = 0;
		cleft = 0;
	}

	cout << result << endl;


	return 0;
}