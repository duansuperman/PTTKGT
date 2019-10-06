#include<iostream>
#include<vector>
using namespace std;

int Maxvalue(int a, int b){
	return a > b ? a : b;
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
	int MaxTong = 0;
	int vtmin =0;
	
	vector<int> Minleft;
	for (int i = 1; i < a.size(); i++){
		if (a[i] - a[vtmin] < 0){
			vtmin = i;
			continue;
		}
		Minleft.push_back(a[i] - a[vtmin]);
	}
	
	
	for (int i = 0; i <Minleft.size(); i++){
		MaxTong = Maxvalue(Minleft[i], MaxTong);
	}
	cout <<"Loi nhuan : "<< MaxTong<< endl;
	system("pause");
	return 0;
}