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

/* BÀI TOÁN: SINH HOAN VI CUA N PHAN TU
Input: N=3 
Output: 123 132 213 231 312 321 */

#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
using namespace std;

// Khai báo bien toan cuc
int n, x[100], used[100];

// Ham in ket qua
void print_Result() {
	for (int i=1; i<=n; i++) {
		cout << x[i];
	}
	cout << endl;
}

// Thuat toan backtracking sinh hoan vi
void permutation_Create (int i) {
	// Max: n
	// Min: 1
	for (int j=1; j<=n; j++) {
		
		// ÐK: Xem co the gan x[i] = j khong
		if (used[j] == 0) {
			x[i] = j;
			used[j] = 1; // Danh dau j da su dung
			
			// ÐK dung:
			if (i == n) {
				print_Result();
			}
			else {
				permutation_Create(i+1);
			}
			
			// Backtrack
			used[j] = 0;
		}
	}
}

int main() {
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	permutation_Create(1);
	
	return 0;
}
