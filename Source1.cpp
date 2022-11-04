#include <iostream>
#include "Header.h"
using namespace std;
void ammar::setname(char * t)
{
	name = t;

}

char * ammar::getname(char * n)
{
	int length = 0;
	for (int i = 0; n[i] != '\0'; i++)
	{
		length++;
	}
	char * nn = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		nn[i] = n[i];
	}
	nn[length] = '\0';

	return nn;
}