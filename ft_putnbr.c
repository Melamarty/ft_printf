#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int long	nb;
	int			len;
	char		c;

	nb = n;
	len = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		len++;
	}
	if (nb >= 10)
	{
		len += ft_putnbr(nb / 10);
		len += ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
		len++;
	}
	return (len); 
}