#include <iostream>
using namespace std;

int main(void) {
	int n;
	int i = 0;

	cout << "몇 번 출력하시겠습니까?";
	cin >> n;

	while (i < n) {
		cout << "Hello World" << endl;
		i++;
	}

	return 0;
}