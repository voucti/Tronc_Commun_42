#include "printf.h"
#include <unistd.h>
#include <stdarg.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	switch(va_list	args, char c)
{
	if (c = "c")
		ft_putchar_fd(va_arg(list, char), 1);
	return (0);
}

int ft_printf(const char *s, ...)
{
	va_list		args;
	char		*txt;
	int			i;

	va_start(args, count);
	i = -1;

	while (i++, s[i] != '\0')
	{
		if (s[i] == '%')
			i += switch(args, s[i + 1]) + 2;
		else
			ft_putchar_fd((char)s[i++], 1);
	}
	return (i);
}
