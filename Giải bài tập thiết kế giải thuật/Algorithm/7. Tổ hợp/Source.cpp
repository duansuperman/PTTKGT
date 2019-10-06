#include<iostream>
#include<vector>
using namespace std;
int n,m;
vector<int> a;
vector<int> b;
void Nhap(){
	cin >> n>>m;
	for (int i = 0; i <= n; i++){
		a.push_back(0);
	}
	b.resize(n+1);
}
void Phantu(int k){
	for (int i = a[k - 1] + 1; i <= n - m + k; i++){
		a[k] = i;
		if (k == m){
			for (int j = 1; j <= m; j++){
				cout << a[j] << " ";
			}
			cout << endl;
		}
		else{
			Phantu(k + 1);
		}
	}
}
int main(){
	Nhap();
	Phantu(1);
	system("pause");
	return 0;
}