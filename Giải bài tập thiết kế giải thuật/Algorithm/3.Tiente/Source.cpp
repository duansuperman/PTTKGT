#include<iostream>
#include<vector>
#include<string>
using namespace std;
int t[100];
string result[100];
int dem = 0;
void Nhap(vector<int>&a,vector<int>&b, int &n){
	cin >> n;
	for (int i = 0; i < n; i++){
		int k;
		cin >> k;
		a.push_back(k);
		b.push_back(1);
		
	}

}
int Kiemtra(char t1[],char t2[],int n){
	for (int i = 0; i < n; i++){
		if (t1[i] != t2[i]){
			return 0;
		}
	}
	return 1;
}
int temp=0;
string t1[1000];
void Xuat(vector<int>&a,vector<int>&b,int n){
	
	int tong1 = 0, tong2 = 0;
	
	for (int i = 0; i < n; i++){
		tong1 += a[t[i]];
		result[t[i]] = "A";
		if (tong1>15){
			tong1 -= a[t[i]];
			tong2 += a[t[i]];
			result[t[i]] = "B";
			

		}
		
	}
	
	
	if (tong1 == tong2){
		t1[dem] = "";
		for (int i = 0; i< n; i++){
			t1[temp++] += result[i];
		}
		
	}
	
	
}

void Xuly(){
	for (int i = 0; i < temp-1; i++){
		for (int j = 1; j < temp; j++){
			
			if (t1[i] == t1[j]){
				t1[j] = "";
			}
		}

	}
	int h = 0;
	for (int i = 0; i < temp; i++){
		
		if (t1[i] != ""){
			h++;
		}
	}
	cout << h << endl;
	for (int i = 0; i < temp; i++){

		if (t1[i] != ""){
			cout << t1[i] << endl;
		}
	}
}

void TienTe(vector<int>&a, vector<int>&b, int k){
	for (int i = 0; i < a.size(); i++){
		if (b[i]){
			t[k] = i;
			b[i] = 0;
			if (k == a.size() - 1){
				Xuat(a,b,a.size());
			}
			else{
				TienTe(a, b, k + 1);
			}
			b[i] = 1;
		}
	}
}
int main(){
	vector<int>a, b;
	int n;
	Nhap(a, b, n);
	TienTe(a, b, 0);
	Xuly();
	system("pause");
	return 0;
}