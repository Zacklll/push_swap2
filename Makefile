# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 21:33:31 by zael-wad          #+#    #+#              #
#    Updated: 2023/01/20 21:38:04 by zael-wad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME= push_swap
SRC =  ft_lstadd_back.c ft_lstadd_front.c ft_lstnew.c ft_lstsize.c sort_3.c\
		ft_split.c push_a.c push_b.c push_swap.c revers_rotate_rra.c revers_rotate_rrb.c \
		rotate_ra.c rotate_rb.c rotate_rr.c rotate_rrr.c swap_sa.c swap_sb.c \
		sort_five.c sorting.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cc -Wall -Wextra -Werror push_swap.c push_swap -o push_swap.a

clean:
	rm $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all