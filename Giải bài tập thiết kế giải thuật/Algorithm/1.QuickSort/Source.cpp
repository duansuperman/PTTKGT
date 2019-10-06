#include<iostream>
using namespace std;
void Nhap(int a[], int n){
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
}
void Xuat(int a[], int n){
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
void Swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}
void QuickSort(int a[], int left, int right){
	int i = left;
	int j = right;
	int pivot = a[(left + right) / 2];
	while (i <= j){
		while (a[i] < pivot){
			i++;
		}
		while (a[j]>pivot){
			j--;
		}
		if (i <= j){
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	if (left < j){
		QuickSort(a, left, j);
	}
	if (i < right){
		QuickSort(a, i, right);
	}
}
int main(){
	int n = 5;
	int a[100];
	Nhap(a, 5);
	QuickSort(a, 0, n - 1);
	Xuat(a, n);
	system("pause");
	return 0;
}