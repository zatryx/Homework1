#include <stdio.h>
#include < stdlib.h >
int main(void)
{
	char fnum[20]; //первое вводимое число
	char snum[20]; //второе вводимое число
	printf("First number:");
	scanf_s("%s", &fnum, (unsigned)__crt_countof(fnum));
	printf("Second Number:");
	scanf_s("%s", &snum, (unsigned)__crt_countof(snum));
	char endnum[512];
	char point[] = ".";
	snprintf(fnum, sizeof fnum, "%s%s", fnum, point); //добавление точки к первому числу 
	snprintf(endnum, sizeof endnum, "%s%s", fnum, snum); //первое число с точкой + второе
	long double Num = 0; //выводимое число
	Num = atof(endnum); //конвертирует в дабл
	printf("%f\n", Num);
}
