# The compiler
CC =	cc

# Compiler flags
CFLAGS :=	-Wall -Wextra -Werror

# Debugging (DEBUG=1)
ifeq ($(DEBUG), 1)
	CFLAGS		+=	-g3 -O0
endif

# Targets
TARGET =	push_swap
BONUS_TARGET =	checker

# Directories
SRC_DIR =	src/
OBJ_DIR =	obj/
LIB_DIR =	Libft/

# Library
LIB =	$(LIB_DIR)libft.a

# Source files
SRC_FILES += main.c
SRC_FILES += ft_lst_free_all.c
SRC_FILES += ft_lst_incl_val.c
SRC_FILES += ft_lst_last.c
SRC_FILES += ft_lst_new.c
SRC_FILES += ft_lst_new_to_back.c
SRC_FILES += ft_lst_prelast.c
SRC_FILES += ft_lst_sorted.c
SRC_FILES += ft_char_in_str.c
SRC_FILES += ft_chars_in_str.c
SRC_FILES += ft_execute.c
SRC_FILES += ft_fill_stack.c
SRC_FILES += ft_lmt_check.c
SRC_FILES += ft_push.c
SRC_FILES += ft_revrot.c
SRC_FILES += ft_rotate.c
SRC_FILES += ft_set_int.c
SRC_FILES += ft_streq.c
SRC_FILES += ft_streqfr2.c
SRC_FILES += ft_swap.c
SRC_FILES += ft_simpsort.c
SRC_FILES += ft_lst_max.c
SRC_FILES += ft_lst_min.c
SRC_FILES += ft_lst_ival.c
SRC_FILES += ft_lst_len.c
SRC_FILES += ft_lst_vali.c
SRC_FILES += ft_cheapest.c
SRC_FILES += ft_imin.c
SRC_FILES += ft_iex.c
SRC_FILES += ft_lst_bsni.c
SRC_FILES += ft_max.c
SRC_FILES += ft_min.c
SRC_FILES += ft_pushback.c
SRC_FILES += ft_reqmov.c
SRC_FILES += ft_setmov.c
SRC_FILES += ft_sort.c
SRC_FILES += ft_exmov.c
SRC_FILES += ft_quicksort.c
SRC_FILES += ft_rot_a.c
SRC_FILES += ft_rot_b.c

# Object files
OBJ_FILES 		=	$(SRC_FILES:%.c=$(OBJ_DIR)%.o)

# Bonus files
BON_SRC_FILES	=	$(filter-out main.c, $(SRC_FILES)) main_bonus.c
BON_SRC_FILES	+=	ft_get_ops.c
BON_SRC_FILES	+=	get_next_line_bonus.c
BON_SRC_FILES	+=	get_next_line_utils_bonus.c
BON_OBJ_FILES 	=	$(BON_SRC_FILES:%.c=$(OBJ_DIR)%.o)


# Rules
all: $(TARGET)

$(LIB):
	$(MAKE) -C $(LIB_DIR) all

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJ_FILES) $(LIB)
	$(CC) $(OBJ_FILES) -o $(TARGET) $(LIB)

$(BONUS_TARGET): $(BON_OBJ_FILES) $(LIB)
	$(CC) $(BON_OBJ_FILES) -o $(BONUS_TARGET) $(LIB)

clean:
	rm -rf $(OBJ_DIR)
	$(MAKE) -C $(LIB_DIR) clean

fclean: clean
	rm -f $(TARGET) $(BONUS_TARGET)
	$(MAKE) -C $(LIB_DIR) fclean

re: fclean all

bonus: $(BONUS_TARGET)

.PHONY: clean fclean all re bonus