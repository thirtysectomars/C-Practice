#include<stdlib.h>
#include <iostream>
#define rate 0.0168
using namespace std;     //插入標頭檔

int main()     //main函式
{//程式區塊開始
	int myAccount;
	cout << "請輸入存款金額:";
	cin >> myAccount;
	cout << "戶頭一利息:" << myAccount*rate << endl;
	system("pause");

	return 0;
}//程式區塊結束