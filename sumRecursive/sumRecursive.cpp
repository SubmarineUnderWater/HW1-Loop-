#include <iostream>
using namespace std;

int sum(int n, int b[]);

int main(void) {
	int n;

	cout << "���� ������ ������ �Է��Ͻÿ�:";
	cin >> n;

	int* p = new int[n];

	for (int i = 0; i < n; i++) {
		cout << "������ �Է��Ͻÿ�:";
		cin >> p[i];
	}

	cout << "���� " << n << "���� ���� " << sum(n, p) << "�Դϴ�." << endl;

	delete[]p;

	return 0;
}

int sum(int n, int b[]) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return b[n-1];
	else
		return b[n-1] + sum(n - 1, b);
}