#include <stdio.h>
main()
{
	//definiowanie zmiennych 
float wynik;
float c;
float k;
float f;
int rodzaj,powtorz;

//petla do while odpowiadajaca za powtarzanie obliczen
do{
//wybor opcji - switch case 
puts("Wybierz rodzaj konwersji temperatur: \n Celsjusz - Kelwin (1) \n Kelwin - Celsjusz (2) \n Fahrenheit - Celsjusz (3) \n Fahrenheit - Kelwin (4) \n Keliwn - Fahrenheit (5) \n Celsjusz - Fahrenheit (6)");
scanf("%d",&rodzaj);

switch(rodzaj)
{
	case 1:
		puts("\t Celsjusz - Kelwin");
		puts("Podaj temperature ktora chcesz przeliczyc");
		scanf("%f",&c);
		wynik = c + 273,15;
		printf("Podana przez Ciebie temperatura %.2f C to %.2f Kelwina ", c, wynik);
		break;
	
	case 2:
		puts("\t Kelwin - Celsjusz");
		puts("Podaj temperature ktora chcesz przeliczyc");
		scanf("%f",&k);
		wynik = k - 273.15;
		printf("Podana przez Ciebie temperatura %.2f Kelwina to %.2f C  ", k, wynik);
		break;
	
	case 3:
		puts("\t Fahrenheit - Celsjusz");
		puts("Podaj temperature ktora chcesz przeliczyc");
		scanf("%f",&f);
		wynik = (f - 32) /1,8;
		printf("Podana przez Ciebie temperatura %.2f Fahrenheita to %.2f C ", f, wynik);
		break;
	
	case 4:
		puts("\t Fahrenheit - Kelwin");
		puts("Podaj temperature ktora chcesz przeliczyc");
		scanf("%f",&f);
		wynik = (f + 459.67) * 5/9;
		printf("Podana przez Ciebie temperatura %.2f Fahrenheita to %.2f Kelwina ", f, wynik);
		break;
	
	case 5:
		puts("\t Kelwin - Fahrenheit ");
		puts("Podaj temperature ktora chcesz przeliczyc");
		scanf("%f",&k);
		wynik = (k * 1.8) - 459.67;
		printf("Podana przez Ciebie temperatura %.2f Kelwina to %.2f Fahrenheita ", k, wynik);
		break;
	
	case 6:
		puts("\t Celsjusz - Fahrenheit");
		puts("Podaj temperature ktora chcesz przeliczyc");
		scanf("%f",&c);
		wynik = (c*1,8) + 32;
		printf("Podana przez Ciebie temperatura %.2f celsjusza to %.2f Fahrenheita ", c, wynik);
		break;
	
	default:
		puts("\tbledny wybor");
		break;
}
puts(" \n Czy chcesz powtorzyc obliczenia ? \n (0) - nie (1) - tak ))");
scanf("%d",&powtorz);
}while(powtorz == 1);
}
