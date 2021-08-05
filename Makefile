NAME = so_long
NAME_BONUS = so_long_bonus

LIB = 	srcs/lib/ft_strstr.c \
		srcs/lib/ft_strcmp.c \
		srcs/lib/get_next_line.c \
		srcs/lib/ft_strlen.c \
		srcs/lib/ft_strlcpy.c

UTILS = srcs/utils/ft_clean.c \
		srcs/utils/ft_error.c \
		srcs/utils/ft_struct_init.c

PARSER = 	srcs/parser/ft_parser.c \
			srcs/parser/ft_parse_line.c \
			srcs/parser/ft_parse_ends.c \
			srcs/parser/ft_parse_middle.c \
			srcs/parser/ft_parse_specials.c

MAP = 	srcs/game/map/ft_struct_init_map.c \
		srcs/game/map/ft_is_map.c \
		srcs/game/map/ft_load_floor_texture.c \
		srcs/game/map/ft_load_map.c \
		srcs/game/map/ft_load_wall_texture.c \
		srcs/game/map/ft_print_map.c

COLLECTIBLE = 	srcs/game/collectible/ft_is_collectible.c \
				srcs/game/collectible/ft_load_collectible_texture.c \
				srcs/game/collectible/ft_print_collectible.c \
				srcs/game/collectible/ft_struct_init_collectible.c

EXIT = 	srcs/game/exit/ft_is_exit.c \
		srcs/game/exit/ft_load_exit_texture.c \
		srcs/game/exit/ft_print_exit.c \
		srcs/game/exit/ft_struct_init_exit.c

PLAYER = 	srcs/game/player/ft_is_player.c \
			srcs/game/player/ft_load_player_texture.c \
			srcs/game/player/ft_move_down.c \
			srcs/game/player/ft_move_left.c \
			srcs/game/player/ft_move_player.c \
			srcs/game/player/ft_move_right.c \
			srcs/game/player/ft_move_up.c \
			srcs/game/player/ft_print_player.c \
			srcs/game/player/ft_struct_init_player.c

GAME = 	${COLLECTIBLE} \
		${EXIT} \
		${MAP} \
		${PLAYER} \
		srcs/game/ft_cross.c \
		srcs/game/ft_exit_game.c \
		srcs/game/ft_frame.c \
		srcs/game/ft_game.c \
		srcs/game/ft_keypress.c

SRCS = 	srcs/main.c \
		${UTILS} \
		${LIB} \
		${PARSER} \
		${GAME}

LIB_BONUS = srcs_bonus/lib/ft_strstr.c \
			srcs_bonus/lib/ft_strcmp.c \
			srcs_bonus/lib/get_next_line.c \
			srcs_bonus/lib/ft_strlen.c \
			srcs_bonus/lib/ft_strlcpy.c \
			srcs_bonus/lib/ft_itoa.c \
			srcs_bonus/lib/ft_strdup.c \
			srcs_bonus/lib/ft_nbrlen.c

UTILS_BONUS = 	srcs_bonus/utils/ft_clean.c \
				srcs_bonus/utils/ft_error.c \
				srcs_bonus/utils/ft_struct_init.c \
				srcs_bonus/utils/ft_create_trgb.c

PARSER_BONUS = 	srcs_bonus/parser/ft_parser.c \
				srcs_bonus/parser/ft_parse_line.c \
				srcs_bonus/parser/ft_parse_ends.c \
				srcs_bonus/parser/ft_parse_middle.c \
				srcs_bonus/parser/ft_parse_specials.c

MAP_BONUS = srcs_bonus/game/map/ft_struct_init_map.c \
			srcs_bonus/game/map/ft_is_map.c \
			srcs_bonus/game/map/ft_load_floor_texture.c \
			srcs_bonus/game/map/ft_load_map.c \
			srcs_bonus/game/map/ft_load_wall_texture.c \
			srcs_bonus/game/map/ft_print_map.c

COLLECTIBLE_BONUS = srcs_bonus/game/collectible/ft_is_collectible.c \
					srcs_bonus/game/collectible/ft_load_collectible_texture.c \
					srcs_bonus/game/collectible/ft_print_collectible.c \
					srcs_bonus/game/collectible/ft_struct_init_collectible.c

EXIT_BONUS = 	srcs_bonus/game/exit/ft_is_exit.c \
				srcs_bonus/game/exit/ft_load_exit_texture.c \
				srcs_bonus/game/exit/ft_print_exit.c \
				srcs_bonus/game/exit/ft_struct_init_exit.c

PLAYER_BONUS = 	srcs_bonus/game/player/ft_is_player.c \
				srcs_bonus/game/player/ft_load_player_texture.c \
				srcs_bonus/game/player/ft_move_down.c \
				srcs_bonus/game/player/ft_move_left.c \
				srcs_bonus/game/player/ft_move_player.c \
				srcs_bonus/game/player/ft_move_right.c \
				srcs_bonus/game/player/ft_move_up.c \
				srcs_bonus/game/player/ft_print_player.c \
				srcs_bonus/game/player/ft_struct_init_player.c

ENEMY_BONUS =	srcs_bonus/game/enemy/ft_is_enemy.c \
				srcs_bonus/game/enemy/ft_struct_init_enemy.c \
				srcs_bonus/game/enemy/ft_print_enemy.c \
				srcs_bonus/game/enemy/ft_load_enemy_texture.c \
				srcs_bonus/game/enemy/ft_move_enemy.c

GAME_BONUS = 	${COLLECTIBLE_BONUS} \
				${EXIT_BONUS} \
				${MAP_BONUS} \
				${PLAYER_BONUS} \
				${ENEMY_BONUS} \
				srcs_bonus/game/ft_cross.c \
				srcs_bonus/game/ft_exit_game.c \
				srcs_bonus/game/ft_frame.c \
				srcs_bonus/game/ft_game.c \
				srcs_bonus/game/ft_keypress.c

SRCS_BONUS = 	srcs_bonus/main.c \
				${UTILS_BONUS} \
				${LIB_BONUS} \
				${PARSER_BONUS} \
				${GAME_BONUS}

OBJS = ${SRCS:.c=.o}
OBJS_BONUS = ${SRCS_BONUS:.c=.o}

CC = clang

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:
	make -C ./minilibx-linux
	make ${NAME}

${NAME}: ${OBJS}
		${CC} -o ${NAME} ${OBJS} ${CFLAGS} minilibx-linux/libmlx_Linux.a -lXext -lX11

bonus: ${NAME_BONUS}

${NAME_BONUS}: ${OBJS_BONUS}
				make -C ./minilibx-linux
				${CC} -o ${NAME_BONUS} ${OBJS_BONUS} ${CFLAGS} minilibx-linux/libmlx_Linux.a -lXext -lX11

clean:	clean_other
		${RM} ${OBJS} ${OBJS_BONUS}

fclean:		clean
			${RM} ${NAME} ${NAME_BONUS} 

compil_other:
		cd minilibx-linux && make

clean_other:
		cd minilibx-linux && make clean

re:		fclean all

.PHONY: clean all fclean re bonus
