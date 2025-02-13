# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irobinso <irobinso@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/12 16:28:14 by irobinso          #+#    #+#              #
#    Updated: 2024/10/22 13:26:54 by irobinso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFTNAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
LIBFTDIR = ./libft

SRCS = 	ft_printf.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_putunbr.c \
		ft_putptr.c \
		ft_putchar.c \
		ft_putnbrbasehex.c

OBJS = $(SRCS:.c=.o)

# Ensure the library is made before anything else
all: makelibft $(NAME)

makelibft:
	@make -C $(LIBFTDIR) CFLAGS="$(CFLAGS)"
	@cp $(LIBFTDIR)/$(LIBFTNAME) .

# Compile the library and link the object files
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

# Pattern rule for building object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)
	@cd $(LIBFTDIR) && make clean

fclean: clean
	@$(RM) $(NAME)
	@cd $(LIBFTDIR) && make fclean

re: fclean all

.PHONY: all clean fclean re
.SILENT:
