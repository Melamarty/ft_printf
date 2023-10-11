#include "ft_printf.h"

int	ft_putstr(char *s)
{
	size_t	len;

	len = 0;
	if (!s)
	{
	write(1, "(null)",6);
	return (6);
	}
	while (s[len])
	{
		write(1, &s[len], 1);
		len++;
	}
	return (len);
}