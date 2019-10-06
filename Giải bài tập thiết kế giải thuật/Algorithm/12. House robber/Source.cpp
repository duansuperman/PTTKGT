#include<iostream>
#include<vector>
using namespace std;
int max(int a, int b){
	return a < b ? a : b;
}
int Vitrimax(vector<int>& a){
	int Max = a[0];
	
	for (int i = 1; i < a.size(); i++){
		if (Max < a[i]){
			Max = a[i];
		}
	}
	for (int i = 0; i < a.size(); i++){
		if (Max == a[i]){
			return i;
		}
	}
}
int rob(vector<int>& nums) {
	if (nums.size() == 0)
		return 0;

	vector<int> f(nums.size(), 0);
	vector<int> g(nums.size(), 0);
	int i;
	f[0] = nums[0];
	g[0] = 0;
	for (i = 1; i<nums.size(); i++){
		
		f[i] = nums[i] + g[i - 1];
	
		g[i] = f[i - 1] > g[i - 1] ? f[i - 1] : g[i - 1];
		
	}
	//n 1 2 3 1 

	//f 1 2 4 4
	//g 0 1 3 4

	return f[i - 1] > g[i - 1] ? f[i - 1] : g[i - 1];
}

int main(){
	vector<int> a = { 1, 2, 3, 1 };
	cout << rob(a) << endl;;
	system("pause");
	return 0;
}