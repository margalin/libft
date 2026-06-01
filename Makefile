NAME = libft.a

CC = gcc # compilador
CCFLAGS = -Wall -Wextra -Werror #flags
RM = rm -rf # borrar


MY_SOURCES =ft_isdigit.c\
						ft_isalnum.c\
						ft_isalpha.c\
						ft_isascii.c\
						ft_isprint.c\
						ft_strlen.c\
						ft_memset.c\
						ft_bzero.c\
						ft_memcpy.c\
						ft_memmove.c\
						ft_strlcpy.c\
						ft_strlcat.c\
						ft_toupper.c\
						ft_tolower.c\
						ft_strchr.c\
						ft_strncmp.c\
						ft_strrchr.c\
						ft_memchr.c
OBJS = $(MY_SOURCES:.c=.o) # una variable cuya dependencia es convertir los . c en .o

$(NAME) : $(OBJS)
	ar crs $(NAME) $(OBJS) # crear el ejecutable

all: $(NAME)

%.o : %.c libft.h
	@$(CC) $(CCFLAGS) -c -o $@ $< # indicadores
clean:
	@$(RM) $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: fclean all # limpiar y recompilar todo
.PHONY: all clean fclean re