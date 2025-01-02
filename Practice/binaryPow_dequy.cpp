#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
using namespace std;

// Bài toán: Tim luy thua
int binaryPow (int a, int b) {
	//TH co so
	if (b==0) {
		return 1;
	}
	
	int x = binaryPow(a, b/2);
	
	if (b%2 == 0) {
		return x * x;
	}
	if (b%2 != 0) {
		return a * x * x;
	}
}

int main() {
	
	//toi uu nhap xuat
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	//nhan gia tri
	int a, b;
	cin >> a >> b;
	
	//tinh GCD và in ra kqua
	cout << binaryPow(a,b) << endl;
	
	return 0;
}
