#include<stdio.h>
int main() 
{
    int age;
    printf("entre the give age:");
    scanf("%d" , &age);
    if(age>=18)
    printf("voting is eligible");
    else
    printf("voting is not eligible");
    return 0;
}