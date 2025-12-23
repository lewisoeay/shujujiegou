/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int panduan(int arr[], int len, int num);  
int main() {
	int i;

	int arr[10] = {};
	int len = sizeof(arr) / sizeof(int);
	srand(time(NULL));

	for (int i = 0; i < len; ) {
		int num = rand() % 100 + 1;
		int flag = panduan(arr, len, num);
		if (!flag) {
			arr[i] = num;
			i++;
		}

		

	}int count = 0;
	for (int i = 0; i < len; i++) {

		count = count + arr[i];
		printf("%d\n", arr[i]);
	}printf("%d", count);
	


	return 0;
}
int panduan(int arr[], int len, int num)
{
	for (int i = 0; i < len; i++) {
		if (arr[i] == num) {
			return 1;
		}
	}

	return 0;
}*/