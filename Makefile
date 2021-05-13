##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Evalexpr Makefile
##

SRC	=	src/main.c	\
		src/is_clicked.c	\
		src/defender.c	\
		main/event_main.c	\
		main/main_screen.c	\
		main/players_button.c	\
		main/tutorial.c	\
		src/sprite.c	\
		src/sprite_2.c	\
		src/game_loop.c	\
		src/file.c	\
		src/enemies.c	\
		src/coins.c	\
		src/node.c	\
		src/event.c	\
		src/buttons_select.c	\
		src/animation.c	\
		src/tower.c	\
		src/tower_placer.c	\
		src/print_towers.c	\
		src/tower_seller.c	\
		src/increase_coins.c	\
		src/life.c	\
		src/font.c	\
		src/game_over.c	\
		src/attack.c	\
		src/tower_attack.c	\
		src/enemy_debuffer.c	\
		src/pause.c	\
		src/win.c	\
		src/sound.c	\
		src/sound_2.c	\
		src/effects.c	\

LIB	=	lib/my/*.c

NAME	=	my_defender

LNAME	=	libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
		cd lib/my/ && gcc -c *.c && ar rc $(LNAME) *.o
		cp lib/my/$(LNAME) lib/
		gcc -g3 -o $(NAME) $(SRC) -Llib/ -lmy -Iinclude/ -l csfml-graphics -l csfml-system -l csfml-window -l csfml-audio
		cd lib/my/ && rm -f *.o
		$(clean)

clean:
		cd lib/my/ && rm -f *.o
		rm -f *~
		rm -f *#
		cd lib/my/ && rm -f *~

fclean: clean
		rm -f $(NAME)
		rm -f lib/$(LNAME)
		rm -f lib/my/$(LNAME)
		rm -f vg*

re: fclean all