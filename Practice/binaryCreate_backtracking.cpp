/* THUAT TOAN QUAY LUI - BACKTRACKING
M� h�nh: 
Try (int i) {
	for ( j = <Kha nang 1>; j <= <Kha nang N>; j++ ) {
		if ( <Chap nhan kha nang j> ) {
			x[i] = <Kha nang j>;
			
			// ��y l� dk de kiem tra khi da chay het
			if ( i==n ) {
				<Thong bao/In ra cau hinh tim duoc>
			}
			else {
				try ( i+1 );
			}
		}
	}
} */

// B�I TO�N: SINH X�U NHI PH�N �� D�I N
#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
using namespace std;

// Khai b�o bien toan cuc
int n, x[100];

// Ham in ket qua
void print_Result() {
	// In n ket qua tu 1 den n
	for (int i=1; i<=n; i++) {
		cout << x[i];
	}
	cout << endl;
}

// Thuat toan Backtracking
void binary_Create (int i) {
	// Moi cs co the nhan 0 hoac 1
	for (int j=0; j<=1; j++) {
		x[i] = j;
		
		// �K: i tang dan den i=n thi dung
		if (i==n) {
			//In ket qua
			print_Result();
		}
		else {
			binary_Create (i+1);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	binary_Create(1);
	
	return 0;
}
