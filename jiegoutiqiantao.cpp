/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef struct landscpe {
	char name[10];
	int count;
}l;
int main() {
	l arr[4] = { {"a",0},{ "b",0 },{ "c",0 },{ "d",0 } };
	srand(time(NULL));
	for (int i = 0; i <80; i++) {
		int temp = rand() % 4 ;
		arr[temp].count++;}
		l*max = arr;
		for (l* p = &arr[1]; p < &arr[4]; p++) {
			if ((*max).count < (*p).count) {
				max = p;}
		}
		 printf("a地的投票:%d\n"
		"b地的投票:%d\n"
		"c地的投票:%d\n"
		"d地的投票:%d",
		arr[0].count, arr[1].count, arr[2].count, arr[3].count);
		printf("最终的景点是%s",(*max).name );

return 0;
}
*/