#include<iostream>
#include<vector>
using namespace std;
int dem = 0;
int p[100];
int sl;
void Nhap(vector<int>&a, vector<int>&b, int &n){
	cin >> n;
	cin >> sl;
	for (int i = 0; i <= n; i++){
		b.push_back(1);
	}
}

void Xuly(int n){
	
	for (int i = 1; i <= sl; i++){
		cout << p[i] << " ";
	}
	cout << endl;
}
void Hoanvi(vector<int>&b, int n, int k){
	for (int i = 1; i <= n; i++){
		if (b[i]){
			p[k] = i;
			b[i] = 0;
			if (k == sl){
				Xuly(n);
				
			}
			else{
				b[i] = 1;
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
	cout << pow(n, sl) << endl;
	Hoanvi(b, n, 1);
	system("pause");
	return 0;
}