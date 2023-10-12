# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 21:17:31 by lvichi            #+#    #+#              #
#    Updated: 2023/10/12 15:52:31 by lvichi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -fr
FILES = $(filter-out $(wildcard *_bonus.c), $(wildcard *.c))
OBJS = *.o
BONUS_FILES = *_bonus.c
BONUS_OBJS = *_bonus.o

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS): $(FILES)
	$(CC) $(CFLAGS) -c $(FILES)

$(BONUS_OBJS): $(BONUS_FILES)
	$(CC) $(CFLAGS) -c $(BONUS_FILES)

clean:
	$(RM) $(OBJS) 

fclean:
	$(RM) $(OBJS) $(NAME)

re: fclean all

bonus: $(BONUS_OBJS) $(OBJS)
	$(AR) $(NAME) $(OBJS)