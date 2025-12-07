#include <stdio.h>
#define MAXSIZE 100
int main() {
    int a[MAXSIZE];
    int i,size;
    printf("enter the  value of element ,you want to  insert");
    scanf("%d",&size);
    printf("enter the %d element into array",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
       
        
    }
  printf("The Array element are:");
 for(i=0;i<size;i++)
    {
       
        printf("%d\t",a[i]);
        
    }
    return 0;
}