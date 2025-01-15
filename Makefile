NAME			= push_swap

LDIR			= ./lib/
SDIR			= ./src/
IDIR			= ./includes/

FTPRINTF_DIR	= ft_printf/
FTPRINTF		= libftprintf.a

SRC				= push_swap \
					checker
SRCS			= $(addprefix $(SDIR), $(addsuffix .c, $(SRC)))
OBJS			= $(SRCS:.c=.o)


CC				= cc
RM				= rm -f
AR				= ar rc

FLAGS			= -Wall -Wextra -Werror


all:		$(NAME)

$(NAME):	$(OBJS)
			make -C $(LDIR)$(FTPRINTF_DIR)
			$(AR) $(NAME) $(OBJS)

.c.o:
			$(CC) $(FLAGS) -c -I $(IDIR) -I $(LDIR) $< -o $(<:.c=.o)
clean:
			$(RM) $(OBJS)
			make -C $(LDIR)$(FTPRINTF_DIR) clean

fclean:		clean
			$(RM) $(NAME)
			make -C $(LDIR)$(FTPRINTF_DIR) fclean

re:			fclean all

.PHONY:		all clean fclean re