#include <iostream>
using namespace std;
void main()
{
	{
		int n;
		cout << "Nhap so nguyen n = "; cin >> n;
		if (n > 5) cout << "Thoa Man Dieu Kien Gia Tri Cua n La: n=" << n + 2;
		else cout << "Khong Thoa Man Dieu Kien! Ket Thuc Chuong Trinh! "; 
		cin.ignore();
		cin.get();
	}
}