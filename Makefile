SRCS =	ft_printf.c
CC =	cc -Wall -Werror -Wextra
DIRLIB = ./libft
NAME =	libftprintf.a
OBJS =	$(SRCS:.c=.o)

makelib : 
	make -C $(DIRLIB)
	mv libft.a $(NAME)

all : $(NAME) #EXEC

$(NAME): makelib $(OBJS)
	ar -rsc $(NAME) $(OBJS)

#EXEC : main.c
#	$(CC) main.c $(NAME)

%.o : %.c
	$(CC) -c $(SRCS) 



clean :
	rm -f $(OBJS)


fclean : clean
	rm -f $(NAME)

re : fclean all