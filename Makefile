NAME=libftprintf.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror

SRCS=ft_printf.c \
     ft_format.c \
     ft_print_hex.c \
     ft_print_integer.c \
     ft_print_ptr.c \
	 ft_print_string.c \
	 ft_print_uint.c \
	 ft_putchar.c \
	 ft_print_char.c


OBJS=${SRCS:.c=.o}

.c.o:
	${CC} ${FLAGS} -c $<
all: ${NAME}

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}
clean:
	rm -rf ${OBJS}
fclean: clean
	rm -rf ${NAME}

re: fclean all
