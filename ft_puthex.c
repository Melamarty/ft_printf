#include "ft_printf.h"

int	ft_putlowhex(unsigned int nb)
{
	int len;

	len = 0;
	if(nb >= 16)
	{
		len += ft_putlowhex(nb / 16);
		len += ft_putlowhex(nb % 16);
	}
	if(nb < 10)
		len += ft_putchar(nb + '0');
	else if (nb < 16)
		len += ft_putchar(nb + 'a' - 10);
	return (len);
}

int ft_putuphex(unsigned int nb)
{
	int len;

	len = 0;
	if(nb >= 16)
	{
		len += ft_putuphex(nb / 16);
		len += ft_putuphex(nb % 16);
	}
	if(nb < 10)
		len += ft_putchar(nb + '0');
	else if(nb < 16)
		len += ft_putchar(nb + 'A' - 10);
	return (len);
}