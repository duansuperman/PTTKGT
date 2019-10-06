#include<iostream>
#include<vector>
using namespace std;
int MaxVector(vector<int>& a){
	int max = 0;
	int vt = 0;
	for (int i = 0; i < a.size(); i++){
		if (max < a[i]){
			max = a[i];
			vt = i;
		}
	}
	return vt;
}

int MinVector(vector<int>& a){
	int min = a[0];
	int vt;
	for (int i = 0; i < a.size(); i++){
		if (min >= a[i]){
			min = a[i];
			vt = i;
		}
	}
	return vt;
}
int main(){
	vector<int> a;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		int k;
		cin >> k;
		a.push_back(k);
	}
	int check = 0;
	cout << MinVector(a) << endl;
	system("pause");
	return 0;
}