#include<stdio.h>
int main(){	
	double resultat = 0;
    double F;
    int i;
    printf("Donnez F : \n");
    scanf("%lf",&F);
	resultat = (5.0 / 9.0)*(F-32);
	printf ("%.3lf c", resultat);
	resultat = 0 ;
	for (i=-10;i<=100;i=i+10)
	{
		resultat = (5.0 / 9.0)*(i-32);
		printf("Quand on a %d F nous avons %lf C \n",i,resultat );
	}
}