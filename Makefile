SRCS = ft_printf.c ft_putadress.c ft_puthex.c ft_putnbr.c ft_putuns.c ft_putstr.c ft_putchar.c
NAME = libftprintf.a
OBJS = ${SRCS:.c=.o}

%.o: %.c
	gcc -Wall -Wextra -Werror -c $< -o $@

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}
	rm -f *.o

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
