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

/* BÀI TOÁN: N QUEEN
Sap xep n quan hau vao n hang tren ban co vua n*n khong có 2 quan hau nao an nhau
X = (X1, X2,...Xn) là nghiem cua bai toan,
Xi = j thi xep quan hau hang i cot j
=> quan ly hang i cot j, duong cheo xuoi: i-j+n, duong cheo nguoc: i+j-1
*/

#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
using namespace std;

// Khai báo bien toan cuc
int n, x[100], cot[100], dc1[100], dc2[100];
int cnt = 0;

// Ham in ket qua
void print_Result() {
	for (int i=1; i<=n; i++) {
		cout << "Con hau o hang thu " << i << " nam o cot " << x[i] << endl;
	}
	cout << endl;
}

// Thuat toan backtracking sap xep n quan hau
void nQueen_Create (int i) {
	
	// Duyet cac TH cua j co the xay ra
	for (int j=1; j<=n; j++) {
		// ÐK chap nhan j (cot, dc1, dc2 chua dc su dung)
		if (cot[j] == 0 && dc1[i-j+n] == 0 && dc2[i+j-1] == 0) {
			x[i] = j; // Dat quan hau
			// Danh dau cot, duong cheo da bi quan hau vua dat su dung
			cot[j] = dc1[i-j+n] = dc2[i+j-1] = 1;
			
			// ÐK ket thuc
			if (i == n) {
				cnt++;
				print_Result();
			}
			else {
				// Goi dequy
				nQueen_Create (i+1);
			}
			
			// Backtracking
			// Tra lai cot, dc1, dc2 chua dc su dung
			cot[j] = dc1[i-j+n] = dc2 [i+j-1] = 0;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	
	nQueen_Create(1);
	cout << "So luong nghiem: " << cnt << endl;
	
	return 0;
}
