#include<stdio.h>
#include<stdlib.h>   //for malloc() function

void quicksort(int *,int,int);
int partition(int *,int,int);

int main()

{   
	int size_of_array,*array,i,first,last;
	
    printf("\nEnter the size of the array:\t");
    scanf("%d",&size_of_array);
    
    array=(int *)malloc(size_of_array*sizeof(int));
    
	printf("\nEnter the elements:\n");
    for(i=0;i<size_of_array;i++)
        scanf("%d",&array[i]);
        
    printf("\nThe raw_array is given as:\t\t");
    for(i=0;i<size_of_array;i++)
        printf("%d\t",array[i]);
        
    first=0;
    last=size_of_array-1;
    
    quicksort(array,first,last);        //calling quicksort function
    
    printf("\n\nNow the sorted array is given as:\t");
    for(i=0;i<size_of_array;i++)
        printf("%d\t",array[i]);
        
    return 0;
}
void quicksort(int *array,int first,int last)
{
    int loc;
    if(first<last)
    {
        loc=partition(array,first,last);
    	quicksort(array,first,loc-1);
    	quicksort(array,loc+1,last);
    }

}
int partition(int *array,int left,int right)
{
    int loc,temp,x,j;
    x=*(array+right);
    loc=left-1;
    for(j=left;j<right;j++)
    {
    	if(*(array+j)<=x)
    	{
    		loc++;
    		//swap
    		temp=*(array+loc);
    		*(array+loc)=*(array+j);
    		*(array+j)=temp;
		}
	}
    //swap
    temp=*(array+(loc+1));
 	*(array+(loc+1))=*(array+right);
   	*(array+right)=temp;
   	return loc+1;
}





