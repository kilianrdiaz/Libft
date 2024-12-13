# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/23 19:13:47 by kroyo-di          #+#    #+#              #
#    Updated: 2024/11/27 22:13:42 by kroyo-di         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_memset.c ft_bzero.c ft_strlen.c ft_atoi.c ft_isdigit.c ft_isalpha.c\
       ft_isprint.c ft_isascii.c ft_isalnum.c ft_memchr.c ft_memcpy.c ft_strtrim.c\
       ft_memcmp.c ft_memmove.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c\
       ft_strncmp.c ft_toupper.c ft_tolower.c ft_strnstr.c ft_strrchr.c ft_calloc.c\
       ft_substr.c  ft_strjoin.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
       ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_max.c ft_min.c\
	   ft_atol.c get_next_line/get_next_line_bonus.c
INC = libft.h
FT_PRINTF_DIR = ft_printf
FT_PRINTF = $(FT_PRINTF_DIR)/libftprint.a
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra

all: $(FT_PRINTF) $(NAME)

$(FT_PRINTF):
	@$(MAKE) -C $(FT_PRINTF_DIR)

$(NAME) : $(OBJS) $(FT_PRINTF) $(INC) Makefile
	ar rcs $(NAME) $(OBJS)

%.o : %.c libft.h
	gcc $(CFLAGS) -c $< -o $@

clean:
	@$(MAKE) clean -C $(FT_PRINTF_DIR)
	rm -f $(OBJS)
	
fclean: clean
	@$(MAKE) fclean -C $(FT_PRINTF_DIR)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
