#include "function_pointers.h"
	#include <stdio.h>
	/**
	 * print_name - print a name
	 * @name: add name
	 * @f: pointer function
	 *
	 * Return: nothing
	 */
	void print_name(char *name, void (*f)(char *))
	{
		if (name && f)
			f(name);
	}
