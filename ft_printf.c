#include <stdio.h>
#include "ft_printf.h"

size_t	check_var(const char format, va_list args)
{
	int	var_len;

	var_len = 0;
	if (format == 'c')
		var_len += ft_putchar(va_arg(args, int));
	else if (format == 's')
		var_len += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
	{
		var_len += ft_putstr("0x");
		var_len += ft_putadress(va_arg(args, unsigned long long));
	}
		
	else if (format == 'd' || format == 'i')
		var_len += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		var_len += ft_putuns(va_arg(args, unsigned int));
	else if (format == 'x')
		var_len += ft_putlowhex(va_arg(args,  unsigned int));
	else if (format == 'X')
		var_len += ft_putuphex(va_arg(args,  unsigned int));
	else if (format == '%')
		var_len += ft_putchar('%');
	return (var_len);
}

int	ft_isformat(const char c)
{
	if(c == 'c' || c =='s' || c == 'p' || c == 'd' || c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	len;

	va_start(args, format);
	int i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%' && ft_isformat(format[i + 1]))
			len += check_var(format[++i], args);
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}

///mnt/c/Users/simo/Desktop/cursus/ft_printf/mandatory