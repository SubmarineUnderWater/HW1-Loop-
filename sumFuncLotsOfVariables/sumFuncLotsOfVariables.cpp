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
	int sum = 0;

	for (int j = 0; j < n; j++) {
		sum += b[j];
	}

	return sum;
}