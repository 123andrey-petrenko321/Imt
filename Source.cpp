
/*����� ���� ������ �����*/


/*#include <iostream>   
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;

	for (int i = A; i < B; i++)
		if ( i % 2 == 0)  cout << i << " ";
	system("pause");
	return 0;
}
*/



/*����� ���� ����� �� � ��*/
/*#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;

	for (int i = A; i <= B; i++)
		cout << i << endl;
	system("pause");
	return 0;
}*/



/*����� �� � �� � �������� �������*/
/*#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;

	for (int i = B; i >= A; i--)
		cout << i << endl;
	system("pause");
	return 0;
}*/


/*����� �� ������*/
/*#include <iostream>
using namespace std;

int main()
{
	int A, B, S = 0;
	cin >> A >> B;

	for (int i = A; i < B; i++)
		if (i % 2 != 0) 
			S = S + i;
			cout <<S << " ";
	system("pause");
	return 0;
}*/

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
		cout << "����� ���� ���� " << s << '\n';
	}
	else
	{
		b = a / 10;
		c = a % 10;
		s = b + c;
		cout << b << '\n' << c << '\n';
		cout << "����� ���� ���� " << s <<'\n';
	}
	system("pause");
	return 0;
}
