#include "Jujgment.h"

void Jujgment::jujgment(int numA, int numB, int numC, int numD, int numE, int numF)
{
	if (numA == numD && numB == numE && numC == numF)
	{
		printf("Ȩ��\n");
	}
	else
	{
		if (numA == numD)
		{
			printf("ù��° ���� : 1S\n");
		}
		else if (numA == numE)
		{
			printf("ù��° ���� : 1B\n");
		}
		else if (numA == numF)
		{
			printf("ù��° ���� : 1B\n");
		}
		else
		{
			printf("ù��° ���� : 1OUT\n");
		}

		if (numB == numE)
		{
			printf("�ι�° ���� : 1S\n");
		}
		else if (numB == numD)
		{
			printf("�ι�° ���� : 1B\n");
		}
		else if (numB == numF)
		{
			printf("�ι�° ���� : 1B\n");
		}
		else
		{
			printf("�ι�° ���� : 1OUT\n");
		}
		if (numC == numF)
		{
			printf("����° ���� : 1S\n");
		}
		else if (numC == numE)
		{
			printf("����° ���� : 1B\n");
		}
		else if (numC == numD)
		{
			printf("����° ���� : 1B\n");
		}
		else
		{
			printf("����° ���� : 1OUT\n");
		}
	}
}
