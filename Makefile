FILESOURCE = mandatory/push_swap.c mandatory/check.c mandatory/makeLine.c mandatory/splitNumber.c \
			mandatory/stack_function.c  mandatory/checkSortStack.c  mandatory/getMaxStack.c mandatory/stack_utils.c\
			mandatory/sort3.c mandatory/sortXX.c mandatory/moves.c mandatory/moves2.c mandatory/sortUtils.c 
FILESOURCEBONUS = bonus/stack_function.c bonus/checkSortStack.c  bonus/getMaxStack.c \
				bonus/stack_utils.c bonus/moves.c bonus/moves2.c bonus/check.c \
				bonus/makeLine.c bonus/push_swap_bonus.c bonus/splitNumber.c  bonus/file_utils.c \
				bonus/get_next_line.c bonus/get_next_line_utils.c \
	
OBJECTFILES = $(FILESOURCE:%.c=%.o)
OBJECTFILESBONUS = $(FILESOURCEBONUS:%.c=%.o)
PROGRAM = push_swap
PROGRAMBONUS = checker

$(PROGRAM): $(OBJECTFILES)
	cc -Wall -Wextra -Werror $(OBJECTFILES) -o $(PROGRAM)


%.o: %.c mandatory/push_swap.h bonus/push_swap_bonus.h
	cc -Wall -Wextra -Werror -o $@ -c $<

all : $(PROGRAM)

bonus : $(OBJECTFILESBONUS)
	cc -Wall -Wextra -Werror $(OBJECTFILESBONUS) -o $(PROGRAMBONUS)

clean:
	rm -f $(OBJECTFILES)
	rm -f $(OBJECTFILESBONUS)

fclean: clean
	rm -f $(PROGRAM)
	rm -f $(PROGRAMBONUS)

re: fclean all

.PHONY: all clean fclean re