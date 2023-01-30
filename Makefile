# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 21:33:31 by zael-wad          #+#    #+#              #
#    Updated: 2023/01/30 11:55:36 by zael-wad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME= push
SRC =   push_swap_utils.c push_swap_utils1.c push_swap_utils2.c sort_3.c ft_printf/funcs1.c ft_printf/funcs2.c \
		ft_printf/ft_check.c ft_printf/ft_printf.c ft_split.c push_a.c push_b.c push_swap.c revers_rotate_rra.c \
		revers_rotate_rrb.c rotate_ra.c rotate_rb.c rotate_rr.c rotate_rrr.c swap_sa.c swap_sb.c sort_five.c \
		sorting.c sort.c push_swap_utils3.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ) 
	cc  -Wall -Wextra -Werror push_swap.c $(NAME) -o push_swap -fsanitize=address

clean:
	rm $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all