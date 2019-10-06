#include<iostream>
#include<vector>
using namespace std;
vector<int> b;
vector<int> a;
int n;
int dem;
void Nhap(){
	cin >> n;
	for (int i = 0; i < n; i++){
		b.push_back(1);
	}
	a.resize(n);
}
void Phantu(int k){
	for (int i = 0; i < n; i++){
		if (b[i]){
			a[k] = i + 1;
			b[i] = 0;
			if (k == n - 1){
				cout << "Cach : "<<dem++ << endl;
				for (int j = 0; j < n; j++){
					cout << a[j] << " ";
				}
				cout << endl;
			}
			else{
				Phantu(k + 1);
			}
			b[i] = 1;
		}
	}
}
int main(){
	Nhap();
	Phantu(0);
	system("pause");
	return 0;
}