#include<stdio.h>
int main(){
int n,m,x=0,c,i=0,j=0;
scanf("%d", &n);
scanf("%d", &m);
int e[n][m];

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
 scanf("%d",&e[i][j]);
}
}

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
 printf("%d", e[i][j]);
}
printf("\n");
}
i=0;
j=m-1;    
    while(x<1)
    {
    	
    	if(e[i][j]==1)
	{
	  i++;	
	}

	if(e[i][j]==0)
	{
	 if(e[i][j-1]==0)
	 {
	 	j++;
	 }	
	  if(e[i][j+1]==0)
	 {
	 	j--;
	 }	
	}

	 if(i==n-1)
	 {
	  printf("No");
	  x+=2;
	 }
	 else 
	 {
	  printf("Yes");
	  x+=2;
	 }
}
return 0;
}


