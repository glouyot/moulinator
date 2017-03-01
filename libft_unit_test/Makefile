# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glouyot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/01 11:07:56 by glouyot           #+#    #+#              #
#    Updated: 2017/03/01 13:09:26 by glouyot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft_unit_test.bin

INCLUDES := -I../framework/ -I. -I../../libft/inc
INC := libft_unit_test.h
 
FRAMEWORK_PATH := ../framework
FRAMEWORK_NAME := libunit.a

FLAGS := -Wall -Wextra -Werror

ARGS := ./libft/libft.a

OBJECTS :=	main.o\
			atoi/00_launcher.o\
			atoi/01_atoi_basic_1.c\
			atoi/02_atoi_basic_2.c\
			atoi/03_atoi_min.c\
			atoi/04_atoi_max.c\
			atoi/05_atoi_out.c\
			atoi/06_atoi_thousand.c\
			atoi/07_atoi_space.c\
			atoi/08_atoi_letter.c

ifneq ($(shell make -q -C $(FRAMEWORK_PATH); echo $$?), 0)
.PHONY: $(FRAMEWORK_PATH)/$(FRAMEWORK_NAME)
endif

ifneq ($(shell make -q -C libft; echo $$?), 0)
.PHONY: libft/libft.a
endif

.PHONY: all test clean fclean re

all: $(NAME)

libft/libft.a:
	make -C libft

$(FRAMEWORK_PATH)/$(FRAMEWORK_NAME):
	make -C $(FRAMEWORK_PATH)

%.o: %.c $(INC)
	gcc $(FLAGS) $(INCLUDES) -c $< -o $@

test: $(NAME)
	./$(NAME)

$(NAME): $(FRAMEWORK_PATH)/$(FRAMEWORK_NAME) $(ARGS) $(OBJECTS) $(INC)
	gcc $(OBJECTS) $(FRAMEWORK_PATH)/$(FRAMEWORK_NAME) $(ARGS) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
