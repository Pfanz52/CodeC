#include <stdio.h>

int main()
{
	int a, b;
	printf(" nhap hai so bat ky\n");
	scanf("%d%d", &a, &b);

	//  return 1;
	while (a <= b)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("%d ", a);
		}
		a++;
	}
	return 0;
}