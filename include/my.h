/*
** EPITECH PROJECT, 2020
** my
** File description:
** Prototypes lib
*/

#ifndef MY_H
#define MY_H

#include <stdarg.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int my_atoi(char const *str);
int is_neg(char a);
int my_getnbr(char const *str);
int reste(int nb, int i);
int my_is_prime(int nb);
int my_isneg(int nb);
char *my_itoa(int nb);
int my_put_nbr(int nb);
int my_putchar(char c);
int my_putstr(char const *str);
void my_swaprev(char *a, char *b);
char *my_revstr(char *str);
char *my_strcat(char *dest, char const *src);
int  my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strncat(char *dest, char const *src, int p);
void my_swap(int *a, int *b);
int my_printf(char *str, ...);
int my_put_octal(unsigned long int nb);
int my_put_hex(unsigned long int nb);
int my_put_hex_low(unsigned long int nb);
int my_cleanstr(char *str);
char *char_to_octal(int nb);
int my_put_binary(unsigned long int nb);
int is_char_in_str(char c, char *str);
int my_put_unsigned_nbr(unsigned int nb);
int my_getnnbr(char const *str, int i);
int my_intlen(int nb);
int my_formated_print(char c, int nb);
int my_format(char *str, int i, va_list parameters);
int my_format_plus(char *str, int i, va_list parameters);
int my_put_pointer(unsigned long int nb);
// Define Defender

typedef struct enemy {
    sfSprite *sprite;
    int pv;
    char orientation;
    int move;
    int speed;
    int max_speed;
    int poison;
    struct enemy *next;
    int anim;
} enemy;

typedef struct s_tower {
    int type;
    int pos;
    struct s_tower *next;
    sfSprite *sprite;
} s_tower;

typedef struct {
    sfSprite *map;
    sfSprite *life_sprite;
    sfSprite *elec_anim;
    sfSprite *fire_anim;
    sfSound *select_sound;
    sfSound *hammer_sound;
    sfSound *coins_sound;
    sfSound *go_sound;
    sfSound *hurt_sound;
    sfSound *elec_sound;
    sfSound *win_sound;
    sfText *sc_text;
    sfRenderWindow *wndw;
    int fire_state;
    int *coins;
} assets;


// Prototype Defender
int is_clicked(sfVector2i left, sfVector2i right, sfRenderWindow *window);
int event_main(sfRenderWindow *window);
int main_screen(sfRenderWindow *window);
void player_1(sfRenderWindow *window, sfSprite *p1_sprite, sfVector2f p1_pos);
int defender(sfRenderWindow *window, char *path);
sfSprite *create_background();
int game_loop(sfRenderWindow *window, enemy *enemies, char *path);
int create_map(enemy **enemies, char *map);
void create_enemy(enemy **enemies);
sfSprite *create_background(void);
char *get_map(char *path);
void coins(sfRenderWindow *win, int sc, sfText *sc_text);
void fire_coins(sfRenderWindow *win, int sc, sfText *sc_text);
void pois_coins(sfRenderWindow *win, int sc, sfText *sc_text);
void snow_coins(sfRenderWindow *win, int sc, sfText *sc_text);
void elec_coins(sfRenderWindow *win, int sc, sfText *sc_text);
void manage_event(sfRenderWindow *win, s_tower **tower, int *coins, assets a);
int buttons_select(sfRenderWindow *window, assets a);
void print_border(sfRenderWindow *window, int choice);
void animate(enemy **sprite);
sfSprite *create_life(void);
void create_tower(s_tower **tower, int choice, int pos);
int tower_replacer(int pos, int choice, s_tower **tower, int *coins);
int tower_placer(int choice, \
s_tower **tower, int *coins, assets a);
void print_towers(sfRenderWindow *window, s_tower **tower);
int tower_seller(sfRenderWindow *win, int choice, \
s_tower **tower, assets *a);
int tower_reseller(int pos, int choice, s_tower **tower, int *coins);
int increase_coins(int coins);
void delete_tower(s_tower **tower, s_tower **node);
void delete_enemy(enemy **enemies, enemy **node);
void life(sfRenderWindow *window, int life_pt, sfSprite *sprite);
int orientation_enemy(enemy **enemies, int life_pt, int *coins, assets a);
sfText *create_text(void);
void game_over(sfRenderWindow *window, char *path, assets a);
int is_hit(sfVector2f tower, sfVector2f enemy);
void check_attack(sfRenderWindow *window, \
s_tower **tower, enemy **enemies, assets a);
void elec_attack(sfRenderWindow *window, enemy **enemies, assets a);
void snow_attack(sfRenderWindow *window, enemy **enemies, assets a);
void pois_attack(sfRenderWindow *window, enemy **enemies, assets a);
void fire_attack(sfRenderWindow *window, enemy **enemies, assets a);
void wait_attack(sfRenderWindow *window, \
s_tower **tower, enemy **enemies, assets a);
void attack(sfRenderWindow *window, enemy *tmp_e, int type, assets a);
void enemy_debuffer(enemy **enemies);
void tutorial(sfRenderWindow *window);
int pause_game(sfRenderWindow *window, char *path);
int win_screen(sfRenderWindow *window, char *path, assets a);
sfSound *select_sound_create(void);
sfSprite *create_p1(void);
sfSprite *create_p2(void);
sfSound *hammer_sound_create(void);
sfSound *coins_sound_create(void);
sfSound *go_sound_create(void);
sfSound *hurt_sound_create(void);
sfSound *elec_sound_create(void);
sfSound *win_sound_create(void);
sfSprite *create_fire(void);
sfSprite *create_elec(void);
assets effects(sfRenderWindow *window, assets a);
assets elec_effect(sfRenderWindow *window, assets a);
assets snow_effect(sfRenderWindow *window, assets a);
assets pois_effect(sfRenderWindow *window, assets a);
assets fire_effect(sfRenderWindow *window, assets a);
void destroy_sprite(sfSprite *sprite, sfTexture *texture);

