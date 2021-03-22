#include <stdio.h>
#include "SDL/SDL.h"
#include <string.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <time.h>
#include "enigmesansfichier.h"


enigme generer() 
{ int i;
do {
    srand(time(NULL));
   i=rand()%20;
     
  } while(i==0 || i>9);

 
 
 
 void afficherEnigme(enigme e, SDL_Surface * screen)  /// affich énigme
 {
     /// * surface_enigme = screen 
TTF_Font *police = NULL;

SDL_Rect positionfonds;
SDL_Surface *fonds=NULL;
SDL_Color couleurNoire = {255,255,255};
    TTF_Init();
    police = TTF_OpenFont("1.ttf",25);


     //fonds de l'enigme
     fonds=IMG_Load("fonds.png");
     positionfonds.x=0;
     positionfonds.y=0;

    // Écriture du texte dans la SDL_Surface question
     E.ques =TTF_RenderText_Blended(police,E.question, couleurNoire);
     E.position_question.x = 40;
     E.position_question.y =100;


// Écriture du texte dans la SDL_Surface reponse1

    E.reponse.r1=TTF_RenderText_Blended(police,E.reponse.rep1, couleurNoire);
     E.reponse.position_rep1.x = 200;
    E.reponse.position_rep1.y =200 ;
// Écriture du texte dans la SDL_Surface reponse2
    E.reponse.r2=TTF_RenderText_Blended(police,E.reponse.rep2, couleurNoire);
     E.reponse.position_rep2.x = 200;
     E.reponse.position_rep2.y =300 ;
// Écriture du texte dans la SDL_Surface reponse3
    E.reponse.r3=TTF_RenderText_Blended(police,E.reponse.rep3, couleurNoire);
     E.reponse.position_rep3.x = 200;
     E.reponse.position_rep3.y =400 ;
//blit

    SDL_BlitSurface(fonds, NULL,surface_enigme,&positionfonds);
    SDL_BlitSurface(E.ques,&positionfonds,surface_enigme,&E.position_question);
    SDL_BlitSurface(E.reponse.r1,&positionfonds,surface_enigme,&E.reponse.position_rep1);
    SDL_BlitSurface(E.reponse.r2, &positionfonds,surface_enigme,&E.reponse.position_rep2);
    SDL_BlitSurface(E.reponse.r3,&positionfonds,surface_enigme,&E.reponse.position_rep3);
    SDL_Flip(surface_enigme);

    TTF_CloseFont(police);
    TTF_Quit();
  
   
}
