// CSPalindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#pragma warning(disable:4996)

int main()
{
	while (true)
	{
		char str[91];
		scanf("%s", str);

		if(strcmp(str, "exit") == 0)
			break;

		char len = strlen(str);
		char shouldContinue = 0;
		for (int i = 0; i < len / 2; ++i)
		{
			if(str[i] != str[len - i - 1])
			{
				shouldContinue = 1;
				break;
			}
		}

		if(shouldContinue)
			continue;

		printf("%s\n", str);
	}
}