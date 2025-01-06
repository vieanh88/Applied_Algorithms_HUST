/* BÀI TOÁN: DÃY CON DÀI NHÂT
Cho mang a gom n phan tu, tim day con tang dai nhat cua day a
Input:
Dong dau la so nguyen n (n<=5000)
Dong tiep theo la n so nguyen ai
Output:
In ra do dai dãy con tang dai nhat
*/

#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int f[100];

int main () {
	
	//toi uu chuong trinh nhap xuat
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;
	
	int a[100];
	for (int i=1; i<=n; i++) {
		cin >> a[i];
	}
	
	int ans = 0;
	
	for (int i=1; i<=n; i++) {
		
		f[i] = 1; // TH co so
		
		for (int j=1; j<i; j++) {
			
			if (a[j] < a[i]) {
				
				// So sanh de chon ghep voi day con phia trc dai hon
				// f[i] = max(f[i], f[j] + 1)
				
				if (f[j] + 1 > f[i]) {
					f[i] = f[j] + 1;
				}
			}
		}
		ans = max(ans, f[i]);
	}
	
	cout << ans;
	
	return 0;
}
