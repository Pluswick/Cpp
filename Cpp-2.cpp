#include<iostream>

using namespace std;

int main(void) {
	int a = 77;
	char b = a;

	cout << b << endl;
	// ASCII �ڵ�� ��� ��.
	b = 'a';
	//b = "a";�� �Ұ��� null ����('\0')�� ���ڿ��� ���� �����ؾ� �ϱ� ����.

	cout << b << endl;

	char c[4] = { 'a', 'b', 'c', 'd' };

	for (int i = 0; i < 4; i++) {
		cout << c[i] << endl;
	}
	
	bool t = 1;
	bool f = 0;
	bool w = 10;

	cout << w << endl; 
	//bool �ڷ����� 0�� ������ ��� ���ڸ� 1�� ������.

	return 0;
}