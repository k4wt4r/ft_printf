SRCS = ft_printf.c ft_print_integer.c ft_print_string.c \
		ft_print_hex.c ft_print_character.c ft_print_percent.c \
		ft_print_ptr.c ft_itoa.c ft_format.c ft_putchar.c \

OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)
