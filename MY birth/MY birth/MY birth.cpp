// MY birth.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

int main()
{
	int a;
	printf("");
		scanf_s("%d" ,&a);
		if (a % 2 == 0) {
			printf("%d is the multiple of 2", a);
		
		}
		else { printf("%d is not the multiple of 2", a); }
		system("pause");
    return 0;
}

