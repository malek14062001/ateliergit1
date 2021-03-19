#ifndef ENIGMESANSFICHIER_H_
#define ENIGMESANSFICHIER_H_


typedef struct {

char rep1[10];
SDL_Surface *r1;
SDL_Rect position_rep1;
char rep2[10];
SDL_Surface *r2;
SDL_Rect position_rep2;
char rep3[10];
SDL_Surface *r3;
SDL_Rect position_rep3;
char rep_vrai[10];
}rep; 

typedef struct { 
char question[150];
rep reponse;
SDL_Surface *ques;
SDL_Rect position_question;
}Enigme;


enigme generer() ; ///initialisation énigme: génération aléatoire questions réponse
void afficherEnigme(enigme e, SDL_Surface * screen) ; /// affich énigme



#endif
