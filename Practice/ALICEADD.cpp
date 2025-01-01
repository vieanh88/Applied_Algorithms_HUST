/* BÀI TOÁN ALICEADD
Mo ta bai toan: Alice co a cai keo, Bob cho A them b cai keo.
Hoi Alice co bnh cai keo?
Mo ta du lieu vao:
Dong dau chua so nguyen khong am T, la so bo du lieu (T<=10)
Moi dong trong so T dong tiep theo chua 2 so nguyen khong am a va b
cach nhau boi dau cach (a,b <= 1e18).
Mo ta ket qua ra:
Gom T dong la ket qua cho T bo du lieu theo thu tu vao
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main () {
	int T;
	cin >> T;
	
	for (int i=0; i<T; i++) {
		long long a, b; //neu a, b lon hon 1e18
		cin >> a >> b;
		cout << a+b << endl;
	}
	
	return 0;
}
