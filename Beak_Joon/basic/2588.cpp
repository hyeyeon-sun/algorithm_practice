#include <iostream>
using namespace std;

int main() {
	int a = 0;
	int b = 0;
	int ab_one = 0;
	int ab_ten = 0;
	int ab_hun = 0;
	int total = 0;

	cout << "������ ������ ������ ���� ������ڽ��ϴ�. \n���ϰ��� �ϴ� �� ���� �Է��ϼ��� : " << endl;
	cin >> a >> b;
	cout<<"   "<< a <<endl;
	cout << " X " << b << endl ;

	ab_one = a * (b % 10);
	ab_ten = (a * (b % 100 - b % 10)) / 10;
	ab_hun = (a * (b % 1000 - b % 100 - b % 10)) / 100;

	cout << ab_one << endl;
	cout << ab_ten << endl;
	cout << ab_hun << endl;

}