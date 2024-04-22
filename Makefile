# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/04 03:41:07 by nireher           #+#    #+#              #
#    Updated: 2024/04/22 13:09:05 by nireher          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefiles makes recompiling easier
# Variables are declared with '=' and  rules with ':'

RM 			= rm -f

CC 			= gcc
CFLAGS 		= -Wall -Wextra -Werror

NAME 		= libft.a 
# Output file - The .a extension correponds to archive. it is the extension for static libraries

SRCS 		= ft_isalpha.c\
			ft_isalnum.c\
			ft_isdigit.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_strnstr.c\
			ft_atoi.c\
			ft_calloc.c\
			ft_strdup.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_itoa.c\
			ft_strmapi.c\
			ft_striteri.c\
			ft_split.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\

BSRCS =		ft_lstnew.c\
			ft_lstlast.c\
			ft_lstiter.c\
			ft_lstadd_back.c\
			ft_lstadd_front.c\
			ft_lstclear.c\
			ft_lstdelone.c\
			ft_lstsize.c\
			ft_lstmap.c



OBJS 		= ${SRCS:.c=.o} 
# This variable takes as first instace the source files (.c) and convert them into objects (.o)

BOBJS		= ${BSRCS:.c=.o} 

all:		${NAME} 
# This standard rule initializes the compilation for NAME variable -make all-
	@echo "	"
	@echo "ଘ(੭*ˊᵕˋ)੭* starting the process"
	@echo "	"

# NAME will be both the name of the rule and the binary file that it's going to be generated
${NAME}:	${OBJS} 
# This is a dependency. We tell Makefile that we depend on the objects to execute the compilation
		ar rcs ${NAME} ${OBJS}

bonus:	${OBJS} ${BOBJS}
				ar -rcs ${NAME} ${OBJS} ${BOBJS}

%.o : %.c # Pattern rule
		${CC} -c ${CFLAGS} $< -o ${<:.c=.o} 
# Takes the compiler, execute the flags and compile. It substitutes the .c files for .o
	
clean:
	@echo "	"		
	@echo "( •́ω•̀)♡ cleaning... ${OBJS}"
	@echo "	"
		${RM} ${OBJS} ${BOBJS}
# Remove .o

fclean:		clean
	@echo "	"
	@echo "(╯°□°）╯︵ ┻━┻ ${NAME} removed!"
	@echo "	"
		${RM} ${NAME} 
# Calls clean and also removes the binary name of the executable

re:		fclean all 
	@echo "	"
	@echo "ฅ^•ﻌ•^ฅ rebuild done!"
	@echo "	"
# This rule forces the recompilation, delete the .o and starts a brand new freshy start 

.PHONY:		all clean fclean re

#############################################
#											#
#	target: prerequisites or dependencies	#
#	tab ->  	recipe						#
#											#
#############################################
