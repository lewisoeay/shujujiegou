#include<stdio.h>
#define hang 3
#define lie 3
void hanshu(int str[hang][lie], int dest[lie][hang]);
int main() {
			int str[hang][lie] = {
				{1,2,3},
				{4,5,6},
				{7,8,9}
			};
		
			int dest[lie][hang];
			hanshu(str, dest);
			for (int i = 0; i < lie; i++) {
				for (int j = 0; j < hang; j++) {
					printf("%d ", dest[i][j]);
				}
				printf("\n");
			}
		
		return 0;
}void hanshu(int str[hang][lie], int dest[lie][hang]) {
	for (int i = 0; i < hang; i++) {
		for (int j = 0; j < lie; j++) {
			dest[j][i] = str[i][j];
		}
	}
}
