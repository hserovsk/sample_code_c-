#include <stdio.h>

main()
{
int numer_pola;
int data_zabiegu;
char nazwa_produktu[15];
float dawka;
float powierzchnia;


puts("Podaj numer pola");
scanf("%d",&numer_pola);
puts("Podaj date wykonania zabiegu w formacie DDMMRR");
scanf("%d",&data_zabiegu);
puts("Podaj nazwe produktu");
scanf("%s",&nazwa_produktu);
puts("Podaj dawke na hektar l/ha");
scanf("%f",&dawka);
puts("Podaj powierzchnie pola w ha");
scanf("%f",&powierzchnia);

int rodzaj;
puts("Wybierz rodzaj srodka: \n 1.Insektycyd \n 2.Herbicyd \n 3.Fungicyd");
scanf("%d",&rodzaj);
switch(rodzaj)
{
	case 1:
		puts("\tWybrales Insektycyd");
		break;
	
	case 2:
		puts("\tWybrales Herbicyd");
		break;
	
	case 3:
		puts("\tWybrales Fungicyd");
		break;
	
	default:
		puts("\tbledny wybor");
		break;
}
float ilosc_srodka;
float ilosc_wody;

ilosc_srodka = dawka*powierzchnia;
ilosc_wody = 300*powierzchnia;

printf("\tNumer pola:  %d \n",numer_pola);
printf("\tData zabiegu:  %d \n",data_zabiegu);
printf("\tNazwa produktu:  %s \n",nazwa_produktu);
printf("\tIlosc potrzebnego srodka do zabiegu to:  %5.2f \n",ilosc_srodka);
printf("\tIlosc potrzebnej wody:  %5.2f \n",ilosc_wody);

if(ilosc_srodka < 2.5)
{
	puts("\tOpakowania 2,5 L");
	
}
else if(ilosc_srodka < 5)
{
	puts("\tOpakowania 5 L");
}
else 
{
	puts("\tOpakowania 10 L");
}

}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

