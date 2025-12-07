// WAP to inerst and display elements of an array
#include <stdio.h>
#define MAXSIZE 100
int main() {
    int a[MAXSIZE];
    int i,size,pos,n;
    printf("enter the  value of element you want to insert");
    scanf("%d",&size);
    printf("enter the position(0 to%d) where you want to insert the element\n",size);
    scanf("%d",&pos);
    printf("enter the %d element",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    if(pos<0||pos>size)
    {
        printf("invalid position");
        return 0;
    }
    else{
    for(i=size-1;i>=pos-1;i--)
        {
            a[i]=a[i-1];
        }
        size++;
        printf("enter the element to insert at position %d:",pos);
        scanf("%d",&a[pos]);
    }
       printf("The Array element are:");
       for(i=0;i<size;i++)
    {
       
        printf("%d\t",a[i]);
        
    
    }
    printf("\n");
    return 0;
}