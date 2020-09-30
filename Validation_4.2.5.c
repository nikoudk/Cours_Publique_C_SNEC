#include<stdio.h>

int main(){
	int note1;
	int note2;
	int SommeNote;

	printf("Donnez la note coef 1 : ");
	scanf("%d",&note1);
	printf("Donnez la note coef 2 : ");
	scanf("%d",&note2);
	note1 = note1 * 1 ;
	note2 = note2 * 2 ;
	SommeNote = (note1+note2)/2;
	printf("%d",SommeNote);

	if (SommeNote < 10){
		printf("Succès");
	} 
	else{
		printf("échec");
	}
}