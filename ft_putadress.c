#include "ft_printf.h"

int	ft_putadress(unsigned long long nb)
{
	int len;

	len = 0;
	if(nb >= 16)
	{
		len += ft_putadress(nb / 16);
		len += ft_putadress(nb % 16);
	}
	if(nb < 10)
		len += ft_putchar(nb + '0');
	else if(nb < 16)
		len += ft_putchar(nb + 'a' - 10);
	return (len);
}