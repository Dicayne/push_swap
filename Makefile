# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/12 16:16:36 by vmoreau           #+#    #+#              #
#    Updated: 2021/04/13 01:43:17 by vmoreau          ###   ########.fr        #
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
CH	= ./Checker/

PS	= ./Push_swap/
################################SOURCES CHECKER################################
SRCS1 += $(CH)main.c	$(CH)store.c

###############################SOURCES PUSH_SWAP###############################
SRCS2 += $(PS)main.c

####################################BASIC######################################

# CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address
CFLAGS = -Wall -Wextra -Werror

CC = clang

INC = Header/

HEADER = $(INC)push_swap.h

OBJ1 = $(SRCS1:.c=.o)

OBJ2 = $(SRCS2:.c=.o)

####################################LIBFT######################################

LIB = ./Libft/

LIBFTLINK = -L$(LIB) -lft
#####################################RULE######################################

all : complib $(NAME1) $(NAME2)

$(NAME1) : echoCC $(OBJ1) echoOK echoCS
	$(CC) $(CFLAGS) -o $@ $(OBJ1) $(LIBFTLINK)

$(NAME2) : echoCPS $(OBJ2) echoOK2 echoCS2
	$(CC) $(CFLAGS) -o $@ $(OBJ2) $(LIBFTLINK)

%.o: %.c $(HEADER)
	$(CC) -c $(CFLAGS) -I $(INC) $< -o $@
	printf "$(GREEN)██"

clean :	echoCLEAN
	$(RM) $(OBJ1)
	$(RM) $(OBJ2)
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