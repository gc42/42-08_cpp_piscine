# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcaron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 17:36:19 by gcaron            #+#    #+#              #
#    Updated: 2018/03/27 21:16:39 by gcaron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook

DSRC		=	./

DIR_INCL	=	./

SRC			=	$(DSRC)Card3.class.cpp \
				$(DSRC)main.cpp


OBJ			=	$(SRC:.cpp=.o)

CC			=	clang++

##CFLAGS		=	
CFLAGS		=	-Wall -Werror -Wextra -Wno-unused

RM			=	rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
			$(CC) $(CFLAGS) -o $@ -c $<

help:
	@echo "Cibles disponibles : all, clean, fclean, re, help"

.PHONY: clean fclean			## les dependances de la cible .PHONY
								## sont systematiquement reconstruites

clean:
			$(RM) $(OBJ)		## supprime les fichiers .o
			$(RM) *.o

fclean:		clean
			$(RM) $(NAME)		## supprime aussi l'executable (ici megaphone)

re:			fclean all
