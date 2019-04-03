/*#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
   int a,b,c;
   char z;
   cout <<"Введите число 1"<<endl;
   cin >> a ;
   cout <<"Введите число 2"<<endl;
   cin >> b;
   cout <<"выберите действие"<<endl;
   cin >> z;
   switch(z)
   {


        case '+':
            {
                c=a+b;
                cout<<"результат"<<c<<endl;
                break;
                }
        case '-':
            {
                c=a-b;
                cout<<"результат"<<c<<endl;
                break;
                }
        case '*':
            {
                c=a*b;
                cout<<"результат"<<c<<endl;
                break;
                }
        case '/':
            {
                c=a/b;
                cout<<"результат"<<c<<endl;
                break;
                }
   }
    return 0;
}*/
/*#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    if(a>b)
        if(a>c)
            cout << a <<endl;
        else
            cout << c<<endl;

    else
        if(b>c)
            cout << b <<endl;
        else
            cout <<c << endl;

  return 0;
}
*/
/*#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    int m,n,i;
    cin>>m;
    cin>> n;
    for( i=n;i>=m;i--)

       cout <<i<<endl;

  return 0;
}*/
/*#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    int m,n,i;
    cin>>m;
    cin>> n;
    for( i=n;i>=m;i--)

       cout <<i<<endl;

  return 0;
}
//Число на цифры//
#include <iostream>
using namespace std;

int main()
{
	setlocale (LC_ALL,"Rus");
	int a,b,c,d,s;

	cin >> a;
	if (a >= 100)
	{
		b = (a / 100);
		c = (a % 100) / 10;
		d = (a % 100) % 10;
		s = b + c + d;
		cout << b << '\n' << c << '\n' << d << '\n';
		cout << "сумма этих цифр " << s << '\n';
	}
	else
	{
		b = a / 10;
		c = a % 10;
		s = b + c;
		cout << b << '\n' << c << '\n';
		cout << "сумма этих цифр " << s <<'\n';
	}
//	system("pause");
	return 0;
}
// сумма не четных//
/*
#include <iostream>
using namespace std;
int main()
{
	int A,i, B, S = 0;
	cin >> A >> B;
	for ( i = A; i < B; i++)
		if (i % 2 != 0)
			S = S + i;
			cout <<S << " ";
	//system("pause");
	return 0;
}
*/

//вывод четных//
/*
#include <iostream>
using namespace std;
int main()
{
	int A, B;
	cin >> A >> B;
	for (int i = A; i < B; i++)
		if ( i % 2 == 0)  cout << i << " "<< endl;
	//system("pause");
	return 0;
}
*//*
#include <iostream>
using namespace std;

int main()
{
	setlocale (LC_ALL,"Rus");
	int a,b,c,d,s;

	cin >> a;
	if (a >= 100)
	{
		b = (a / 100);
		c = (a % 100) / 10;
		d = (a % 100) % 10;
		s = b + c + d;
		cout << b << '\n' << c << '\n' << d << '\n';
		cout << "сумма этих цифр " << s << '\n';
	}
	else
	{
		b = a / 10;
		c = a % 10;
		s = b + c;
		cout << b << '\n' << c << '\n';
		cout << "сумма этих цифр " << s <<'\n';
	}
//	system("pause");
	return 0;
}
*/
/*#include <iostream>
using namespace std;

int main()
{
	setlocale (LC_ALL,"Rus");

        int a,s;
        cin >> a;
	    for (s=0;a>0;)
        {
            s+=a%10;
            a=a/10;
        }
	    cout<<s<<endl;
	return 0;
}*/
/*#include <iostream>
using namespace std;

int main()
{
	setlocale (LC_ALL,"Rus");

        int a,s;
        cin >> a;
	    for (s=0;a>0;)
        {
            s++;
            a=a/10;
        }
	    cout<<s<<endl;
	return 0;
}*/

