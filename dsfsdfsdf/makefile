NAME = libft.a
CFALGS = -Wall -Wextra -Werror 
CC = cc
RM = rm -rf
AR = ar -rcs

FILE = ft_bzero.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_strlen.c \
ft_tolower.c \
ft_toupper.c \
ft_strlcpy.c 

OBJ = $(FILE:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
	@echo "\033[32m✓ built completed\033[0m"
clean:
	@$(RM) $(OBJ)
	@echo "\033[1;33m✓ objects removed\033[0m"

fclean: clean
	@$(RM) $(NAME)
	@echo "\033[31m✓ library removed\033[0m --> $(NAME)"

re: fclean all

.PHONY: all clean fclean re
