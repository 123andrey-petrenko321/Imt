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
	
	
	
	
	system("pause");
	return 0;
}