NAME = libft.a

CC = cc

LIBCC = ar rcs

CFLAGS = -Werror -Wextra -Wall

RM = rm -f

SRCS = 	ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_split.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_striteri.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strmapi.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strtrim.c\
		ft_substr.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_lstadd_back.c\
		ft_lstadd_front.c\
		ft_lstclear.c\
		ft_lstdelone.c\
		ft_lstiter.c\
		ft_lstlast.c\
		ft_lstmap.c\
		ft_lstnew.c\
		ft_lstsize.c\
		get_next_line.c\
		printf.c\
		print_alpha.c\
		print_digit.c\
		print_unsigned.c

SRCDIR = srcs/

SRCS_PRE = $(addprefix $(SRCDIR), $(SRCS))

OBJS = $(SRCS_PRE:.c=.o)

%.o:%.c 
	${CC} ${CFLAGS} -c $< -o $@

all:	${NAME}

${NAME}:	${OBJS}
		${LIBCC} ${NAME} ${OBJS}

clean:
		${RM} ${OBJS} ${OBJSB}

fclean: clean
		${RM} ${NAME}

re:		fclean all

bonus: ${OBJSB}
		${LIBCC} ${NAME} ${OBJSB}

.PHONY: all clean fclean re bonus