# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/12 16:16:36 by vmoreau           #+#    #+#              #
#    Updated: 2021/04/22 17:30:29 by vmoreau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = checker
NAME2 = push_swap

####################################COLOR######################################
#----------------reset----------------#
NC = \033[0m

#-----------Regular Colors------------#
BLACK = \033[0;30m
RED = \033[0;31m
GREEN = \033[32m
YELLOW = \033[33;33m
BLUE = \033[0;34m
PURPLE = \033[35m
CYAN = \033[1;36m
WHITE = \033[0;37m

#####################################PATH######################################
CH	= ./srcs/srcs_checker/

BO	= ./srcs/srcs_checker_bo/

PS	= ./srcs/srcs_push_swap/

CO	= ./srcs/srcs_common/

################################COMMON  SOURCES################################

SRCS_COMMON +=  $(CO)store.c	$(CO)store2.c		$(CO)utils.c			\
				$(CO)swap.c		$(CO)push.c			$(CO)rotate.c			\
				$(CO)r_rotate.c

################################CHECKER SOURCES################################
SRCS_CHECKER += $(CH)main.c		$(CH)input_verif.c							\
				$(SRCS_COMMON)

################################BONUS SOURCES################################
SRCS_BONUS	 += $(BO)main.c		$(BO)input_verif.c	$(BO)sdl2.c						\
				$(SRCS_COMMON)

###############################PUSH_SWAP SOURCES###############################
SRCS_P_SWAP  += $(PS)main.c		$(PS)ez_sort.c		$(PS)nm_sort.c			\
				$(PS)big_sort.c	$(PS)sort_utils.c	$(PS)finder.c			\
		 		$(SRCS_COMMON)

####################################BASIC######################################

CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address
# CFLAGS = -Wall -Wextra -Werror

CC = clang

INC = Header/

HEADER = $(INC)push_swap.h

HEADER_BO = $(INC)push_swap_bonus.h

OBJ_CHECKER = $(SRCS_CHECKER:.c=.o)

OBJ_BONUS = $(SRCS_BONUS:.c=.o)

OBJ_P_SWAP = $(SRCS_P_SWAP:.c=.o)

####################################LIBFT######################################

LIB = ./Libft/

LIBFTLINK = -L$(LIB) -lft
#####################################RULE######################################

all : complib $(NAME1) $(NAME2)

$(NAME1) : echoCC $(OBJ_CHECKER) echoOK echoCS
	$(CC) $(CFLAGS) -o $@ $(OBJ_CHECKER) $(LIBFTLINK)

bonus : complib echoCC $(OBJ_BONUS) echoOK echoCS $(NAME2)
	$(CC) $(CFLAGS) -o checker $(OBJ_BONUS) $(LIBFTLINK) -lSDL2 -lSDL2main

$(NAME2) : echoCPS $(OBJ_P_SWAP) echoOK2 echoCS2
	$(CC) $(CFLAGS) -o $@ $(OBJ_P_SWAP) $(LIBFTLINK)

%.o: %.c $(HEADER) $(HEADER_BO)
	$(CC) -c $(CFLAGS) -I $(INC) $< -o $@
	printf "$(GREEN)██"

clean :	echoCLEAN
	$(RM) $(OBJ_CHECKER)
	$(RM) $(OBJ_P_SWAP)
	$(RM) $(OBJ_BONUS)
	$(MAKE) clean -C $(LIB)

fclean : clean echoFCLEAN
	$(RM) $(NAME1)
	$(RM) $(NAME2)
	$(RM) $(LIB)libft.a
	$(MAKE) echoFCLEAN -C $(LIB)


re : fclean all

complib :
	$(MAKE) -C $(LIB)

####################################ECHO######################################

echoCC:
	echo "$(YELLOW)===> Compiling Checker$(NC)"
echoCPS:
	echo "$(YELLOW)===> Compiling Push_Swap$(NC)"
echoOK:
	echo "$(GREEN)OK$(NC)"
echoCS :
	echo "$(GREEN)===> Compilation Success$(NC)"
echoOK2:
	echo "$(GREEN)OK$(NC)"
echoCS2 :
	echo "$(GREEN)===> Compilation Success$(NC)"
echoCLEAN :
	echo "$(PURPLE)===> Cleanning OBJ$(NC)"
echoFCLEAN :
	echo "$(PURPLE)===> Cleanning Execs$(NC)"


.PHONY : all clean fclean re

.SILENT :
