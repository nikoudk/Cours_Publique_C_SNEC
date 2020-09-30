#include<stdio.h>
int main(){
	int n;
	int x = 1;
	scanf("%d",&n);
	for (n;n!=0;n--)
	{
		x*=n;
	}
	printf("%d\n",x );
}
/* 

PS C:\Users\Machine95500\Desktop\Dev_N\C\Projet_Cours\La Structure Itérative FOR> .\nikou.exe
33
-2147483648

PS C:\Users\Machine95500\Desktop\Dev_N\C\Projet_Cours\La Structure Itérative FOR> .\nikou.exe
31
738197504 

*\