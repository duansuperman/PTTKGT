#include<iostream>
#include<vector>
using namespace std;
int dem = 0;
int p[100];
void Nhap(vector<int>&a, vector<int>&b, int &n){
	cin >> n;
	for (int i = 0; i <= n; i++){
		b.push_back(1);
	}
}

void Xuly(int n){
	cout << "Cach : " << dem++ << endl;
	for (int i = 1; i <= n; i++){
		cout << p[i] << " ";
	}
	system("pause");
	cout << endl;
}
void Hoanvi(vector<int>&b,int n,int k){
	for (int i = 1; i <= n; i++){
		if (b[i]){
			p[k] = i;
			b[i] = 0;
			if (k == n){
				Xuly(n);
			}
			else{
				Hoanvi(b, n, k + 1);
			}
			b[i] = 1;
		}
	}
}
int main(){
	vector<int>a, b;
	int n;
	Nhap(a, b, n);
	Hoanvi(b,n,1);
	system("pause");
	return 0;
}