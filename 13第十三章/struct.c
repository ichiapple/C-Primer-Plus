#include<stdio.h>
#include<stdlib.h>
//定义结构体为全局
struct student {
		int num;
		char* name;
		char sex;
		int age;
		double height;
		double weight;
	};
//创建结构体，返回结构体指针
struct student* createStudent(int num, char* name, char sex, int age, double height, double weight) {
	struct student* sp = (struct student*)malloc(sizeof(struct student));
	sp->num = num;
	sp->name = name;
	sp->sex = sex;
	sp->age = age;
	sp->height = height;
	sp->weight = weight;

	return sp;
}

//打印结构体，使用结构体作为函数的参数
void printStudent(struct student* sp)
{
	printf("%d,%s,%s,%d,%g,%g\n", sp->num, sp->name, sp->sex == 'm' ? "男" : "女", sp->age, sp->height, sp->weight);
}
int main(void)
{

	struct student* stu1 = createStudent(1,"张三",'m',18,183,75);
	struct student *stu2 = createStudent(2, "李四", 'f', 19, 168, 55);

	//使用malloc函数创建结构体
	//struct student* sp = (struct student*)malloc(sizeof(struct student));
	//sp->num = 3;
	//sp->name = "王五";
	//sp->sex = 'm';
	//sp->age = 20;
	//sp->height = 178;
	//sp->weight = 100;
	//struct student* sp = &stu2;
	//printf("%d,%s,%s,%d,%g,%g\n", sp->num, sp->name, sp->sex == 'm' ? "男" : "女", sp->age, sp->height, sp->weight);

	printStudent(stu1);
	printStudent(stu2);

	return 0;
}