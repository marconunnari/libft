NAME = libft.a

SRCS =	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memccpy.c \
	ft_memmove.c \
	ft_memchr.c \
	#new#

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(OBJS): %.o: %.c
	gcc -Wall -Wextra -Werror -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

