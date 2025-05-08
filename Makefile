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
		ft_strlcat.c ft_strnstr.c ft_memchr.c ft_memcmp.c ft_calloc.c \
		ft_strdup.c ft_substr.c ft_strjoin.c ft_itoa.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strtrim.c \
		ft_strmapi.c

OBJS := $(SRCS:%.c=%.o) # or change it to: OBJS := $(SRCS:%.c=obj/%.o)

#BONUS_SRCS = blah.c
#BONUS_OBJS = $(BONUS_SRCS:%.c=%.o) # and this to: BONUS_OBJS = $(BONUS_SRCS:%.c=obj/%.o)

all: $(NAME)


$(NAME): $(OBJS) # and this to: $(NAME): mkdir $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

#bonus: $(OBJS) $(BONUS_OBJS)
#	$(AR) $(ARFLAGS) $(NAME) $(OBJS) $(BONUS_OBJS)

#mkdir:
#	mkdir -p obj

%.o: %.c libft.h # and change this to: obj/%.o: %.c libft.h
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
