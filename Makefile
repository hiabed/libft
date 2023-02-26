# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhassani <mhassani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 13:57:27 by mhassani          #+#    #+#              #
#    Updated: 2023/02/25 18:19:51 by mhassani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFILES = ft_atoi.c\
		ft_bzero.c\
        ft_calloc.c\
        ft_substr.c\
        ft_isalnum.c\
        ft_isalpha.c\
        ft_isascii.c\
        ft_isdigit.c\
        ft_isprint.c\
        ft_itoa.c\
        ft_memchr.c\
        ft_memcmp.c\
        ft_memcpy.c\
        ft_memmove.c\
        ft_memset.c\
        ft_putchar_fd.c\
        ft_putendl_fd.c\
        ft_putnbr_fd.c\
        ft_putstr_fd.c\
        ft_split.c\
        ft_strchr.c\
        ft_strdup.c\
        ft_striteri.c\
        ft_strjoin.c\
        ft_strlcat.c\
        ft_strlcpy.c\
        ft_strlen.c\
        ft_strmapi.c\
        ft_strncmp.c\
        ft_strnstr.c\
        ft_strrchr.c\
        ft_strtrim.c\
        ft_tolower.c\
        ft_toupper.c\

CFILES_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJ = ${CFILES:.c=.o}
OBJ_BONUS = ${CFILES_BONUS:.c=.o}
CFLAGS = -Wall -Werror -Wextra
CC = cc
LI = ar -r
HEAD = libft.h

${NAME} : ${OBJ} ${OBJ_BONUS}
	${LI} ${NAME} ${OBJ}

all : ${NAME}

bonus : ${OBJ} ${OBJ_BONUS}
	${LI} ${NAME} ${OBJ} ${OBJ_BONUS}

clean :
	${RM} ${OBJ} ${OBJ_BONUS}

fclean : clean
	${RM} ${NAME}

re : fclean all