#include <iostream>
using namespace std;
int n;

int sum(void);

int main(void) {
	cout << "���� " << n << "���� ���� " << sum() << "�Դϴ�." << endl;

	return 0;
}

int sum(void) {
	int a[4] = { 0 };
	int sum=0;

	cout << "���� ������ ������ �Է��Ͻÿ�:";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "������ �Է��Ͻÿ�:";
		cin >> a[i];
		sum += a[i];
	}
	
	return sum;
}