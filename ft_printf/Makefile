NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
LIBC = ar rc
LIBR = ranlib
LIBFT = $(LIBFTDIR)/libft.a
LIBFTDIR = ../libft/libft
RM = rm -f
CP = cp
SRCS = ft_range.c \


OBJS = $(SRCS:.c=.o)

all: $(NAME) $(LIBFT)

$(NAME): $(LIBFT) $(OBJS) 
	$(CP) $(LIBFT) $(NAME)
	$(LIBC)	$(NAME) $(OBJS)
	$(LIBR) $(NAME)

$(LIBFT): $(LIBFTDIR)
	@$(MAKE) -C $(LIBFTDIR)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@
clean:
	@$(MAKE) clean -C $(LIBFTDIR)
	$(RM) $(OBJS)

fclean:	clean
	@$(MAKE) fclean -C $(LIBFTDIR)
	$(RM) $(NAME)

re:	fclean all

.PHONY:		all clean fclean re