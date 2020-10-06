#include<stdio.h>
int main(){
	int ClientNumber = 0;
	int Somme=0;
	int N=0;
	printf("Donnez moi un nombre possitif : \n");
	scanf("%d",&ClientNumber);
	if (ClientNumber >= 0)
	{
		if (ClientNumber % 2 == 0)
		{
			printf("%d est pair\n",ClientNumber);
			for(ClientNumber;ClientNumber>=0;ClientNumber=ClientNumber-2)
			{
				printf("%d = Somme\n",ClientNumber);
			}
		}
		else
		{
			printf("%d est impair\n",ClientNumber);
		}
	}
	else
	{
		printf("%d n'est pas un nombre possitif /!\\ \n",ClientNumber);
	}
	
}
