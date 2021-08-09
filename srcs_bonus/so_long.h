/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 03:58:31 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/05 15:43:06 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <errno.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

# include "../minilibx-linux/mlx.h"

# define ESC_KEY 65307
# define Z_KEY 115
# define Q_KEY 97
# define S_KEY 119
# define D_KEY 100

# define COLLECTIBLE 'C'
# define COLLECTIBLE_TEXTURE_PATH "./srcs/textures/collectibles/coin_1.xpm"
# define COLLECTIBLE_TEXTURE_PATH_2 "./srcs/textures/collectibles/coin_2.xpm"
# define COLLECTIBLE_TEXTURE_PATH_3 "./srcs/textures/collectibles/coin_3.xpm"
# define COLLECTIBLE_TEXTURE_PATH_4 "./srcs/textures/collectibles/coin_4.xpm"

# define WALL '1'
# define FLOOR '0'
# define WALL_TEXTURE_PATH "./srcs/textures/wall.xpm"
# define FLOOR_TEXTURE_PATH "./srcs/textures/floor.xpm"

# define EXIT 'E'
# define NB_MAX_EXIT 1
# define EXIT_TEXTURE_PATH "./srcs/textures/door.xpm"

# define PLAYER 'P'
# define NB_MAX_PLAYER 1
# define PLAYER_TEXTURE_PATH "./srcs/textures/player.xpm"

# define ENEMY 'M'
# define ENEMY_TEXTURE_PATH "./srcs/textures/enemy.xpm"

# define TEXTURE_SIZE 64
# define TILE_NB 15
# define TILE_NB_DIVIDED 7
# define FPS 300 

typedef struct 	s_img
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		width;
	int		height;
}				t_img;

typedef struct 	s_mlx
{
	void	*mlx;
	void	*win;
}				t_mlx;

typedef struct 	s_file
{
	char	*name;
	int		fd;
	size_t	line_cur;
	char	*line;
}				t_file;

typedef struct 	s_texture
{
	int		width;
	int		height;
	char	*path;
	void	*img;
}				t_texture;

typedef struct 	s_player
{
	size_t		nb;
	int			x;
	int			y;
	int			target_x;
	int			target_y;
	size_t		pts;
	size_t		moves;
	t_texture	texture;
}				t_player;

typedef struct 	s_exit
{
	size_t		nb;
	t_texture	texture;
}				t_exit;

typedef struct 	s_collectible
{
	size_t		nb;
	t_texture	texture;
	t_texture	texture2;
	t_texture	texture3;
	t_texture	texture4;
}				t_collectible;

typedef struct 	s_enemy
{
	size_t		nb;
	int			x;
	int			y;
	int			target_x;
	int			target_y;
	t_texture	texture;
}				t_enemy;

typedef struct 	s_map
{
	size_t		x;
	size_t		y;
	size_t		line;
	char		**map;
	t_texture	wall;
	t_texture	floor;
}				t_map;

typedef struct 	s_frame
{
	int	x;
	int	y;
	int	cur_x;
	int	cur_y;
	int	loop;
	int	frame;
}				t_frame;

typedef struct 	s_solong
{
	t_file			file;
	t_map			map;
	t_player		player;
	t_exit			exit;
	t_collectible	collectible;
	t_mlx			mlx;
	t_img			img;
	t_frame			frame;
	t_enemy			enemy;
}				t_solong;

/*
** COLLECTIBLES
*/
int		ft_is_collectible(char c);
void	ft_load_collectible_texture(t_solong *solong);
void	ft_struct_init_collectible(t_collectible *collectible);
void	ft_print_collectible(t_solong *solong);
void	ft_print_collectible_1(t_solong *solong);
void	ft_print_collectible_2(t_solong *solong);
void	ft_print_collectible_3(t_solong *solong);
void	ft_print_collectible_4(t_solong *solong);

/*
** MAP
*/
void	ft_struct_init_map(t_map *map);
int		ft_is_map(char c);
int		ft_is_floor(char c);
int		ft_is_wall(char c);
void	ft_load_map(t_solong *solong);
void	ft_load_map_line(t_solong *solong);
void	ft_load_floor_texture(t_solong *solong);
void	ft_load_wall_texture(t_solong *solong);
void	ft_print_map(t_solong *solong);

/*
** EXIT
*/
void	ft_struct_init_exit(t_exit *exit);
int		ft_is_exit(char c);
void	ft_load_exit_texture(t_solong *solong);
void	ft_print_exit(t_solong *solong);
void	ft_load_enemy_texture(t_solong *solong);
void	ft_offset_loop(t_solong *solong, size_t *x);

/*
** PLAYER
*/
void	ft_struct_init_player(t_player *player);
int		ft_is_player(char c);
void	ft_load_player_texture(t_solong *solong);
void	ft_move_up(t_solong *solong);
void	ft_move_down(t_solong *solong);
void	ft_move_left(t_solong *solong);
void	ft_move_right(t_solong *solong);
void	ft_move_player(t_solong *solong);
void	ft_print_player(t_solong *solong);

/*
** ENEMY
*/
int		ft_is_enemy(char c);
void	ft_struct_init_enemy(t_enemy *enemy);
void	ft_print_enemy(t_solong *solong);
void	ft_move_enemy(t_solong *solong);
void	ft_new_enemy_position(t_solong *solong);
void	ft_swap_enemy(t_solong *solong);

/*
** GAME
*/
void	ft_game(t_solong *solong);
void	ft_load_textures(t_solong *solong);
int		ft_keypress(int keycode, t_solong *solong);
void	ft_exit_game(int clean_success, t_solong *solong);
int		ft_cross(t_solong *solong);
int		ft_frame(t_solong *solong);
void	ft_loop_count(t_solong *solong);
void	ft_print_tile(t_solong *solong);
int		ft_out_of_boundaries(t_solong *solong);

/*
** LIB
*/
char	*ft_strstr(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);
size_t	ft_strlen(char *str);
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);
char	*ft_itoa(int n);
char	*ft_strdup(char *s);
size_t	ft_nbrlen(int nbr, int base);

/*
** PARSER
*/
void	ft_parser(t_solong *solong);
void	ft_parse_line(t_solong *solong, int ret);
void	ft_parse_ends(t_solong *solong);
void	ft_parse_middle(t_solong *solong);
void	ft_parse_specials(t_solong *solong);
void	ft_parser_errors(t_solong *solong);

/*
** UTILS
*/
int		ft_clean(t_solong *solong);
int		ft_clean_map(t_solong *solong);
int		ft_clean_mlx(t_solong *solong);
int		ft_clean_textures(t_solong *solong);
void	ft_error(int clean_success, char *msg);
void	ft_struct_init(t_solong *solong);
void	ft_struct_init_file(t_file *file);
char	*recurs(int depth, int *ret, int fd);
int		get_next_line(int fd, char **out);
int		create_trgb(int t, int r, int g, int b);

#endif
