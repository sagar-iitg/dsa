 #include<stdio.h>
 #include<math.h>
 int main()
 {
 
 int x,n,j=3,i,k,fact;
 float sum=0.0,prod;
 printf("enter no. of terms");
 scanf("%d",&n);
 printf("enter value of x");
 scanf("%d",&x);
 sum=x;
 for(i=1; i<n; i++)
 {
 	prod=pow(-1,i)*pow(x,j);
 	fact=1;
 	for(k=0; k<j; k++)
 	fact*=k;
 	j=j+2;
 	sum=sum+(prod/fact);
 }
 printf("%f",sum);
 return 0;
}
