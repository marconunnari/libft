NAME = libft.a

SRCS =	ft_memset.c \
	ft_bzero.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(OBJS): %.o: %.c
	@gcc -Wall -Wextra -Werror -c $< -o $@

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

