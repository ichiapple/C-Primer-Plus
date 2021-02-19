#include<stdio.h>
#include<float.h>

int main(void)
{
	double d_third = 1.0 / 3.0;
	float f_third = 1.0 / 3.0;
	printf("float of one third(6)=%.6f\n", f_third);
	printf("float of one third(12)=%.12f\n", f_third);
	printf("float of one third(16)=%.16f\n", f_third);

	printf("double of one third(6)=%.6lf\n", d_third);
	printf("double of one third(12)=%.12lf\n", d_third);
	printf("double of one third(16)=%.16lf\n", d_third);

	printf("FLT_DIG in float.h is %d\n", FLT_DIG);
	printf("DBL_DIG in float.h is %d\n", DBL_DIG);

	return 0;
}