/*
** EPITECH PROJECT, 2017
** My Cook / Include
** File description:
** struct.h
*/

/***********************
	RESSOURCES
***********************/

typedef struct s_wdw { //WINDOW
	char *name;
	sfVideoMode mode;
	sfRenderWindow *wdw;
	sfClock *clock;
	sfMusic *music;
	int volume;
	sfEvent event;
	float elapsed;
} wdw_t;

typedef struct s_spt { //SPRITE
	sfSprite *s;
	sfTexture *t;
	sfIntRect r;
	sfVector2f p;
	float chrono;
	int origin_x;
	int state;
	int life;
	int life_max;
	int attk;
	int speed;
	int price;
	int level;
	int unit;
} spt_t;



/***********************
	SCENES
***********************/

typedef struct s_m { //SCENE MENU
	spt_t *bck[3];
	spt_t *pllx[6];
	sfText *jouer;
	sfText *options;
	sfText *quitter;
	int menu;
} m_t;

typedef struct s_o { //SCENE OPTION
	spt_t *bck[2];
	spt_t *sound[2];
	spt_t *button[5];
	sfText *text[6];
} o_t;

typedef struct s_p { //SCENE PAUSE
	spt_t *bck[2];
	sfText *jouer;
	sfText *options;
	sfText *quitter;
} p_t;

typedef struct s_g { //SCENE GAME
	// INTERFACE
	spt_t *bck[2];
	spt_t *cstl[2];
	spt_t *curs[2];
	spt_t *menu[2];
	spt_t *life[2];
	spt_t *end[2];
	spt_t *button[1];
	sfText *end_button;
	int who_win;
	int cursg[5];
	int cursd[5];
	int movedMenu[2];
	float chrono;

	//ENTITE
	spt_t *unitg[5];
	spt_t *unitd[5];
	spt_t *lifeg[5];
	spt_t *lifed[5];
	int clickg;
	int clickd;

} g_t;



/***********************
	STATISTIQUES
***********************/

typedef struct s_s { //STATS
	// Variables de jeu :
	int ratio_gold[2];
	float time_gold;
	int gold[2];
	int level[2];
	int state_timer[2];

	// Stats de Castle :
	int cstl_life[2];
	int cstl_life_max[5];
	int cost_upgrade[5];
	int cost_heal[5];

	// Stats d'unités
	int cost_unit[5][5];
	int life_unit[5][5];
	int attk_unit[5][5];
	int nb_spt[5][5];

	// sfText
	sfText *goldg;
	sfText *goldd;
	sfText *overlayg;
	sfText *overlayd;
	sfText *life_cstlg;
	sfText *life_cstld;
	sfFont *font;
} s_t;

typedef struct s_t { //TIME
	float chrono;
	sfText *chronotxt;
} t_t;


/***********************
	MAIN
***********************/

typedef struct s_ck { //MY_COOK
	wdw_t *wdw;
	m_t *m;
	o_t *o;
	p_t *p;
	g_t *g;
	s_t *s;
	t_t *t;
	int scene;
	int last_scene;
	int cheat;
	sfVector2i mouse_pos;
	sfBool mouse_pressed;
} ck_t;
