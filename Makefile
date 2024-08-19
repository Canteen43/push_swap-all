CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
HEADER = ft_printf.h
HEADER2 = Libft/libft.h
LIB = Libft/libft.a
LIBDIR = Libft

SRC_FILES = \
	ft_printf.c

OBJ_FILES = $(SRC_FILES:%.c=%.o)

all: $(LIB) $(NAME)

$(LIB):
	$(MAKE) -C $(LIBDIR)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES) $(LIB)

%.o: %.c $(HEADER) $(HEADER2)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)
	$(MAKE) -C $(LIBDIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBDIR) fclean

re: fclean
	$(MAKE) all

.PHONY: clean fclean all re
