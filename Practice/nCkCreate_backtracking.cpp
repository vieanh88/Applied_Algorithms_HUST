/* THUAT TOAN QUAY LUI - BACKTRACKING
Mô hình: 
Try (int i) {
	for ( j = <Kha nang 1>; j <= <Kha nang N>; j++ ) {
		if ( <Chap nhan kha nang j> ) {
			x[i] = <Kha nang j>;
			
			// Ðây là dk de kiem tra khi da chay het
			if ( i==n ) {
				<Thong bao/In ra cau hinh tim duoc>
			}
			else {
				try ( i+1 );
			}
		}
	}
} */

/* BÀI TOÁN: SINH TO HOP CHAP K CUA N
Input: N=4, K=2 
Output: 12 13 14 23 24 34 */

#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
using namespace std;

// Khai báo bien toan cuc
int n, k, x[100];

// Ham in ket qua
void print_Result() {
	for (int i=1; i<=k; i++) {
		cout << x[i];
	}
	cout << endl;
}

// Thuat toan Backtracking
void nCk_Create (int i) {
	// Gia tri j min: x[i-1] + 1
	// Gia tri j max: n - k + i
	for (int j=x[i-1]+1; j<=n-k+i; j++) {
		x[i] = j;
		
		// ÐK: i tang dan den i=k thi dung
		if (i==k) {
			//In ket qua
			print_Result();
		}
		else {
			nCk_Create (i+1);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	//x[0] = 0;
	
	cin >> n >> k;
	nCk_Create(1);
	
	return 0;
}
