/* Bài toan HIST
Yêu cau: Tim ra hcn chung mép voi cac hcn nho va co dien tich lon nhat
trong phien da da giac

Input: Chua 1 hoac nhieu test.
Moi test mo ta 1 da giac bat dau bang so nguyen n la so luong hcn
nho cau thanh da giac.
Tiep theo sau la n so nguyen lan luot tu trai sang phai bieu thi
chieu dai cua cac hcn.
Chieu rong bang nhau va bang 1.
File ket thuc voi dong ghi duy nhat 1 so 0.

Output: Voi moi test ghi trn 1 dong dien tich hcn lon nhat thoa man
*/

#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main () {
	
	//toi uu toc do
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	//khai bao bien
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	
	int ans = 0;
	
	//co che giong bai subseqmax
	for (int i=0; i<n; i++) {
		
		//tao 1 bien de luu chieu cao be nhat
		int min_heigh = a[i];
		for (int j=i; j<n; j++) {
			
			//neu hcn sau be hon thi cap nhat lai min_heigh
			if(a[j] < min_heigh) {
				min_heigh = a[j];
			}
			
			//tinh dien tich
			int area = min_heigh * (j-i+1);
			
			//cap nhat dien tich lon nhat
			if (area > ans) {
				ans = area;
			}
		}	
	}
	
	cout << ans << endl;
	
	return 0;
}
