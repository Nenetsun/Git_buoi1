#include <iostream>
using namespace std;
int tong(int a, int b) {
	return (a + b);
}
int hieu(int a, int b){
	return (a - b);
}
bool kiemTraChan(int a){
	if (a % 2 == 0)
	  return true;
	else
	  return false;
}
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-,*,/) ";
	cin >> phepToan;
	if (phepToan == "+")
	  cout << "\na + b = " << tong(a, b)<<"\n";
	if (phepToan == "-")
	  cout << "\na - b = " << hieu(a, b)<<"\n";
	system("pause");
	return 0;
}
//Cau 19