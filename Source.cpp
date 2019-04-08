
/*

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	const int row = 5;
	const int col = 5;
	int i, j;
	int mas[row][col];

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			mas[i][j] = (i + 1) * 10 + (j + 1);
		}
	}

	for (i = 0; i < row; i++)
	{
		for (j =  0 ; j <= i && i + j + 1 <= col ;j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}*/


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	const int row = 5;
	const int col = 5;
	int i, j;
	int mas[row][col];

	for (i = 0 ; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			mas[i][j] = (i + 1) * 10 + (j + 1);
		}
	}

	for (i = 0 ; i < j  ; i ++)
	{
		for (j = 0;  j + i  < col ; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

