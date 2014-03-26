#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/01/30 16:11:54 by grass-kw          #+#    #+#              #
#    Updated: 2014/02/26 18:04:32 by grass-kw         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = cc

NAME = eval_expr.a

NAME2 = eval_expr

HEAD = ./libft

TEST = test

LIB = ./libft/libft.a

SRC = eval_expr.c ft_btree_add.c tools_lst.c ft_btree_create_node.c \
	ft_print_btree.c eval_expr.c tools.c isnumber.c init_btree.c

OBJ = $(SRC:.c=.o)

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	make -C $(HEAD)
	$(CC) -Wall -Werror -Wextra main.c $(NAME) $(LIB) -o $(NAME2)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) $(NAME2) $(NAME2).dSYM $(TEST) $(TEST).dSYM
re : fclean all

gdb: $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	make -C $(HEAD)
	$(CC) -Wall -Werror -Wextra -g main.c $(NAME) $(LIB) -o $(NAME2)
	gdb $(NAME2)

exe: $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	make -C $(HEAD)
	$(CC) -Wall -Werror -Wextra main.c $(NAME) $(LIB) -o $(NAME2)
	./$(NAME2)

test: $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	make -C $(HEAD)
	$(CC) -g -Wall -Werror -Wextra $(TEST).c $(NAME) $(LIB) -o $(TEST)
	./$(TEST)

.PHONY: all clean fclean gdb exe
