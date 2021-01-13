#include<stdio.h>
void main()
{
  int a[10],b[10],c[10],temp,i,j,k,n1,n2,n3,choice,X,p;
  printf("1.Deletion\n2.Concatenation\n");
  printf("\nEnter the choice:\n");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
    printf("enter the size of the array:\n");
    scanf("%d",&n1);
    printf("Enter the array elements:\n");
    for(i=0;i<n1;i++)
    {
      scanf("%d",&a[i]);
    }
    printf("enter the position of element to be deleted:\n");
    scanf("%d",&p);
    for(i=p;i<n1;i++)
    {
      a[i]=a[i+1];
    }
    printf("Resultant array:\n");
    for(i=0;i<n1-1;i++)
    {
       printf("%d ",a[i]);
    }
    break;
    case 2:
        printf("Enter the size of the 1st array:\n");
        scanf("%d",&n1);
        printf("Enter the elements of first array:\n");
        for(i=0;i<n1;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Enter the size of 2nd array:\n");
        scanf("%d",&n2);
        printf("Enter the elements of second array:\n");
        for(j=0;j<n2;j++)
        {
            scanf("%d",&b[j]);
        }
        n3=n1+n2;
        for(i=0;i<n1;i++)
        {
            c[i]=a[i];
        }
        for(i=0,j=n1;i<n2,j<n3;i++,j++)
        {
            c[j]=b[i];
        }
        printf("Resultant array:\n");
        for(i=0;i<n3;i++)
        {
            printf("%d ",c[i]);
        }
        break;
  }
}