#define main_define \
    sfTexture *bg_txt = sfTexture_createFromFile("assets/MENU.png", NULL);  \
    sfSprite *bg_sprite = sfSprite_create();    \
    sfSprite *p1_sprite = create_p1();  \
    sfSprite *p2_sprite = create_p2();  \
    sfSound *select_sound = select_sound_create();  \
    sfVector2i p1_hg = {450, 413};  \
    sfVector2f p1_pos = {450, 413}; \
    sfVector2i p1_bd = {1514, 588}; \
    sfVector2i p2_hg = {450, 669};  \
    sfVector2f p2_pos = {450, 669}; \
    sfVector2i p2_bd = {1514, 844}; \
    int confirm = 0;    \
    int click = 0;  \
    sfSprite_setTexture(bg_sprite, bg_txt, sfFalse);    \
    while (sfRenderWindow_isOpen(window)) { \
        sfRenderWindow_display(window); \
        sfRenderWindow_clear(window, sfBlack);  \
        sfRenderWindow_drawSprite(window, bg_sprite, NULL); \

#define BUTTONS_POS sfVector2f elec_pos = {0, 0};   \
    sfVector2f snow_pos = {290, 0}; \
    sfVector2f pois_pos = {592, 0}; \
    sfVector2f fire_pos = {890, 0}; \
    sfVector2f sell_pos = {1185, 0};    \

#define TOWER_SELLER sfVector2i case_h1_hg = {130, 130};    \
    sfVector2i case_h1_bd = {230, 237}; \
    sfVector2i case_h2_hg = {488, 131}; \
    sfVector2i case_h2_bd = {585, 235}; \
    sfVector2i case_h3_hg = {611, 369}; \
    sfVector2i case_h3_bd = {710, 476}; \
    sfVector2i case_h4_hg = {1087, 610};    \
    sfVector2i case_h4_bd = {1185, 716};    \
    sfVector2i case_h5_hg = {1448, 248};    \
    sfVector2i case_h5_bd = {1544, 350};    \
    sfVector2i case_b1_hg = {252, 373}; \
    sfVector2i case_b1_bd = {348, 475}; \
    sfVector2i case_b2_hg = {492, 617}; \
    sfVector2i case_b2_bd = {588, 720}; \
    sfVector2i case_b3_hg = {1331, 732};    \
    sfVector2i case_b3_bd = {1432, 839};    \
    sfVector2i case_b4_hg = {1332, 494};    \
    sfVector2i case_b4_bd = {1431, 597};    \

#define BUTTONS_DEF   sfVector2i elec_hg = {26, 940};  \
    sfVector2i elec_bd = {288, 1058};   \
    sfVector2i snow_hg = {312, 940};    \
    sfVector2i snow_bd = {587, 1058};   \
    sfVector2i pois_hg = {610, 940};    \
    sfVector2i pois_bd = {881, 1058};   \
    sfVector2i fire_hg = {905, 940};    \
    sfVector2i fire_bd = {1186, 1058};  \
    sfVector2i sell_hg = {1210, 940};   \
    sfVector2i sell_bd = {1547, 1058};  \
    int choice = 0; \
    if (is_clicked(elec_hg, elec_bd, window)) { \
        sfSound_play(a.select_sound);   \
        (choice = 1);   \
    }   \

#define ADD_1_DEF    sfVector2f pos;    \
    enemy *tmp = *enemies;  \
    sfSprite *sprite = sfSprite_create();   \
    sfIntRect rect; \
    sfVector2f scale = {0.5, 0.5};  \
    sfTexture *txt = sfTexture_createFromFile("assets/monster_1.png", NULL);\
    sfTexture_setSmooth(txt, sfTrue);   \
    sfSprite_setTexture(sprite, txt, sfTrue);   \

#define ADD_2_DEF    sfVector2f pos;    \
    enemy *tmp = *enemies;  \
    sfSprite *sprite = sfSprite_create();   \
    sfIntRect rect; \
    sfVector2f scale = {0.5, 0.5};  \
    sfTexture *txt = sfTexture_createFromFile("assets/monster_2.png", NULL);\
    sfTexture_setSmooth(txt, sfTrue);   \
    sfSprite_setTexture(sprite, txt, sfTrue);   \

#define ADD_3_DEF   sfVector2f pos;    \
    enemy *tmp = *enemies;  \
    sfSprite *sprite = sfSprite_create();   \
    sfIntRect rect; \
    sfVector2f scale = {0.5, 0.5};  \
    sfTexture *txt = sfTexture_createFromFile("assets/monster_3.png", NULL);\
    sfTexture_setSmooth(txt, sfTrue);   \
    sfSprite_setTexture(sprite, txt, sfTrue);   \

#define GAME_LOOP_DEFINE    assets assets; \
    assets.map = create_background();   \
    assets.life_sprite = create_life(); \
    assets.elec_anim = create_elec();   \
    assets.fire_anim  = create_fire();  \
    assets.sc_text = create_text(); \
    assets.fire_state = 0;  \
    assets.wndw = window;   \
    sfTime time;    \
    s_tower *tower = NULL;  \
    sfClock *clock = sfClock_create();  \
    int end = 1;    \
    int coins_nb = 50;    \
    int life_pt = 6;    \
    assets.select_sound = select_sound_create();    \
    assets.hammer_sound = hammer_sound_create();    \
    assets.coins_sound = coins_sound_create();  \
    assets.go_sound = go_sound_create();    \
    assets.hurt_sound = hurt_sound_create();    \
    assets.elec_sound = elec_sound_create();    \
    assets.win_sound = win_sound_create();  \

#define GAME_FIRST_PART        sfRenderWindow_clear(window, sfBlack);\
        sfRenderWindow_drawSprite(window, assets.map, NULL); \
        display_enemies(&enemies, window);  \
        coins(window, coins_nb, assets.sc_text);    \
        fire_coins(window, coins_nb, assets.sc_text);   \
        pois_coins(window, coins_nb, assets.sc_text);   \
        snow_coins(window, coins_nb, assets.sc_text);   \
        elec_coins(window, coins_nb, assets.sc_text);   \
        life(window, life_pt, assets.life_sprite);  \
        print_towers(window, &tower);   \
        (sfKeyboard_isKeyPressed(sfKeyEscape)) && \
        (end = pause_game(window, path));   \
        manage_event(window, &tower, &coins_nb, assets);    \

#define ORIENTATION_LAST_PART        if (pos.x >= 1720) {   \
            delete_enemy(enemies, &tmp);    \
            life_pt -= 1;   \
            sfSound_play(a.hurt_sound); \
        }   \
        if (tmp->pv <= 0) { \
            delete_enemy(enemies, &tmp);    \
            *coins += 15;    \
        }   \
    }   \
    return (life_pt);   \

#endif
