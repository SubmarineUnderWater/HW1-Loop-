#include <iostream>
using namespace std;

int sum(int a, int b);

int main(void) {
	int x, y;
	cout << "ù ��° ���� �Է��Ͻÿ�:";
	cin >> x;

	cout << "�� ��° ���� �Է��Ͻÿ�:";
	cin >> y;

	cout << "�� ���� ���� " << sum(x, y) << "�Դϴ�." << endl;
	
	return 0;
}

int sum(int a, int b) {
	return a + b;
}