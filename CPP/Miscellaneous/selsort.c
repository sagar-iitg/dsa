#include<stdio.h>
#include<stdlib.h>   //for malloc() function

void sel_sort(int *,int);
int smallest_ele(int *,int,int);

int main()

{   
	int size_of_array,*array,i;
	
    printf("\nEnter the size of the array:\t");
    scanf("%d",&size_of_array);
    
    array=(int *)malloc(size_of_array*sizeof(int));
    
	printf("\nEnter the elements:\n");
    for(i=0;i<size_of_array;i++)
        scanf("%d",&array[i]);
        
    printf("\nThe raw_array is given as:\t\t");
    for(i=0;i<size_of_array;i++)
        printf("%d\t",array[i]);
        
    
    sel_sort(array,size_of_array);        //calling quicksort function
    
    printf("\n\nNow the sorted array is given as:\t");
    for(i=0;i<size_of_array;i++)
        printf("%d\t",array[i]);
        
    return 0;
}
void sel_sort(int *array,int size_of_array)
{
    int i,pos,temp;
    for(i=0;i<size_of_array;i++)
    {
        pos=smallest_ele(array,i,size_of_array);
        //swap(array[i],array[pos])
        if(i!=pos)
        {
            temp=*(array+i);
            *(array+i)=*(array+pos);
            *(array+pos)=temp;
        }
        
    }
}
int smallest_ele(int *array,int i,int size_of_array)
{
    int j,pos,small;
    small=*(array+i);
    pos=i;
    for(j=i+1;j<size_of_array;j++)
    {
        if(*(array+j)<small)
        {
            small=*(array+j);
            pos=j;
        }
    }
    return pos;
}
    