/*#include <iostream>
using namespace std;

int main()
{
	setlocale (LC_ALL,"Rus");

    int a,s;
    s=0,a=0;
    do{
        if(a!=0 && a%2==0)s++;
        cin >>a;
    } while(a!=0);

         cout<< endl<< s;


}*/
/*
#include <iostream>
using namespace std;

int main()
{
	setlocale (LC_ALL,"Rus");

    int mas[10];
    int i,k,si;
    for(i=0;i<10;i++)
        cin>> mas[i];
    for(i=0,k=0;i<10;i++)
        if(mas[i]%2==0)
            k++;
    for (i=0,si=0;i<10;i++)
        if(i%2==1)si+=mas[i];
    cout<<"kol-vo: "<<k<<endl;
    cout<< "summ: "<<si<<endl;



return 0;
}
*/


/*							// inic v obratnom poradke
#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");


	int mas[10];
	int i;
	for ( i=0; i < 10 ; i++)
	{
		mas[i]=9-i;
	}
	for ( i = 0; i < 10; i++)
	{
		cout << mas[i] << endl;
	}

	return 0;
}
*/
/*							//inicializacia mass indeksami
#include<iostream>
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

	return 0;
}
*/

/*								// vvod chisel i vuvod
#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"russian");
	const int size = 100;
	int i,n,c;
	int mas[size];
	cout << " kol-vo: " << endl;
	cin >> n;
	cout << " chisla: " << endl;

	for ( i = 0; i < n ; i++)
	{
		cin >> c;
		mas[i] = c;
	}
	for ( i = 0; i < n ; i++)
	{
		cout << mas[i] << endl;
	}


	return 0;
}

*/

										// urok

/*
#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"russian");
	int mas[100];
	int a,n,i;
	n=0;
	cin >> a;

    while(a!=0){
        n++;
        mas[n-1]=a;
        cin>>a;
        }
    cout << n <<endl;
    for (i=0;i<n;i++)
        cout<< mas[i] << endl;



	return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"russian");
	int mas[3][4];
    int i,j,s;

    for (i=0;i<3;i++)
        for (j=0;j<4;j++)
            mas[i][j] = (i+1) * 10 + j+1 ;

            for(i=0; i<3;i++){
                s=0;
                for (j=0;j<4;j++){

                cout << mas[i][j]<< " ";
                s=s+mas[i][j];
            }
            cout <<s<< endl;

        }
	return 0;
}
*/

                        //Homework
/*
#include <iostream>
using namespace std;

int main()
{
	const int row = 4;
	const int col = 3;
	int i, j, sum1,sum2;
	int mas[row][col];

	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			mas[i][j] = (j + 1) * 10 + (i + 1);
		}
	}

	for ( i = 0; i < row; i++)
	{
		sum1 = 0;
		for ( j = 0; j < col; j++)
		{
			cout << mas[i][j] << "\t";
			sum1 = sum1 + mas[i][j];
		}
		cout << sum1 << endl;
	}
	for ( j = 0; j < col; j++)
	{
		sum2 = 0;
		for ( i = 0; i < row; i++)
		{
			sum2 = sum2 + mas[i][j];
		}
		cout << sum2 << "\t";
	}





	return 0;
}

*/

//homework ++
/*
#include <iostream>
using namespace std;

int main()
{
	const int row = 5;
	const int col = 5;
	int i, j;
	int mas[row][col];

	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			mas[i][j] = (i + 1) * 10 + (j + 1);
		}
	}

	for (i = 0 ; i < row;i++ )
	{
		for (j = 0; j < col; j++)
		{
			if ( i >= j )
			{
				cout << mas[i][j] << "\t";
			}
			if ( i<j )
			{
				cout << " " << "\t";
			}
		}
		cout << endl;
	}
	return 0;
}
*/


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	const int row = 5;
	const int col = 5;
	int i, j;
	int mas[row][col];

	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			mas[i][j] = (i + 1) * 10 + (j + 1);
		}
	}

	for (i = 0  ; i <  row;i++ )
	{
	    if  (ceil(float) row/2 )!=3);


		for (j = r-1 -i ; j < col; j++)
		{

				cout << mas[i][j] << "\t";
			}

                cout << " " << "\t";


		cout << endl;
	}
	return 0;
}













