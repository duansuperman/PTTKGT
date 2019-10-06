#include<iostream>
#include<string>
#include<vector>
using namespace std;
int check[100][100];
char t[100];
void Nhap(char a[][100],int &m,int &n){
	cin >> m >> n;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			char k;
			cin >> k;
			a[i][j] = k;
			check[i][j] = 1;
		}
	}
}
void TimDuong(int m,int n,int k){
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if (check[i][j]){
				if (abs(i - x) == 1 || abs(i - y) == 1){

				}
			}
		}
	}
}
int main(){
	string t = "abc";
	t[0] = 'c';
	cout << t << endl;
	system("pause");
	return 0;
}