/*#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
   int a,b,c;
   char z;
   cout <<"¬ведите число 1"<<endl;
   cin >> a ;
   cout <<"¬ведите число 2"<<endl;
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
//„исло на цифры//
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
    cout<<"кол во: "<<k<<endl;
    cout<< "сумма нечет: "<<si<<endl;



return 0;
}





























