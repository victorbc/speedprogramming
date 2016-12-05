#include <iostream>
#include <vector>
#include <string>
#include <ctype.h>
using namespace std;

int main() {
	string l1,l2,cpf = "",num1 = "",num2 = "";
	int p1 = -1,p2 = -1;
	double n1,n2;


	getline(cin,l1);
	getline(cin,l2);

	for (int i = 0; i < l1.size(); ++i)
	{

		if(cpf.size() < 11){ 
			if(isdigit(l1[i])){
				cpf += l1[i];
			}
		}
		else{
			if(isdigit(l1[i])){
				if(p1 >= 0)p1++;
				num1 += l1[i];
				if(p1 >= 2) break;
			}else if(l1[i] == '.' && p1 == -1){
				p1 = 0;
				num1 += l1[i];
			}
		}

	}

	for (int i = 0; i < l2.size(); ++i)
	{
		if(isdigit(l2[i])){
			if(p2 >= 0)p2++;
			num2 += l2[i];
			if(p2 >= 2) break;
		}else if(l2[i] == '.' && p2 == -1){
			p2 = 0;
			num2 += l2[i];
		}
	}

	cout << "cpf " << cpf << endl;

	n1 = std::stod(num1);
	n2 = std::stod(num2);

	n1+= n2;

	cout.precision(2);
	cout << fixed << n1 << endl;




}