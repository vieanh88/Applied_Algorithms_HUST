#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
using namespace std;

// B�i to�n: Tim uoc chung lon nhat
int GCD (int a, int b) {
	//TH co so
	if (b==0) {
		return a;
	}
	return GCD(b, a%b);
}

int main() {
	
	//toi uu nhap xuat
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	//nhan gia tri
	int a, b;
	cin >> a >> b;
	
	//tinh GCD v� in ra kqua
	cout << GCD(a,b) << endl;
	
	return 0;
}