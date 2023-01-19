# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-kame <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 14:49:59 by hel-kame          #+#    #+#              #
#    Updated: 2023/01/19 23:29:49 by hel-kame         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_BONUS = checker

SRC_DIR = ./src

BONUS_DIR = ./bonus

BIN_DIR = ./bin/

SRC =	$(SRC_DIR)/instructions_a.c						\
		$(SRC_DIR)/instructions_b.c						\
		$(SRC_DIR)/instructions_same_time.c				\
		$(SRC_DIR)/init_structure.c						\
		$(SRC_DIR)/check.c								\
		$(SRC_DIR)/find_nb.c							\
		$(SRC_DIR)/sort_cases.c							\
		$(SRC_DIR)/sort_algorithm.c						\
		$(SRC_DIR)/sorted_list.c						\
		$(SRC_DIR)/main.c								\
		$(SRC_DIR)/print_piles.c						\

BONUS_SRC =	$(BONUS_DIR)/main_bonus.c							\
			$(BONUS_DIR)/check_bonus.c							\
			$(BONUS_DIR)/init_structure_bonus.c					\
			$(BONUS_DIR)/instructions_a_bonus.c					\
			$(BONUS_DIR)/instructions_b_bonus.c					\
			$(BONUS_DIR)/instructions_same_time_bonus.c			\
			$(BONUS_DIR)/get_stdin_bonus.c						\
			$(BONUS_DIR)/print_piles_bonus.c					\

OBJ = $(SRC:$(SRC_DIR)/%.c=$(BIN_DIR)%.o)

OBJ_BONUS = $(BONUS_SRC:$(BONUS_DIR)/%.c=$(BIN_DIR)%.o)

LIB_PATH = ./libft

LIB = -Llibft -lft

INCLUDES = ./includes

CFLAGS = -Wall -Werror -Wextra -I$(INCLUDES)

all :	$(BIN_DIR) $(NAME)

bonus :	$(BIN_DIR) $(NAME_BONUS)

$(OBJ) :	 $(BIN_DIR)%.o: $(SRC_DIR)/%.c
		@ $(CC) -I$(INCLUDES) -c $< -o $@

$(OBJ_BONUS) :	 $(BIN_DIR)%.o: $(BONUS_DIR)/%.c
		@ $(CC) -I$(INCLUDES) -c $< -o $@

$(NAME) :	$(BIN_DIR) $(OBJ)
			@ $(MAKE) -s -C $(LIB_PATH)
			@ $(CC) $(CFLAGS) $(OBJ) $(LIB) -o $(NAME)
			@ echo "\e[33m\e[1m\tMake\e[0m [🗿] : \e[1mDone ! ✅"

$(NAME_BONUS) :	$(BIN_DIR) $(OBJ_BONUS)
			@ $(MAKE) -s -C $(LIB_PATH)
			@ $(CC) $(CFLAGS) $(OBJ_BONUS) $(LIB) -o $(NAME_BONUS)
			@ echo "\e[33m\e[1m\tMake\e[0m [🗿] : \e[1mBonus ! 💸"

$(BIN_DIR) :
		@ mkdir -p $(BIN_DIR)

clean :
		@ $(MAKE) -s clean -C $(LIB_PATH)
		@ rm -f $(OBJ)
		@ rm -f $(OBJ_BONUS)
		@ rm -rf $(BIN_DIR)
		@echo "\e[33m\e[1m\tMake\e[0m [🗿] : \e[1mRemove binary files .. 🧹"

fclean : clean
		@ $(MAKE) -s fclean -C $(LIB_PATH)
		@ rm -f $(NAME)
		@ rm -f $(NAME_BONUS)
		@echo "\e[33m\e[1m\tMake\e[0m [🗿] : \e[1mRemove executable .. 🗑️"

re :
	@echo "\e[33m\e[1m\tMake\e[0m [🗿] : \e[1mRecompile .. 🔄"
	@ $(MAKE) -s fclean all

.PHONY: all clean fclean re
