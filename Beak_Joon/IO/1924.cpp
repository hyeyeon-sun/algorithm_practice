#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int monthcount(int month) {
	int count = 0;

	for (int i = 1; i < month; i++) {
		if (i > 12) {
			return -1000;
		}
		else if (i == 4 || i == 6 || i == 9 || i == 11) {
			count += 30;
		}
		else if (i == 2) {
			count += 28;
		}
		else {
			count += 31;
		}
	}
	return count;
}


int main() {
	int month, day;

	scanf_s("%d %d", &month, &day);

	// �ް� ��¥�� �־����� ������ ����ϴ� ��
	// 4,6,9�϶��� 30, 2�� 28
	// 1�Ϸκ��� ���� ���������� �˰�
	// -> ������ ��� month-1 �� �ش��ϴ� �� + ��¥
	// 
	// �װ� 7�� ������ �������� ���ϸ� �ȴ�.

	string days[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };

	cout << days[(monthcount(month) + day-1) % 7];

}