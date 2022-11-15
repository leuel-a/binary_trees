# -*- MakeFile -*-
#
# Constants
# ====================================================
CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89
SRC = 0-binary_tree_node.c binary_tree_print.c 1-binary_tree_insert_left.c 2-binary_tree_insert_right.c \
	  3-binary_tree_delete.c 4-binary_tree_is_leaf.c 5-binary_tree_is_root.c 6-binary_tree_preorder.c \
	  7-binary_tree_inorder.c 8-binary_tree_postorder.c 9-binary_tree_height.c main.c
OBJ = $(SRC:.c=.o)
NAME = a
RM = rm

# Rules
# ====================================================
all: $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

.PHONY: clean oclean fclean re

clean:
	$(RM) -f *~ $(NAME)

oclean:
	$(RM) -f $(OBJ)

fclean: clean oclean

re: oclean all
