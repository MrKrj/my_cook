/*
** EPITECH PROJECT, 2017
** My_Cook / Include
** File description:
** cook.h
*/

#ifndef RUNNER_H_
#define RUNNER_H_

/***********************
	BASICS
***********************/
int main(int ac, char **av, char **env);
int initialisation(ck_t *ck);
int start(ck_t *ck);
int set_music(ck_t *ck, char *sources);
int manage_event(ck_t *ck);
int which_scene(ck_t *ck);
int which_scene_event(ck_t *ck);
void set_stats(ck_t *ck);
void set_stats_part_1(ck_t *ck);
void set_struct(ck_t *ck);
void set_stats_part_2(ck_t *ck);
void set_stats_part_3(ck_t *ck);
void set_stats_part_4(ck_t *ck);
void set_stats_part_5(ck_t *ck);
void set_stats_part_6(ck_t *ck);
char *my_itoa(int nb);
int my_strlen_int(int nb);
int my_strcmp(char *s1, char *s2);



/***********************
	dESTROY
***********************/
void destroy(ck_t *ck);
void destroy_part_1(ck_t *ck);
void destroy_part_2(ck_t *ck);
void destroy_part_3(ck_t *ck);
void destroy_part_4(ck_t *ck);
void destroy_part_5(ck_t *ck);



/***********************
	TEXTURE
***********************/
int texture(ck_t *ck);

//TEXTURE MENU
int texture_menu(ck_t *ck);
int set_bck_menu_and_menu_menu(ck_t *ck);
int set_logo_menu(ck_t *ck);
int set_pllx_menu_one(ck_t *ck);
int set_pllx_menu_two(ck_t *ck);
int set_pllx_menu_three(ck_t *ck);
int set_text_menu_one(ck_t *ck);
int set_text_menu_two(ck_t *ck);

//TEXTURE PAUSE
int texture_pause(ck_t *ck);
int set_bck_pause(ck_t *ck);
int set_text_pause_one(ck_t *ck);
int set_text_pause_two(ck_t *ck);

//TEXTURE OPTION
int texture_option(ck_t *ck);
int set_bck_option_and_menu_option(ck_t *ck);
int set_sound_option(ck_t *ck);
int set_text_option(ck_t *ck);
void set_text_option_two(ck_t *ck);
int set_return(ck_t *ck);
int set_cheat(ck_t *ck);
int set_cheat_two(ck_t *ck);

//TEXTURE gAME
int texture_game(ck_t *ck);
int texture_game_set_one(ck_t *ck);
int texture_game_set_two(ck_t *ck);
int set_bck_game_and_menu_game(ck_t *ck);
int set_cstl_g(ck_t *ck);
int set_cstl_d(ck_t *ck);
int set_curs_g(ck_t *ck);
int set_curs_d(ck_t *ck);
int set_moved_menug(ck_t *ck);
int set_moved_menud(ck_t *ck);
int set_gold(ck_t *ck);
int set_time(ck_t *ck);
int set_overlay(ck_t *ck);
int set_glife(ck_t *ck);
int set_dlife(ck_t *ck);
int set_life_overlay(ck_t *ck);
int set_entityg(ck_t *ck);
int set_entityd(ck_t *ck);
int set_lifeg(ck_t *ck);
int set_lifed(ck_t *ck);

//TEXTURE ENd
int set_end(ck_t *ck);
int set_button_end(ck_t *ck);
int set_button_end_text(ck_t *ck);



/***********************
	EVENT
***********************/
// EVENT MENU
int event_menu(ck_t *ck);
void react_to_mouse_pos_menu(ck_t *ck);
void react_to_mouse_pos_menu_2(ck_t *ck);
int react_to_mouseclick_menu(ck_t *ck);

// EVENT PAUSE
int event_pause(ck_t *ck);
void react_to_mouse_pos_pause_2(ck_t *ck);
void react_to_mouse_pos_pause(ck_t *ck);
int react_to_mouseclick_pause(ck_t *ck);

// EVENT OPTION
int event_option(ck_t *ck);
void react_to_mouse_sound(ck_t *ck);
void react_to_mouse_sound_2(ck_t *ck);
void react_to_mouse_sound_3(ck_t *ck);
void react_to_click_sound(ck_t *ck);
void react_to_click_sound_2(ck_t *ck);
void react_to_click_sound_3(ck_t *ck);
void react_to_mouse_return(ck_t *ck);
void react_to_mouse_cheat_one(ck_t *ck);
void react_to_mouse_cheat_two(ck_t *ck);
void react_to_mouse_cheat_three(ck_t *ck);
void react_to_mouse_cheat_four(ck_t *ck);
void react_to_mouse_cheat_up(ck_t *ck, int who);

