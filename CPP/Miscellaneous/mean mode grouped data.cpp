#include<stdio.h>
#include<math.h>
int main()
{
	int xu[10],xl[10],f[10],i,xf=0,fs=0,cf[10];
	float mean,mode,median;
	int n,fi=0,fm=0;
	printf("\n enter the no. of data points\n");
	scanf("%d",&n);
	printf("\n enter upper lower frequency\n");
	for(i=0;i<n;i++)
	{
		printf("\n enter data");
		scanf("%d%d%d",&xl[i],&xu[i],&f[i]);
		
	}
	for(i=0;i<n;i++)
	{
		xf+=(xl[i]+xu[i])*f[i]/2;
		fs+=f[i];
		if(f[i]>fm)
		{
			fi=i;
			fm=f[i];
		}
	}
	mean=1.0*xf/fs;
	mode=1.0*(xl[fi])+1.0*(xu[fi]-xl[fi])*(f[fi]-f[fi-1])/(2*f[fi]-f[fi-1]-f[fi+1]);
	printf("\n mean=%fand mode=%f\n",mean,mode);
	
	cf[0]=f[0];
	for(i=0;i<n;i++)
	
	{
			
		if(i!=0)
		cf[i]=cf[i-1]+f[i];
		printf("\t %d",cf[i]);
	}
	i=0;
	while(1)
	{
		if(cf[i]>cf[n-1]/2.0)
		break;
		i++;
	}
	median=xl[i]+((xu[i]-xl[i])*1.0/cf[i])*(cf[n-1]/2.0-cf[i-1]);
	printf("\n%f",median);
		
		
	
	

	
	
}
