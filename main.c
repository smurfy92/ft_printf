#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

void		ft_printf(char *str, ...)
{
	va_list valist;
	char *sum;

	va_start(valist, str);
	int i = 1;

	while ((sum = (char*)va_arg(valist, void*)))
	{

		//write(1, &sum, 1);
		if (sum && ((sum[0] >= 65 && sum[0] <= 90) || (sum[0] >= 97 && sum[0] <= 122)))
		{
			printf("ici %d\n", i++);
			printf("%s\n", sum);
		}
		else
			printf("not a string\n");
	}
	va_end(valist);

}


int		main(int argc, char **argv)
{
	ft_printf("toto", "titi", 3);
}