#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "server.h"

typedef struct	s_player {
  int	fd;
  char	*identity;
  int	x;
  int	y;
  int	disabled;
  int	looking;
  struct s_player *next;
}	t_player;

//no need de connaitre le type, pour les player on saura qu'on init les spites players


#endif
