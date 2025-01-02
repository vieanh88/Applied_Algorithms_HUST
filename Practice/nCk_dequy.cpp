#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int nCk(int n, int k) {
	if (k==0 || n==k) {
		return 1;
	}
	return nCk(n-1, k) + nCk(n-1, k-1);
}

int main() {
	
	//toi uu nhap xuat
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	//nhan gia tri
	int n, k;
	cin >> n >> k;
	
	//tinh nCk và in ra kqua
	cout << nCk(n,k) << endl;
	
	return 0;
}
