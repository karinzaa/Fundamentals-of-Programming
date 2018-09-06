#include <stdio.h>

float CTI(float a)
{
	return a / 2.54;
}
float ITC(float a)
{
	return a * 2.54;
}
int main()
{
	float in;
	char t;
	printf("Input value and select mode.\n");
	printf("a = Convert to cm\n");
	printf("b = Convert to inch\n");
	scanf("%f %c", &in, &t);
	switch (t)
	{
	case 'a':
		printf("%.2f inch = %.2f cm\n", in, ITC(in));
		break;
	case 'b':
		printf("%.2f cm = %.2f inch", in, CTI(in));
		break;
	}
	return 0;
}