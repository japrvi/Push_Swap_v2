SRCS	=	$(wildcard *.c)
OBJS	=	$(SRCS:.c=.o)
CC		=	clang
RM		=	rm -rf
CFLAGS	=	-Wall -Werror -Wextra -fsanitize=address
NAME	=	push_swap

all:	$(NAME)

clean:
		@$(RM) $(OBJS)

fclean:	clean
		@$(RM) $(NAME)

%.o:	%.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

re: fclean all

.PHONY: all clean fclean re
