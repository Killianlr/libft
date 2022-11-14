NAME = libft.a

SOURCES = ft_isalpha.c \
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
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \

SOURCES_BONUS = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	main_bonus.c \

OBJECTS = $(SOURCES:.c=.o)

OBJECTS_BONUS = $(SOURCES_BONUS:.c=.o)

CFLAGS += 

$(NAME): $(OBJECTS)
	gcc $(CFLAGS) -c $(OBJECTS)
	ar -cr $(NAME) $(OBJECTS)

all: $(NAME)

clean: 
	rm -f $(OBJECTS)
	rm -f $(OBJECTS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus : $(OBJECTS_BONUS)
	gcc $(CFLAGS) $(OBJECTS_BONUS)
	ar -r $(NAME) $(OBJECTS_BONUS)