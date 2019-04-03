##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Build Bin
##

NAME	=	my_cook

CC	=	gcc

BASICS	=	sources/basics/main.c			\
		sources/basics/game_loop.c		\
		sources/basics/destroy.c		\
		sources/basics/commands.c		\
		sources/basics/stats.c			\
		sources/basics/stats_unit.c		\

TEXTURE	=	sources/texture/texture.c		\
		sources/texture/texture_menu.c		\
		sources/texture/texture_menu_text.c		\
		sources/texture/texture_pause.c		\
		sources/texture/texture_option.c		\
		sources/texture/texture_option_cheat.c		\
		sources/texture/texture_game.c		\
		sources/texture/texture_game_set.c		\
		sources/texture/texture_game_menu.c		\
		sources/texture/texture_game_life.c		\
		sources/texture/texture_game_entity.c	\
		sources/texture/texture_end.c		\

EVENT	=	sources/event/event.c			\
		sources/event/event_menu.c			\
		sources/event/event_pause.c			\
		sources/event/event_option.c			\
		sources/event/event_option_sound.c		\
		sources/event/event_option_cheat.c		\
		sources/event/event_game.c			\
		sources/event/event_game_menu.c		\
		sources/event/event_game_moved_menu.c		\
		sources/event/event_game_menu_part_one.c		\
		sources/event/event_game_menu_part_two.c	\
		sources/event/event_game_moved_part_one.c	\
		sources/event/event_game_moved_part_two.c	\
		sources/event/event_game_next_part_one.c	\
		sources/event/event_game_next_part_two.c	\
		sources/event/event_game_entity.c		\
		sources/event/event_end.c			\

GAME	=	sources/game/game.c			\
		sources/game/gold_and_time.c		\
		sources/game/price_overlay.c		\
		sources/game/color_timer.c		\
		sources/game/display_price.c		\
		sources/game/display_price_moved.c	\
		sources/game/display_life.c		\
		sources/game/monster.c			\
		sources/game/monster_two.c		\
		sources/game/monster_three.c		\
		sources/game/monster_four.c		\

MENU	=	sources/menu/menu.c			\

OPTION	=	sources/option/option.c			\

PAUSE	=	sources/freeze/freeze.c			\

END	=	sources/end/end.c			\

OBJ	=	$(BASICS:.c=.o) $(TEXTURE:.c=.o) $(EVENT:.c=.o) $(GAME:.c=.o) $(MENU:.c=.o) $(OPTION:.c=.o) $(PAUSE:.c=.o) $(END:.c=.o)

CFLAGS	+=	-W -Wall -Wextra -g

LDFLAGS	+=	-lm -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -Iinclude

all:	$(NAME)

$(NAME):	$(OBJ)
	@$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f *~
	@rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
