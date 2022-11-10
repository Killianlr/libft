NAME = libft.a

SOURCES = main.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \

OBJECTS = $(SOURCES:.c=.o)

CFLAGS += -Wall -Werror -Wextra -fsanitize=address

$(NAME): $(OBJECTS)
	gcc $(CFLAGS) $(OBJECTS)
	ar -cr $(NAME) $(OBJECTS)

all: $(NAME)

clean: 
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all