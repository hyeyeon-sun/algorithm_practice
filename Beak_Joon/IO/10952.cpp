#include <iostream>
using namespace std;

int main() {

	int a, b;
	cin >> a >> b;
	int nums[100];
	int length = 0;

	while (a != 0 || b != 0) {
		nums[length] = a + b;

		cin >> a >> b;		
		length++;
	}
	for (int i = 0; i < length; i++)
		cout << nums[i]<<endl;
	

	return 0;
}