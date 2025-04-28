# Makefile: NAME, all, clean, fclean, re
# Your Makefile must at contain at least the rules $(NAME), all, clean, fclean and re.
# If the subject requires it, you must submit a Makefile that compiles your source
# files to the required output with the flags -Wall, -Wextra, and -Werror, using cc.
# Additionally, your Makefile must not perform unnecessary relinking.

# To submit bonuses for your project, you must include a bonus rule in your Makefile,
# which will add all the various headers, libraries, or functions that are not allowed in
# the main part of the project. Bonuses must be placed in _bonus.{c/h} files, unless
# the subject specifies otherwise. The evaluation of mandatory and bonus parts is
# conducted separately

# If your project allows you to use your libft, you must copy its sources and its
# associated Makefile into a libft folder. Your project’s Makefile must compile
# the library by using its Makefile, then compile the project.

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar
ARFLAGS = rcs

SRCS := ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_isprint.c ft_strlen.c ft_memset.c \
		ft_bzero.c ft_memcpy.c ft_memmove.c ft_tolower.c ft_toupper.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_atoi.c ft_strlcpy.c \
		ft_strlcat.c

OBJS := $(SRCS:.c=.o)

# BONUS_SRCS = blah.c
# BONUS_OBJS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c libft.h
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
