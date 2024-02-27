#Compiler
CC = cc
CFLAGS = -Wall -Wextra -Werror

#Files
SRCS = ft_printf.c ft_print_c.c ft_isformat.c ft_vformatting.c \
	ft_print_s.c ft_print_xX.c ft_print_di.c ft_print_u.c ft_print_p.c 
OBJS = $(SRCS:.c=.o)
INCLUDES = ft_printf.h

#Executable
NAME = libftprintf.a

#Rules
all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	ar rcs $(NAME) $(OBJS)

#Names of rule ".c.o" or "%.o : %.c" or "$(SRC_DIR)/%.o: $(SRC_DIR)/%.c"
.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

#Guaranty that 'make' is equivalent to 'make all'
.DEFAULT_GOAL := all
