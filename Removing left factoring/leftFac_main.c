/******************************************************************************

The following program is a C++ code for removing left Factoring. 

@auther="Harsh Nagoriya"



*******************************************************************************/
#include<stdio.h>  
#include<string.h>  
int main()  
{  
	char gram[20],p1[20],p2[20],m[20],ng[20],th[20];  
	int i,j=0,k=0,l=0,pos;  
	printf("Enter Production : A->");  
	gets(gram);  
	for(i=0;gram[i]!='|';i++,j++)  
	{
		p1[j]=gram[i];
	}
	p1[j]='\0';  
	for(j=++i,i=0;gram[j]!='\0';j++,i++)  
	{
		p2[i]=gram[j];
	}
	p2[i]='\0';  
	for(i=0;i<strlen(p1)||i<strlen(p2);i++)  
	{  
		if(p1[i]==p2[i])  
		{  
			m[k]=p1[i];  
			k++;  
			pos=i+1;  
		}  
	}  
	for(i=pos,j=0;p1[i]!='\0';i++,j++)
	{  
		ng[j]=p1[i];  
	}  
	ng[j++]='|';  
	for(i=pos;p2[i]!='\0';i++,j++)
	{  
		ng[j]=p2[i];  
	}  
	m[k]='X';  
	m[++k]='\0';  
	ng[j]='\0';  
	printf("\n A->%s",m);  
	printf("\n X->%s\n",ng);  
}  