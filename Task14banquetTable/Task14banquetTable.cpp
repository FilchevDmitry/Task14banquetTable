#include <iostream>
#include<vector>
int main()
{
	int cutlery[2][6] = {{4,3,3,3,3,3},
						 {4,3,3,3,3,3}};
	int plates[2][6] = {{3,2,2,2,2,2},
						{3,2,2,2,2,2}};
	int chair[2][6] = {{1,1,1,1,1,1},
					   {1,1,1,1,1,1}};
	for (int i=0; i<2;i++ )
	{
		for (int j = 0; j < 6; j++)
		{
			std::cout << cutlery[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			std::cout << plates[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			std::cout << chair[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	chair[0][4] = 2;
	plates[1][0] = 2;
	cutlery[1][0] = 3;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			std::cout << cutlery[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			std::cout << plates[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			std::cout << chair[i][j];
		}
		std::cout << std::endl;
	}
}

