/* 
 * Grup de Pràctiques: P401
 * Professor pràctiques: Angel David Blanco Casales
 * Incidències:
 *
 * Autor (Nom i NIA): Carlos Hortensius Fernandez 205437
 * Roger Pedros Villalba 206798
 * Marc Gaja Pescador 204885
 * Data/hora:
 * Collaboradors (si cal):
 *
 * Ús del programa:
 * Estat de l'entrega:
 * Altres comentaris o incidències:
 */

#ifndef MENU_H
#define MENU_H

#include "hanoi_list.h"

#define MSG_QUIT "%d. Quit\n"
#define OPTION_QUIT 0
#define MSG_REPEAT_HANOI "%d. Repeat Hanoi\n"
#define OPTION_REPEAT_HANOI 1
#define MSG_SHOW_MOVEMENT "%d. Show Movement\n"
#define OPTION_SHOW_MOVEMENT 2
#define OPTION_INVALID -1


void menu(slist*, matriux *mat, char *fileName);

#endif /* MENU_H */


