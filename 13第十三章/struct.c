#include<stdio.h>
#include<stdlib.h>
//����ṹ��Ϊȫ��
struct student {
		int num;
		char* name;
		char sex;
		int age;
		double height;
		double weight;
	};
//�����ṹ�壬���ؽṹ��ָ��
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

//��ӡ�ṹ�壬ʹ�ýṹ����Ϊ�����Ĳ���
void printStudent(struct student* sp)
{
	printf("%d,%s,%s,%d,%g,%g\n", sp->num, sp->name, sp->sex == 'm' ? "��" : "Ů", sp->age, sp->height, sp->weight);
}
int main(void)
{

	struct student* stu1 = createStudent(1,"����",'m',18,183,75);
	struct student *stu2 = createStudent(2, "����", 'f', 19, 168, 55);

	//ʹ��malloc���������ṹ��
	//struct student* sp = (struct student*)malloc(sizeof(struct student));
	//sp->num = 3;
	//sp->name = "����";
	//sp->sex = 'm';
	//sp->age = 20;
	//sp->height = 178;
	//sp->weight = 100;
	//struct student* sp = &stu2;
	//printf("%d,%s,%s,%d,%g,%g\n", sp->num, sp->name, sp->sex == 'm' ? "��" : "Ů", sp->age, sp->height, sp->weight);

	printStudent(stu1);
	printStudent(stu2);

	return 0;
}