CC = cc
CFLAGS = -Wall -Wextra -Werror


RM = rm -rf

NAME = libft.a

LIBC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
		ft_toupper.c ft_tolower.c ft_atoi.c ft_strlcpy.c ft_strlcat.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_strdup.c ft_strnstr.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_memcmp.c ft_calloc.c

ADDITIONAL = ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_strmapi.c \
		ft_striteri.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

SRCS = ${LIBC} ${ADDITIONAL}
OBJS = ${SRCS:.c=.o}

SRCS_ALL = ${LIBC} ${ADDITIONAL} ${BONUS}
OBJS_ALL = ${SRCS_ALL:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: ${OBJS_ALL}
	ar rcs $(NAME) $(OBJS_ALL)

%.o: %.c
		$(CC) $(CFLAGS) -I includes/ -c $< -o $(<:.c=.o)

clean:
	$(RM) $(OBJS_ALL)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
