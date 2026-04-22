//copyright(c)2026 Cyli123
#include "rain.h"
#include <raylib/raygui.h>
#include <string.h>






int MakeWindow(int width32,int height32,const char* title32) {

    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitAudioDevice();

    InitWindow(width32,height32,title32);
    rlEnableDepthTest();

       rainFont = LoadFont("C:/Windows/Fonts/arialbd.ttf");
       GuiSetFont(rainFont);


/*char path[512];
strncpy(path, exePath, 512);
char *lastSlash = strrchr(path,'\\');
if(lastSlash) *lastSlash = '\0';

char iconPath[512];
snprintf(iconPath,512,"%s\\icon.png", path);*/

    //rainSetWindowIcon("D:\\projects\\RainEngine dev\\Rain1\\Rain\\RainEngine\\bin\\Debug\\icon\\icon.png");
    //rainSetWindowIcon("icon\\icon.png");
    //rainInitEditor();


   /*Camera3D camera = { 0 };
   camera.position = (Vector3){0.0f,1.0f,6.0f};
   camera.target = (Vector3){0.0f,1.0f,0.0f};
   camera.up = (Vector3){0.0f,1.0f,0.0f};
   camera.fovy = 60.0f;
   camera.projection = CAMERA_PERSPECTIVE;*/

   SetTargetFPS(144);
   /*Font rainFont = LoadFont("C:/Windows/Fonts/arial.ttf");
   GuiSetFont(rainFont*/


   /*setup3d();
   setup2d();*/



    /*while(!WindowShouldClose()) {
        UpdateCamera(&camera,CAMERA_FREE);
        //setCameraStyle(CAMERA_FIRST_PERSON);
         BeginDrawing();
     ClearBackground(RAYWHITE);
         BeginMode3D(camera);





             render3d();
         EndMode3D();
         rainDrawText(1,"BUNA",200,400,BLACK,20.0);
         render2d();
         //editor();
     EndDrawing();




    }
     endthething();
CloseWindow();
CloseAudioDevice();
   return 0;*/
}


int MakeWindowFullScreen() {
    SetConfigFlags(FLAG_BORDERLESS_WINDOWED_MODE);
    InitAudioDevice();
    InitWindow(GetMonitorWidth(0),GetMonitorHeight(0),"MyGame");
    rlEnableDepthTest();

    rainFont = LoadFont("C:/Windows/Fonts/arialbd.ttf");
    GuiSetFont(rainFont);
    SetTargetFPS(144);


}






