#include<stdlib.h>
#include <iostream>
#define rate 0.0168
using namespace std;     //���J���Y��

int main()     //main�禡
{//�{���϶��}�l
	int myAccount;
	cout << "�п�J�s�ڪ��B:";
	cin >> myAccount;
	cout << "���Y�@�Q��:" << myAccount*rate << endl;
	system("pause");

	return 0;
}//�{���϶�����