# name of the executabe

NAME := libftprintf.a
#phony make sure that the desired commands are executed
.PHONY: all clean fclean re
#variables

CFLAGS := -Wall -Werror -Wextra

#source file

SRCS = ft_printf.c \
		ft_write_char.c\
		ft_write_str.c\
		ft_write_unsigned.c\
		ft_write_ptr.c\
		ft_write_int.c\
		ft_write_hex.c\
		ft_write_hexa.c\

OBJS := $(SRCS:.c=.o)

$(NAME) : $(OBJS)
		ar -rcs $(NAME) $(OBJS)

.o : .c
		cc -c $(CFLAGS) $@ $<
fclean :
		rm -f $(NAME) $(OBJS)

clean :
		rm -f $(OBJS)

re : fclean all

all : $(NAME)
