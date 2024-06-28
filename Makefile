SRCS =	ft_printf.c ft_put.c ft_puthexa.c
CC =	cc -Wall -Werror -Wextra
DIRLIB = ./libft
INCLUDE = ./include
NAME =	libftprintf.a
OBJS =	$(SRCS:.c=.o)

all : $(NAME) #EXEC

$(NAME): $(OBJS)
	make -C $(DIRLIB)
	cp $(DIRLIB)/libft.a $(NAME)
	ar -rc $(NAME) $(OBJS)

#EXEC : main.c
#	$(CC) main.c $(NAME)

%.o : %.c
	$(CC) -c $(SRCS) 



clean :
	make clean -C $(DIRLIB)
	rm -f $(OBJS)


fclean : clean
	rm -f $(NAME) a.out

re : fclean all