#include <iostream>
using namespace std;

int main() {
	int length = 0;
	char number[4];
	int* nums = new int[length];
	cin >> length;

	for (int i = 0; i < length; i++) {
		cin >> number;
		nums[i] = int(number[0]) - 48 + int(number[2]) - 48;
	}

	for (int i = 0; i < length; i++) {
		cout << nums[i] << endl;
	}
}