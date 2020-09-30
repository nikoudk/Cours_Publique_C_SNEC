#include <stdio.h>

int main(){
	int Salaire;
	int heure;
	int SommeSalire;
	printf("Donnez le salire par heure :  ");
	scanf("%d",&Salaire);
	printf("Donnez le nombre d'heure :  ");
	scanf("%d",&heure);

	if (heure < 160){
		SommeSalire = heure * Salaire ;
		printf("Le salaire est de %d euros , pour un totale de %d heures",SommeSalire,heure);
	}
	else if (heure > 160 & heure<200){
		SommeSalire = (heure-160)*12.5;
		SommeSalire = SommeSalire+160*10;
		printf("Le salaire est de %d euros , pour un totale de %d heures",SommeSalire,heure);	
	}
	else if (heure>=200){
		SommeSalire = (heure-200)*15;
		SommeSalire = SommeSalire + (160*Salaire);
		printf("Le salaire est de %d euros , pour un totale de %d heures",SommeSalire,heure);
	}
	else if(Salaire < 0 ){
		printf("Le Salaire ets incoérent ");
	}
	else{
		printf("error");
	}
}