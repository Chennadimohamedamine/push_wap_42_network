FILESOURCE = utils/check.c utils/makeLine.c utils/splitNumber.c \
			stack/stack_function.c  stack/checkSortStack.c  stack/getMaxStack.c stack/stack_utils.c\
			sort/sort3.c sort/sortXX.c sort/moves.c sort/moves2.c sort/sortUtils.c 
FILESOURCEBONUS = stack/stack_function.c stack/checkSortStack.c  stack/getMaxStack.c \
				stack/stack_utils.c sort/moves.c sort/moves2.c utils/check.c \
				utils/makeLine.c utils/splitNumber.c getmove/get_next_line.c getmove/get_next_line_utils.c\

NAME = LibPushSwap.a		
NAMEBONUS = LibPushSwapBonus.a		
OBJECTFILES = $(FILESOURCE:%.c=%.o)
OBJECTFILESBONUS = $(FILESOURCEBONUS:%.c=%.o)
PROGRAM = push_swap
PROGRAMBONUS = checker

all : $(NAME)
	cc -Wall -Wextra -Werror push_swap.c $(NAME)-o $(PROGRAM) 


$(NAME): $(OBJECTFILES)
	ar rcs $(NAME) $(OBJECTFILES)

%.o: %.c push_swap.h
	cc -Wall -Wextra -Werror -o $@ -c $<

bonus :$(NAMEBONUS)
	cc -Wall -Wextra -Werror ./bonus/push_swap_bonus.c $(NAMEBONUS)-o $(PROGRAMBONUS)

$(NAMEBONUS): $(OBJECTFILESBONUS)
	ar rcs $(NAMEBONUS) $(OBJECTFILESBONUS)

%.o: %.c ./bonus/push_swap_bonus.h
	cc -Wall -Wextra -Werror -o $@ -c $<
clean:
	rm -f $(OBJECTFILES) $(NAME)
	rm -f $(OBJECTFILESBONUS) $(NAMEBONUS)

fclean: clean
	rm -f $(NAME) $(PROGRAM)
	rm -f $(NAMEBONUS) $(PROGRAMBONUS)

re: fclean all

.PHONY: all clean fclean re