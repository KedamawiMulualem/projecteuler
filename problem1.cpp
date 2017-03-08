#include<string>
#include <vector>
#include<iostream>
#include<cmath>
using namespace std;
void main() {
	int max=1000;
	int sum=0;
	for (int num = 0; num < max; num++)
	{
		if (num % 3 == 0 || num % 5 == 0) { sum += num; }
	}
	cout << sum << endl;


	system("pause");
}