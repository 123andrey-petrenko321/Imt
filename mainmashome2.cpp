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








	system("pause");
	return 0;
}