// EVENT gAME
int event_game(ck_t *ck);
int react_to_keyboard(ck_t *ck);
int react_to_keyboard_g(ck_t *ck);
int react_to_keyboard_d(ck_t *ck);
int react_to_enter_g(ck_t *ck);
int react_to_enter_d(ck_t *ck);
int react_to_enter_g_menu(ck_t *ck);
int react_to_enter_d_menu(ck_t *ck);
int react_to_moved_menu_g(ck_t *ck);
int react_to_moved_menu_d(ck_t *ck);
void move_in_moved_menugg(ck_t *ck);
void move_in_moved_menugd(ck_t *ck);
void move_in_moved_menudg(ck_t *ck);
void move_in_moved_menudd(ck_t *ck);
int display_menug(ck_t *ck);
int display_menud(ck_t *ck);
int healg(ck_t *ck);
int heald(ck_t *ck);
int upgradeg(ck_t *ck);
int upgraded(ck_t *ck);
int freezeg(ck_t *ck);
int freezed(ck_t *ck);
int react_to_enter_g_moved_menu(ck_t *ck);
int react_to_enter_d_moved_menu(ck_t *ck);
int which_id_g(ck_t *ck);
int which_id_d(ck_t *ck);
void pop_g_unit_1(ck_t *ck, int id);
void pop_d_unit_1(ck_t *ck, int id);
void pop_g_unit_2(ck_t *ck, int id);
void pop_d_unit_2(ck_t *ck, int id);
void pop_g_unit_3(ck_t *ck, int id);
void pop_d_unit_3(ck_t *ck, int id);
void pop_g_unit_4(ck_t *ck, int id);
void pop_d_unit_4(ck_t *ck, int id);
void pop_g_unit_1_next(ck_t *ck, int id, int x);
void pop_g_unit_2_next(ck_t *ck, int id, int x);
void pop_g_unit_3_next(ck_t *ck, int id, int x);
void pop_g_unit_4_next(ck_t *ck, int id, int x);
void pop_d_unit_1_next(ck_t *ck, int id, int x);
void pop_d_unit_2_next(ck_t *ck, int id, int x);
void pop_d_unit_3_next(ck_t *ck, int id, int x);
void pop_d_unit_4_next(ck_t *ck, int id, int x);

//EVENT ENd
int event_end(ck_t *ck);
int react_to_mouse_return_end(ck_t *ck);
void end_game_time(ck_t *ck);



/***********************
	MENU
***********************/
int menu(ck_t *ck);
void render_menu(ck_t *ck);
void update_menu(ck_t *ck);



/***********************
	PAUSE / FREEZE
***********************/
int freeze(ck_t *ck);
void render_pause(ck_t *ck);
int update_pause(ck_t *ck);



/***********************
	OPTION
***********************/
int option(ck_t *ck);
void render_option(ck_t *ck);
void update_option(ck_t *ck);



/***********************
	gAME
***********************/
int game(ck_t *ck);
void render_game(ck_t *ck);
void render_game_two(ck_t *ck);
int update_game(ck_t *ck);
void update_gold(ck_t *ck);
void move_right_gold(ck_t *ck);
void update_time(ck_t *ck);
void add_one_to_time(ck_t *ck, char *str);
void sub_one_to_time(ck_t *ck, char *str);
void color_timer(ck_t *ck);
void set_price_overlay(ck_t *ck);
void price_overlay_gmenu(ck_t *ck);
void price_overlay_gmoved(ck_t *ck);
void price_overlay_dmenu(ck_t *ck);
void price_overlay_dmoved(ck_t *ck);
void display_price_gmenu(ck_t *ck);
void display_price_gmoved(ck_t *ck);
void display_price_dmenu(ck_t *ck);
void display_price_dmoved(ck_t *ck);
void display_price_gmoved_1_2(ck_t *ck);
void display_price_gmoved_3_4(ck_t *ck);
void display_price_dmoved_1_2(ck_t *ck);
void display_price_dmoved_3_4(ck_t *ck);
void update_life(ck_t *ck);
void update_life_digit(ck_t *ck);
void update_monster(ck_t *ck);
int where_is_limit_g(ck_t *ck);
int where_is_limit_d(ck_t *ck);
int how_many_unit_g(ck_t *ck);
int how_many_unit_d(ck_t *ck);
int who_is_forward_g(ck_t *ck);
int who_is_forward_d(ck_t *ck);
void update_monster_g(ck_t *ck, int max_forward_g, int id_forward_g);
void update_monster_d(ck_t *ck, int max_forward_d, int id_forward_d);
void update_life_unit(ck_t *ck);
void move_unit_g(ck_t *ck);
void move_unit_d(ck_t *ck);
int who_must_be_attack_g(ck_t *ck);
int who_must_be_attack_d(ck_t *ck);
void add_time_to_monster(ck_t *ck);
void change_sprite_move(ck_t *ck);
void stop_move_monster_g(ck_t *ck);
void stop_move_monster_d(ck_t *ck);
void condition_move_unit(ck_t *ck, int i);

/***********************
	ENd
***********************/
void end_game(ck_t *ck);
void render_ends(ck_t *ck);


#endif
