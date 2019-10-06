#include<iostream>
#include<vector>
using namespace std;
vector<int> a;
vector<int> b;

int n;
void Nhap(){
	cin >> n;
	
	b.resize(n);
	
}
void Duyet(int k){
	for (int i = 0; i <= 1; i++){
		b[k] = i;
		if (k == n-1){
			for (int j = 0; j < n; j++){
				cout << b[j] << " ";
			}
			cout << endl;
		}
		else{
			Duyet(k + 1);
		}
	}
}
int main(){
	Nhap();
	Duyet(0);
	system("pause");
	return 0;
}