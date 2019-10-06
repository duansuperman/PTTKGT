#include<iostream>
#include<vector>
using namespace std;
int min(int a, int b){
	return a < b ? a : b;
}
int minCostClimbingStairs(vector<int>& cost) {
	int N = cost.size();
	if (N == 0) return 0;
	if (N == 1) return cost[0];
	if (N == 2) return min(cost[0], cost[1]);

	int c0 = cost[0], c1 = cost[1], c;

	int vt;
	for (int i = 2; i<N; i++) {
		c = min(c0, c1) + cost[i];
		
		c0 = c1;
		c1 = c;
	}
	return min(c0, c1);
}
int main(){
	vector<int> a = { 10,15,20};
	cout << minCostClimbingStairs(a) << endl;;
	system("pause");
	return 0;
}