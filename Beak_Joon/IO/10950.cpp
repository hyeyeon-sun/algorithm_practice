#include <iostream>
using namespace std;

int main() {

	int length = 0;
	cin >> length;
	int** number = new int* [length];

	int* adds = new int[length];
	for (int i = 0; i < length; i++)
	{
		number[i] = new int[2];
		cin >> number[i][0];
		cin >> number[i][1];
		adds[i] = number[i][0] + number[i][1];
	}

	for (int i = 0; i < length; i++)
		cout << adds[i]<<endl;

}