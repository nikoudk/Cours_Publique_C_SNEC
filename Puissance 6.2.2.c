#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n;
	int x;
	int somme;

	printf("Donnez moi X : \n");
	scanf("%d",&x);
	printf("Donnez moi N : \n");
	scanf("%d",&n);
	somme=pow(x,n);
	printf("%d\n",somme );
}