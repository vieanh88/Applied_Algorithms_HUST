#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
using namespace std;

// Bài toán: Kiem tra mang doi xung
int palindromArray (int a[], int l, int r) {
	// tra ve 1 khi da xet het mang
	if (l >= r) {
		return 1;
	}
	
	// tra ve 0 khi mang khong thoa man
	if (a[l] != a[r]) {
		return 0;
	}
	
	// de quy xet lan luot tung phan tu left, right
	return (a, l+1, r-1);
} 

int main() {
	
	// toi uu nhap xuat
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// nhan gia tri
	int n;
	cin >> n;
	
	int a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	
	if (palindromArray (a, 0, n-1)) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	
	return 0;
}
