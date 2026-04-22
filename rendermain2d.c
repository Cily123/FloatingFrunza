//copyright(c)2026 Cyli123
//renders 2D images
#include "rain.h"
#define MAX_IMGS 100

//Texture2D imgs2d[MAX_IMGS];


/*void render2d() {
     rainDrawImage2d(1,200,500,white);
     //rainDraw2dModel(1,(Vector3){2,-3,7});
char objects[2000];
rainGuiPanel((Rectangle){0,0,200,720},"Scene Tree");
GuiListView((Rectangle){10,15,200,500},objects)



}



void setup2d() {
    rainLoadImage2d(1,"D:/projects/RainEngine dev/Rain1/Rain/RainEngine/bin/Debug/ImageTest.png");

}*/


/*void rainLoadImage2d(int index,const char* texpth) {
    imgs2d[index] = LoadTexture(texpth);
}

void rainDrawImage2d(int index,int posX,int posY,Color clr) {
    DrawTexture(imgs2d[index],posX,posY,clr);
}*/






/*void rainDraw2dModel(int index,Vector3 pos32) {
    Camera3D camera = { 0 };
   camera.position = (Vector3){0.0f,1.0f,6.0f};
   camera.target = (Vector3){0.0f,1.0f,0.0f};
   camera.up = (Vector3){0.0f,1.0f,0.0f};
   camera.fovy = 60.0f;
   camera.projection = CAMERA_PERSPECTIVE;

    DrawBillboard(camera,imgs2d[index],pos32,1.0f,WHITE);
}*/

void showFps(int posx,int posy) {
    DrawFPS(posx,posy);
}



void rainHideCursor() {
    HideCursor();

}

void rainShowCursor() {
    ShowCursor();

}



void rainDrawGrid() {
    DrawGrid(32,1.0f);
}


void rainDrawGridPro(int s,float sp) {
    DrawGrid(s,sp);
}


