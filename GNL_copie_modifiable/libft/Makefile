NAME= libft.a
SRCS= ft_lstadd.c ft_lstmap.c ft_lstiter.c ft_lstdel.c ft_lstnew.c ft_lstdelone.c ft_strlcat.c ft_strsplit.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_putnbr.c ft_putendl.c ft_itoa.c ft_strtrim.c ft_strjoin.c ft_strsub.c ft_strnequ.c ft_strequ.c ft_strmapi.c ft_strmap.c ft_striter.c ft_strclr.c ft_strdel.c ft_atoi.c ft_memcpy.c ft_striteri.c ft_strncmp.c ft_bzero.c ft_memmove.c ft_strncpy.c ft_isalnum.c ft_memset.c ft_strnstr.c ft_isalpha.c ft_strcat.c ft_strrchr.c ft_isascii.c ft_strchr.c ft_strstr.c ft_isdigit.c ft_strcmp.c ft_tolower.c ft_isprint.c ft_strcpy.c ft_toupper.c ft_memccpy.c ft_strdup.c ft_memchr.c ft_strlen.c ft_memcmp.c ft_strncat.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_putchar.c ft_putstr.c
HEADERS= libft.h
OBJECT= ft_strdel.o ft_lstadd.o ft_lstmap.o ft_lstdel.o ft_strlcat.o ft_lstnew.o ft_lstdelone.o ft_strsplit.o ft_lstiter.o ft_putnbr_fd.o ft_putendl_fd.o ft_putstr_fd.o ft_putchar_fd.o ft_putnbr.o ft_putendl.o ft_itoa.o ft_strtrim.o ft_strjoin.o ft_strsub.o ft_strnequ.o ft_strequ.o ft_strmapi.o ft_strmap.o ft_striter.o ft_strclr.o ft_atoi.o ft_memcpy.o ft_strncmp.o ft_striteri.o ft_bzero.o ft_memmove.o ft_strncpy.o ft_isalnum.o ft_memset.o ft_strnstr.o ft_isalpha.o ft_strcat.o ft_strrchr.o ft_isascii.o ft_strchr.o ft_strstr.o ft_isdigit.o ft_strcmp.o ft_tolower.o ft_isprint.o ft_strcpy.o ft_toupper.o ft_memccpy.o ft_memalloc.o ft_memdel.o ft_strnew.o ft_putchar.o ft_putstr.o ft_strdup.o ft_memchr.o ft_strlen.o ft_memcmp.o ft_strncat.o

all : $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRCS) $(HEADER)
	ar -rc libft.a $(OBJECT)

clean :
	rm -f $(OBJECT)

fclean : clean
	rm -f libft.a

re : fclean all
