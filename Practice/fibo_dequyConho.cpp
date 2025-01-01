// Bai toan fibonaci su dung De quy CO NHO

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int f[100];

int fibo(int n) {
	if (n<=1) {
		return 1;
	}
	
	if (f[n] != -1) { //kiem tra neu fibo da tinh thi tra ve f[n]
		return f[n];
	}
	f[n] = fibo(n-1) + fibo(n-2); //luu lai gia tri fibo da tinh
	return f[n];
}

int main () {
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	f[0] = f[1] = 1;
	
	//gán phan tu mang f bang -1
	for (int i=0; i<= 92; i++) {
		f[i] = -1;
	}
	
	int n;
	cin >> n;
	
	cout << fibo(n);
	
	return 0;
}
