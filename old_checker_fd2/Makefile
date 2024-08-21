CC = cc

GNL_DIR = get_next_line

CFLAGS := -Wall -Wextra -Werror -g -I $(GNL_DIR)/

TARGET = checker

SRC_FILES = $(wildcard *.c) $(wildcard $(GNL_DIR)/*.c)

OBJ_FILES = $(SRC_FILES:%.c=%.o)

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	$(CC) $(OBJ_FILES) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(GNL_DIR)/%.o: $(GNL_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(TARGET)

re: fclean
	$(MAKE) all

.PHONY: clean fclean all re debug
