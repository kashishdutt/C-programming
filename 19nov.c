// #include<stdio.h>
// int main()
// {
//     int size,i;
//     printf("Enter the size");
//     scanf("%d",&size);
//     char arr [size];
//     printf("Enter the characters");
//     for(i=0;i<size;i++)
//     {
//         scanf(" %c",&arr[i]);
//     }
//     printf("The Name is: ");
//     for(i=0;i<size;i++)
//     {
//         printf("%c",arr[i]);
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a character: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    puts(str);
    return 0;
}