
#include<stdio.h>
#include<malloc.h>>
int main()
{

    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int *a;
    a=(int *)malloc(n*sizeof(int)); // dynamically allocated

    for(int i=0;i<n;i++)
       a[i]=i+1;

    printf("malloc\n");

    for(int i=0;i<n;i++)
        printf("%d\n",*(a+i));



    int *b=(int*)realloc(a,2*n*sizeof(int));

    printf("\n previous block address =%d,new address=%d\n",a,b);
    printf("\nrealloc\n");
    for(int i=0;i<2*n;i++)
        printf("%d\n",*(b+i));


}
