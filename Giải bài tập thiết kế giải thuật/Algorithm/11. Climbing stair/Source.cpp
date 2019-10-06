#include<iostream>
using namespace std;
int climbStairs(int n) {
	if (n == 0){
		return 0;
	}

	else if (n == 1){
		return 1;
	}
	else if (n == 2){
		return 2;

	}
	else{
		return climbStairs(n - 1) + climbStairs(n - 2);
	}
}
int main(){
	int n = 4;
	int c;
	int c1 = 1, c2 = 2;
	for (int i = 3; i <= n; i++){
		c = c1 + c2;
		c1 = c2;
		c2 = c;
	}
	cout << c << endl;
	system("pause");
	return 0;
}