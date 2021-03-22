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
