/* Bai toan Xuc Xac Quy hoach dong
Cho so nguyen n, dem so cach tao ra tong n bang cach tung xuc xac 6 mat
so cua moi lan tung se dc cong vao tong */

#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>

#define MOD 10000000 //de mod khi in kqua
#define maxn 1000000
using namespace std;

int f[maxn];

int main () {
	
	//toi uu chuong trinh nhap xuat
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;
	
	f[0] = 1; //TH tong bang 0 thi ko tung xuc xac (1 cach)
	
	/*idea: goi f[s] la so cach de tao ra tong s.
	vi du can tao s = 10
	f[10] = f[9] + f[8] + ... + f[4] (do xuc xac tu 1 -6)
	voi dieu kien i <= s (f[3] chi có the tao tu mat xx 3,2,1)
	*/
	
	for (int s=1; s<=n; s++) {
		for (int j=1; j<=6; j++){
			
			if (j <= s) {
				f[s] = (f[s] + f[s-j]) % MOD;
			}
 		}
	}
	
	cout << f[n];
}
