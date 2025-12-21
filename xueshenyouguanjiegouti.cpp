/*#include<stdio.h>
#include<string.h>
typedef struct student {
	char name[100];
	int age;
}s;
void change(s* p);
int main() {
	s stu;
	strcpy_s(stu.name, 100,"aBC");
	stu.age = 100;
	printf("学生初始名称为:%s", stu.name);
	printf("学生初始年龄为：%d", stu.age);
	change(&stu);
	printf("现在学生的名称是；%s", stu.name);



return 0;
}void change(s* p) {
	printf("请输入更改后的名称");
	scanf_s("%s", (*p).name,100);
	printf("更改后的名称为：%s", (*p).name);


}*/