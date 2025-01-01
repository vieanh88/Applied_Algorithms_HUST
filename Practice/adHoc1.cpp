/* Loai bai toan Ad Hoc
Bai toan: Cat giam cua hang

Cong ty XTEC cat giam he thong cua hang. Ho co 4 cua hang va quyet dinh
dong cua toi da 2 trong so do co loi nhuan am thap nhat nam 2019
Yêu cau: Cho trc loi nhuan nam 2019 cua 4 cua hang, hay dua ra tong
loi nhuan am cua nhung cua hang phai dong cua.

Du lieu vao:
Dong dau tien chua mot so nguyen T (T<20) la so truong hop test
Moi dong trong T dòng sau chua 4 so nguyen phan biet bieu dien loi nhuan
nam 2019 cua 4 cua hang. Tat ca cac so nguyen o day nam trong khoang [-10000, 10000]

Ket qua ra:
Moi test ghi tren mot dong so duy nhat, la tong loi nhuan am cua cac cua hang
phai cat bo
*/

#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	
	int profit[4];
	int T;
	cin >> T;
	
	for (int i=0; i<T; i++) {
		
		for (int k=0; k<4; k++) {
			cin >> profit[k];
		}
		//ham sap xep trong thu vien algorithm
		sort (profit, profit+4);
				
		int sum=0;
		
		if (profit[0] <0) {
			sum += profit[0];
		}
		if (profit[1] <0) {
			sum += profit[1];
		}
		
		cout << sum << endl;	
	}
	
	return 0;
}
