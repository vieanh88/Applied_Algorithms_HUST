/* Bai toan SUBSEQMAX
Cho mang S = (a1, ... an). Mot doan S(i,j) = (ai, ... aj)
Trong so w(i,j) = ai + ... + aj
Yeu cau: Hay tim doan trong mang co trong so lon nhat
Input:
Dong thu nhat chua so nguyen n (do dai cua mang)
Dong thu hai chua n so nguyen
Output:
1 so nguyen duy nhat la trong so lon nhat tim duoc
*/

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main () {
	
	ios_base::sync_with_stdio(0); //tang toc
	cin.tie(0); //tang toc do nhap lieu
	cout.tie(0); //tang toc do xuat du lieu
	
	int n;
	cin >> n;
	
	int ar[n];
	for (int i=0; i<n; i++) {
		cin >> ar[i];
	}
	
	int w = 0;
	int wMax=0;
	
	for (int i=0; i<n; i++) { //vong lap bat dau tu so dau tien
		
		for (int j=i; j<n; j++) {
			w += ar[j];
			
			if (w > wMax) {
				wMax = w;
			}
		}
		w=0;
	}
	
	cout << wMax << endl;
	
	return 0;
	
}
