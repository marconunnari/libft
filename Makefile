NAME = libft.a
DIR_OBJS = objs
DIR_SRCS = srcs

SRCS =	mem/ft_memset.c mem/ft_bzero.c mem/ft_memcpy.c mem/ft_memccpy.c mem/ft_memmove.c \
	mem/ft_memchr.c mem/ft_memcmp.c mem/ft_memalloc.c mem/ft_memdel.c mem/ft_swap_ints.c \
	str/ft_strlen.c str/ft_strdup.c str/ft_strcpy.c str/ft_strncpy.c str/ft_strcat.c \
	str/ft_strncat.c str/ft_strlcat.c str/ft_strchr.c str/ft_strrchr.c str/ft_strstr.c \
	str/ft_strnstr.c str/ft_strcmp.c str/ft_strncmp.c str/ft_strdel.c str/ft_strclr.c \
	str/ft_striter.c str/ft_striteri.c str/ft_strmap.c str/ft_strmapi.c str/ft_strequ.c \
	str/ft_strnequ.c str/ft_strsub.c str/ft_strjoin.c str/ft_strmerge.c str/ft_strappend.c \
	str/ft_strprepend.c str/ft_strremove.c 	str/ft_strreplace.c str/ft_strtrim.c \
	str/ft_strrev.c str/ft_strsplit.c str/ft_strftrim.c str/ft_strnew.c str/ft_strctrim.c \
	str/ft_strcmpr.c str/ft_strtoupper.c str/ft_strtolower.c str/ft_strcont.c \
	str/ft_toupper.c str/ft_tolower.c str/ft_contstr.c \
	is/ft_islower.c is/ft_isupper.c is/ft_isalpha.c is/ft_isdigit.c \
	is/ft_isalnum.c is/ft_isascii.c is/ft_isprint.c is/ft_iswhitespace.c \
	conv/ft_atoi.c conv/ft_imaxtoa.c conv/ft_imaxtoa_sign.c conv/ft_uimaxtoa_base.c \
	put/ft_putchar.c put/ft_putstr.c put/ft_putendl.c put/ft_putnbr.c \
	put/ft_putchar_fd.c put/ft_putstr_fd.c put/ft_putendl_fd.c put/ft_putnbr_fd.c \
	lst/ft_lstnew.c lst/ft_lstdelone.c lst/ft_lstadd.c lst/ft_lstiter.c \
	lst/ft_lstdel.c lst/ft_lstmap.c lst/ft_lstiter_rev.c lst/ft_lstpush.c\
	lst/ft_lstpop.c lst/ft_lstshift.c \
	btree/ft_btreenew.c btree/ft_btreeadd.c btree/ft_btree_apply_prefix.c \
	btree/ft_btree_apply_infix.c btree/ft_btree_apply_suffix.c \
	btree/ft_btreedelone.c \
	printf/ft_conv_buox.c printf/ft_conv_c.c printf/ft_conv_d.c \
	printf/ft_conv_pc.c printf/ft_conv_s.c printf/ft_conv_ubase.c \
	printf/ft_conv_wc.c printf/ft_conv_ws.c printf/ft_createph.c \
	printf/ft_doconv.c printf/ft_doprint.c printf/ft_getph.c \
	printf/ft_numprec.c printf/ft_printf.c printf/ft_puts.c \
	printf/ft_wchar.c printf/ft_width.c printf/ft_error.c \
	gnl/get_next_line.c

OBJS = $(SRCS:%.c=$(DIR_OBJS)/%.o)

DIRS_OBJS= mem str lst is conv put btree printf gnl

all: $(NAME)

$(DIR_OBJS):
	@mkdir -p $(DIR_OBJS)

$(DIRS_OBJS): $(DIR_OBJS)
	@mkdir -p $(DIR_OBJS)/$@

$(OBJS): $(DIR_OBJS)/%.o: $(DIR_SRCS)/%.c
	@gcc -Wall -Wextra -Werror -Iincludes -c $< -o $@

$(NAME): $(DIRS_OBJS) $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "$(NAME) done!"

clean:
	@rm -rf $(DIR_OBJS)
	@echo "objects deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all
