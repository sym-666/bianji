#include<stdio.h>
int main()
{
	int t, a, b, c;

	scanf_s(" % d % d % d", &a & b& c);

	if ("a>c && b>c")
	{
		t = 1;
	}
	if ("c>a && b>a")
	{
		t = 2;
	}
	if ("c>b && a>b")
	{
		t = 3;
	}
	switch (t)
	{
	case 1:
		printf("%d,c");break;
	case 2:
		printf("%d,a");break;
	case 3:
		printf("%d,b");break;
	}
	return 0;
}


