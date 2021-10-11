#include<stdio.h>

int main(){
int n,m,x,i=0,j=0;
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
j=0;
while(x<5){


if(e[0][0]==1)
{
  printf("0");	      
  printf("No");
  x+=6;
}

if(e[i][j+1]==0)
	{
	 j++;          
	}
if(e[i+1][j]!=0&&e[i][j+1]==1&&e[i-1][j]==0)
{
 i--;
}
if(e[i][j+1]==1&&e[i+1][j]==0)
{
	i++;
}
 if(i==n-1&&e[i][j+1]==1&&e[i-1][j]==1){
 printf("No");
  x+=6;                      
 }
 
 if(j==m-1&&e[i][j]==0)
{
 printf("Yes");           
 x+=6; 
}

if(e[i][j+1]==1&&e[i+1][j]==1)
{
if(e[i-1][j]==1)
{
 printf("No");
  x+=6;                 
}
}
}
    return 0;
}
