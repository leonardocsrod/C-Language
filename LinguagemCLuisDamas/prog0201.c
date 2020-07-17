#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
setlocale(LC_ALL, "Portuguese_Brazil.1252");
int num = 123;
printf("O valor de num é %d, e o valor seguinte é %d!!!\n", num, num + 1);
printf("%s\n", setlocale(LC_ALL,""));



}