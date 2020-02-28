#include <iostream>
#include <cmath>
using namespace std;

main()
{
	float a,b,wynik;
	int wybor;
	cout<<"  KALKULATOR  \n";
	cout<<"--------------\n";
	cout<<"Podaj liczbe a";
	cin>>a;
	
	cout<<"1.dodawanie \n 2.odejmowanie \n 3.mnozenie \n 4.dzielenie \n 5.potegowanie \n 6.pierwiastek \n";
	cin>>wybor;
	cout<<"twoj wybor to: "<<wybor;
	switch(wybor)
	{
	
	case 1:
		cout<<"podaj liczbe b ";
		cin>>b;
		wynik=a+b;
		cout<<"wynik dzialania to: \n";
		cout<<wynik;
		break;
	case 2:
		cout<<"podaj liczbe b ";
		cin>>b;
		wynik=a-b;
		cout<<"wynik dzialania to: \n";
		cout<<wynik;
		break;
	case 3:
		cout<<"podaj liczbe b ";
		cin>>b;
		wynik=a*b;
		cout<<"wynik dzialania to: \n";
		cout<<wynik;
		break;
	case 4:
		cout<<"podaj liczbe b";
		cin>>b;
		wynik=a/b;
		cout<<"wynik dzialania to: \n";
		cout<<wynik;
		break;
	case 5:
		cout<<"podaj liczbe b (do potegi)";
		cin>>b;

		cout<<"wynik dzialania to: \n";
		cout << pow(a,b) << endl;
		break;
	case 6:
		cout<<"podaj liczbe b (stopien pierwiastka)";
		cin>>b;
		wynik = pow(a, 1.0f / b);
		cout<<"wynik dzialania to: \n";
		cout<<wynik;
		break;
	default:
		cout<<"bledny wybor";
		break;
	}
}
