#include "ft_printf.h"
#include <stdio.h>

int	ft_putuns(unsigned int nb)
{
	int	len;

	len = 0;
	if(nb > 9)
	{
		len += ft_putuns(nb / 10);
		len += ft_putuns(nb % 10);
	}
	else
		len += ft_putchar(nb + '0');
	return (len);
}

// int main()
// {
// 	unsigned int n = 100;
// 	int b = ft_putuns(n);
// 	printf("\nlen :%d\n",b);
// }