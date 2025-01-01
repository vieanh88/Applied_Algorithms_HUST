/* Loai bai toan Ad Hoc
Bai toan: Go SMS
Cho mot doan van ban, hay tinh so lan go phim de hien thi duoc doan van ban.
Bai toan gia thiet rang cac ban phim duoc sap xep nhu dien thoai bam thong thuong
 *      abc      def
 ghi    jkl      mno
 pqrs   tuv      wxyz
 	    <SP>

Du lieu vao:
Dong dau tien la mot so nguyen T la so luong TH test
T dong tiep theo moi dong chi chua cac khoang trong va cac ky tu in thuong
Moi dong chua it nhat 1 - 100 ky tu

Du lieu ra:
Moi TH test ung voi 1 dong o ketqua ra
Moi dong bat dau boi thu tu TH test va 1 so bieu thi so lan can bam phim
de cho ra van ban tuong ung
*/

#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main () {
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	string chuoikt;
	int T;
	cin >> T;
	cin.ignore(); //bo qua ky tu xuong dong vi dung getline()
	
	for (int i=0; i<T; i++) {
		
		getline (cin, chuoikt);
		int click1 = 0;
		char c1[] = {'*', 'a', 'd', 'e', 'g', 'j', 'm', 'p', 't', 'w', ' '};
		int click2 = 0;
		char c2[] = {'b', 'e', 'h', 'k', 'n', 'q', 'u', 'x'};
		int click3 = 0;
		char c3[] = {'c', 'f', 'i', 'l', 'o', 'r', 'v', 'y'};
		int click4 = 0;
		char c4[] = {'s', 'z'};
		for (int k=0; k<chuoikt.size(); k++) {
			
			for (int j=0; j<sizeof(c1) / sizeof(char); j++) {
				if (c1[j] == chuoikt[k]) {
					click1 ++;
					break; //neu ktra dc ky tu o c1 thi ko can ktra nua
				}
			}
			
			for (int j=0; j<sizeof(c2) / sizeof(char); j++) {
				if (c2[j] == chuoikt[k]) {
					click2 ++;
					break; //neu ktra dc ky tu o c2 thi ko can ktra nua
				}
			}
				
			for (int j=0; j<sizeof(c3) / sizeof(char); j++) {
				if (c3[j] == chuoikt[k]) {
					click3 ++;
					break; //neu ktra dc ky tu o c3 thi ko can ktra nua
				}
			}
			
			for (int j=0; j<sizeof(c4) / sizeof(char); j++) {
				if (c4[j] == chuoikt[k]) {
					click4 ++;
					break; //neu ktra dc ky tu o c4 thi ko can ktra nua
				}
			}
		}
		
		int sum = click1 + click2*2 + click3*3 + click4*4;
		cout << "Case #" << i+1 << ": " << sum << endl;
	}
	
	return 0;
}
