#include<stdio.h>

struct student
{
    char name[45];
    int age;
    char address[50];
    unsigned long number[45];
};

int main()
{
    struct student std;
    printf("enter the name:");
    fgets(std.name, sizeof(std.name), stdin);

    printf("enter your age:");
    scanf("%d", &std.age);

    printf("enter the number:");
    scanf("%lu", std.number);

    printf("your name is:%s", std.name);
    printf("your age is:%d", std.age);
    printf("your address is:%s", std.address);
    printf("your number is:%lu", std.number);

    return 0;
}