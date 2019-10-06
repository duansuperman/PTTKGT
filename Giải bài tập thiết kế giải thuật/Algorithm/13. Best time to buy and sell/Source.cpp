#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>prices = { 1, 3, 2, 8, 4, 9 };
	int fee = 2;
	int Max1 = 0;
	int max2=0;
	int temp = 0;
	
	for (int i = 0; i < prices.size(); i++){
		for (int j = i; j < i&&temp<=j; j--){
			temp = i;
			for (int k = 0; k < prices.size(); k++){
				temp = 
				Max1 = (prices[i] - prices[k] - fee)>(prices[j] - prices[k]-fee)?
				if ()
			}
		}
	}
	return 0;
}