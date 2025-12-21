/*#include<stdio.h>
int main() {
	int arr[3][4] = { {1,2,3,4},
					  {5,6,7,8},
					  {9,0,1,2} };
	
	int(*p)[4] = arr;//括号最高，()(函数)和[]（数组）的优先级
	//其次，*指针优先级最低
	for (int i = 1; i <= 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", *(*p + j));//j的值不能超过数组范围
		
		}
	
		printf("\n");
			 p++;
	}



return 0;
}*/