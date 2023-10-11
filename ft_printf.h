#include <unistd.h>
#include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int ft_putadress(unsigned long long nb);
int	ft_putnbr(int n);
int	ft_putuns(unsigned int nb);
int	ft_putlowhex(unsigned int nb);
int ft_putuphex(unsigned int nb);