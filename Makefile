NAME	=	libft.a
SRCS	=	ft_atoi.c \
	  ft_bzero.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memset.c \
	  ft_putchar_fd.c \
	  ft_strlcat.c \
	  ft_strchr.c \
	  ft_strlcpy.c \
	  ft_strlen.c \
	  ft_strrchr.c \
	  ft_strnstr.c \
	  ft_strncmp.c \
	  ft_strdup.c \
	  ft_calloc.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_memmove.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_split.c \
	  ft_itoa.c \
	  ft_putstr_fd.c \
	  ft_strmapi.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_striteri.c \

BONUS			=	ft_lstadd_back.c \
					ft_lstadd_front.c \
					ft_lstclear.c \
					ft_lstdelone.c \
					ft_lstiter.c \
					 ft_lstlast.c \
					ft_lstnew.c \
					ft_lstsize.c\

BONUS_OBJS		= $(BONUS:.c=.o)

OBJS = $(SRCS:.c=.o)

CC	=	gcc
RM	=	rm -rf

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC}	${CFlAGS} -I libft.h -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}
	@echo libft is compiled with Succes

all: ${NAME}

clean: 
	${RM} ${OBJS} $(BONUS_OBJS)

fclean: clean
	${RM} ${NAME}

re: fclean all

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	@echo libft is compiled with Bonus

.PHONY : all clean fclean re bonus
