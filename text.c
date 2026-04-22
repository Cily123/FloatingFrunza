//copyright(c)2026 Cyli123
//reneders text
#include "rain.h"
#include <raylib/raygui.h>




void rainDrawText(int index,const char* textsrc,int posX,int posY,Color color,double sizef) {



       /*Font rainFont = LoadFont("C:/Windows/Fonts/arial.ttf");
       GuiSetFont(rainFont);*/



    DrawTextEx(rainFont,textsrc,(Vector2){posX,posY},sizef,1,color);

}
