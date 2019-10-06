#include<iostream>
#include<vector>
using namespace std;
int n, m;
vector<int> b;
vector<int> a;
void Nhap(){
	cin >> n>>m;
	for (int i = 0; i < n; i++){
		b.push_back(1);
	}
	a.resize(m);
}
void Chinhhop(int k){
	for (int i = 0; i < n; i++){
		if (b[i]){
			a[k] = i + 1;
			b[i] = 0;
			if (k == m - 1){
				for (int j = 0; j < m; j++){
					cout << a[j] << " ";
				}
				cout << endl;
			}
			else{
				Chinhhop(k + 1);
			}
			b[i] = 1;
		}
	}
}
int main(){
	Nhap();
	Chinhhop(0);
	system("pause");
	return 0;
}