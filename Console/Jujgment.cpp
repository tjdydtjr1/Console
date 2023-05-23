#include "Jujgment.h"

void Jujgment::jujgment(int numA, int numB, int numC, int numD, int numE, int numF)
{
	if (numA == numD && numB == numE && numC == numF)
	{
		printf("홈런\n");
	}
	else
	{
		if (numA == numD)
		{
			printf("첫번째 숫자 : 1S\n");
		}
		else if (numA == numE)
		{
			printf("첫번째 숫자 : 1B\n");
		}
		else if (numA == numF)
		{
			printf("첫번째 숫자 : 1B\n");
		}
		else
		{
			printf("첫번째 숫자 : 1OUT\n");
		}

		if (numB == numE)
		{
			printf("두번째 숫자 : 1S\n");
		}
		else if (numB == numD)
		{
			printf("두번째 숫자 : 1B\n");
		}
		else if (numB == numF)
		{
			printf("두번째 숫자 : 1B\n");
		}
		else
		{
			printf("두번째 숫자 : 1OUT\n");
		}
		if (numC == numF)
		{
			printf("세번째 숫자 : 1S\n");
		}
		else if (numC == numE)
		{
			printf("세번째 숫자 : 1B\n");
		}
		else if (numC == numD)
		{
			printf("세번째 숫자 : 1B\n");
		}
		else
		{
			printf("세번째 숫자 : 1OUT\n");
		}
	}
}
