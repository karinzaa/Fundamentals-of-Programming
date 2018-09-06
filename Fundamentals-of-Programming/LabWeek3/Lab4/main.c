#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	int i, a = 0, b = 0, c = 0;
	bool x = true;
	scanf("%d", &i);
	while (i > 0)
	{
		if (i >= 100)
		{
			if (i >= 500)
			{
				if (i >= 1000)
				{
					c++;
					i -= 1000;
				}
				else
				{
					b++;
					i -= 500;
				}
			}
			else
			{
				a++;
				i -= 100;
			}
		}
		else
		{
			x = false;
			printf("Sorry.. the amounts you insert are not possible to withdrawn.");
			break;
		}
	}
	if (x == true)
	{
		printf("Summary of banknotes:\n");
		printf("%d notes of 1000 bath\n", c);
		printf("%d notes of 500 bath\n", b);
		printf("%d notes of 100 bath", a);
	}
	return 0;
}