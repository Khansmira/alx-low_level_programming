#include "variadic_functions.h"

/**
 * print_char - This function prints char
 * @arg: first argument
 */

void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}


/**
 * print_int - This function prints int
 * @arg: second argument
 */

void print_int(va_list arg)
{
	int i = va_arg(arg, int);

	printf("%d", i);
}


/**
 * print_float - This function prints float
 * @arg: third argument
 */

void print_float(va_list arg)
{
	float f = va_arg(arg, double);

	printf("%f", f);
}

/**
 * print_string - function prints strings.
 * @arg: third argument
 */
void print_string(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}


/**
 * print_all - This function prints anything.
 * @format: format specifier
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0;
	int check;
	char *septr = "";

	print data[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(arg, format);

	while (format && format[i])
	{
		check = 0;
		while (check < 4 && format[i] != *(data[check].str))
		{
			check++;
		}

		if (check < 4)
		{
			printf("%s", septr);
			data[check].print_all(arg);
			septr = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(arg);
}
