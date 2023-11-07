# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sajaite <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 13:46:03 by sajaite           #+#    #+#              #
#    Updated: 2023/11/07 16:24:35 by sajaite          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#DECLAIRING VARIABLES
NAME    = libft.a
SRCS    = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
          ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
          ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
          ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
          ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
          ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
          ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
          ft_toupper.c
SRCS_BONUS  = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
          ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
OBJS    = $(SRCS:.c=.o)
OBJS_BONUS  = $(SRCS_BONUS:.c=.o)
RM      = rm -f
LIBC    = ar -rcs
CC = cc
FLAGS   = -Wall -Wextra -Werror
#include header file, search for it in the current directory (.)
INCS    = -I.
# DECLAIRING RULES :
all: $(NAME)
.c.o:
	$(CC) $(FLAGS) -c $< -o $@ $(INCS)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

bonus: $(NAME) $(OBJS_BONUS)
	$(LIBC) $(NAME) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) -f $(OBJS) $(OBJS_BONUS)

re: fclean all

.PHONY: all bonus clean fclean re

