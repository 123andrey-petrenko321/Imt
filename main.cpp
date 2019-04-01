/*
							// inic v obratnom poradke
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	
	
	int mas[10];
	int i;
	for ( i=0; i < 10 ; i++)
	{
		mas[i]=i;
	}
	for ( i = 10-1; i >=0; i--)
	{
		cout << mas[i] << endl;
	}


	system ("pause");
	return 0;
}*/

							//inicializacia mass indeksami
/*#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");


	int mas[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		mas[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		cout << mas[i] << endl;
	}


	system("pause");
	return 0;
}*/


/*								// vvod chisel i vuvod
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	const int size = 100;
	int i,n,c;
	int mas[size];
	cout << "¬ведите кол во чисел: " << endl;
	cin >> n;
	cout << "введите числа: " << endl;
	for ( i = 0; i < n ; i++)
	{
		cin >> c;
		mas[i] = c;
	}
	for ( i = 0; i < n ; i++)
	{
		cout << mas[i] << endl;
	}
	


	system("pause");
	return 0;
}
*/
					
/*
										// urok

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	int i, k;
	int mas[10];
	for ( i = 0; i <10; i++)
	{
		cin >> mas[i];
	}
	for ( i = 0; i <10; i++)
	{
		cout << mas[i] << endl;
	}
	for (i = 0, k = 0; i < 10; i++)
	{
		if (mas[i] % 2 == 0)
			k++;
	}
	cout << "количество четных:" << k << endl;
	system("pause");
	return 0;
}*/



