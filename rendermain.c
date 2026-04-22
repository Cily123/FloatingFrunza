//copyright(c)2026 Cyli123
//rainPhys v1.0
#define RAYGUI_IMPLEMENTATION
#define library(name)
#define endLibrary

#include "collision.h"
#include "rain.h"

#include <raylib/raygui.h>

#include "FileDialog.h"
#define MAX_OBJS 2000
#define MAX_LIGHT_MAPS 30
//#define rainTransformS(int index,float speed,Vector3 dir)  rainTransformS(int index,float speed,Vector3 dir);
Model mars;
Texture2D marstex;

Model earth;
Texture2D earthtex;
//gravity
int grav;
//Model obj1;
/*Texture2D obj1tex;
Model obj2;
Texture2D obj2tex;
Model obj3;
Texture2D obj3tex;
Model obj4;
Texture2D obj4tex;
Model obj5;
Texture2D obj5tex;
Model obj6;
Texture2D obj6tex;*/





Model objs[MAX_OBJS];
Texture2D objstex[MAX_OBJS];
Vector3 objspos[MAX_OBJS];
Model lightMap;
Texture2D lightMapsTex;


Font rainFont;



typedef struct {
    char objname[32];

}GameObject;

GameObject objects[2000];
int objectCount = 0;
int cubes = 0;


   /*Camera3D camera = { 0 };
   camera.position = (Vector3){0.0f,1.0f,6.0f};
   camera.target = (Vector3){0.0f,1.0f,0.0f};
   camera.up = (Vector3){0.0f,1.0f,0.0f};
   camera.fovy = 60.0f;
   camera.projection = CAMERA_PERSPECTIVE;*/

   //const char* treeitems = "";

/*void setup3d() {

             //mars = LoadModel("D:/projects/RainEngine dev/Rain1/Rain/RainEngine/bin/Debug/JOJO.obj");

     //marstex = LoadTexture("D:/projects/RainEngine dev/Rain1/Rain/RainEngine/bin/Debug/MarsTexture.jpg");

    //mars.materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = marstex;
    rainLoadObj(1,"D:/projects/RainEngine dev/Rain1/Rain/RainEngine/bin/Debug/ohhyeah.glb","D:/projects/RainEngine dev/Rain1/Rain/RainEngine/bin/Debug/MarsTexture.jpg");
    rainLoadObj(2,"D:/projects/RainEngine dev/Rain1/Rain/RainEngine/bin/Debug/door.glb",NULL);
    rainLoadSound(45,"D:/projects/RainEngine dev/Rain1/Rain/RainEngine/bin/Debug/SoundTest.ogg");
    rainLoadImage2d(23,"D:/projects/RainEngine dev/rain1/Rain/RainEngine/bin/Debug/ImageTest.png");
    //rainLoadLightMap("assets/LightMapTest.png");

    rainLoadSkyBox("D:/projects/RainEngine dev/Rain1/Rain/RainEngine/bin/Debug/images.jpg","D:/projects/RainEngine dev/Rain1/Rain/RainEngine/bin/Debug/Sky_def_model.obj");
    rainHideCursor();
    DisableCursor();

       Font rainFont = LoadFont("C:/Windows/Fonts/arial.ttf");
       GuiSetFont(rainFont);


//rainTakeScreenshot("D:/projects/RainEngine dev/Rain1/Rain/RainEngine/bin/Debug/screen.png");
    //rainHideCursor();



}

void render3d() {

   Camera3D camera = { 0 };
   camera.position = (Vector3){0.0f,1.0f,6.0f};
   camera.target = (Vector3){0.0f,1.0f,0.0f};
   camera.up = (Vector3){0.0f,1.0f,0.0f};
   camera.fovy = 60.0f;
   camera.projection = CAMERA_PERSPECTIVE;
   DrawGrid(32,2.6f);



    //rainLoadObj(1,"D:/projects/RainEngine dev/Rain1/Rain/RainEngine/bin/Debug/JOJO.obj","D:/projects/RainEngine dev/Rain1/Rain/RainEngine/bin/Debug/MarsTexture.jpg");
    //DrawModel(mars,(Vector3){0,0,0},1.0f,WHITE);
    rainTransformS(2,1.0f,(Vector3){1,24,0.5f});
    rainDrawModelEx(1,(Vector3){0,0,0},1.0f,WHITE);
    rainDrawModelEx(2,objspos[2],1.0f,WHITE);
    //rainDrawCapsule(white,(Vector3){0,0,0},(Vector3){23,300,10});
    //rainDrawCube(red,(Vector3){0,0,0});
    rainDrawSkyBox(100.0f);
    rainDraw2dModel(23,(Vector3){0,0,0});
    //rainLoadLightMap(1,"LightMapTest.png");
    //rainDrawLightMap();

    /*if(rainisKeyPressed(KEY_SPACE)) rainPlaySound(45);
        if(rainisKeyPressed(KEY_SPACE)) {
        EnableCursor();
    }
    if(IsKeyReleased(KEY_SPACE)) {
        DisableCursor();
    }





}

*/









    //rainTransform(2,1.0f,(Vector3){21,-23,12});





/*
void setup3d() {

             //mars = LoadModel("D:/projects/RainEngine dev/Rain1/Rain/RainEngine/bin/Debug/JOJO.obj");

     //marstex = LoadTexture("D:/projects/RainEngine dev/Rain1/Rain/RainEngine/bin/Debug/MarsTexture.jpg");

    //mars.materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = marstex;
    rainLoadObj(1,"D:/projects/RainEngine dev/Rain1/Rain/RainEngine/bin/Debug/ohhyeah.glb","D:/projects/RainEngine dev/Rain1/Rain/RainEngine/bin/Debug/MarsTexture.jpg");
    rainLoadObj(2,"D:/projects/RainEngine dev/Rain1/Rain/RainEngine/bin/Debug/door.glb",NULL);
    rainLoadSound(45,"D:/projects/RainEngine dev/Rain1/Rain/RainEngine/bin/Debug/SoundTest.ogg");
    rainLoadImage2d(23,"D:/projects/RainEngine dev/rain1/Rain/RainEngine/bin/Debug/ImageTest.png");
    //rainLoadLightMap("assets/LightMapTest.png");

    rainLoadSkyBox("D:/projects/RainEngine dev/Rain1/Rain/RainEngine/bin/Debug/images.jpg","D:/projects/RainEngine dev/Rain1/Rain/RainEngine/bin/Debug/Sky_def_model.obj");
    rainHideCursor();
    DisableCursor();

       Font rainFont = LoadFont("C:/Windows/Fonts/arial.ttf");
       GuiSetFont(rainFont);


//rainTakeScreenshot("D:/projects/RainEngine dev/Rain1/Rain/RainEngine/bin/Debug/screen.png");
    //rainHideCursor();



}*/



int objid;



/*
void render2d() {




}





void setup2d() {
    rainLoadImage2d(1,"D:/projects/RainEngine dev/Rain1/Rain/RainEngine/bin/Debug/ImageTest.png");

}
*/









/*void endthething() {
    UnloadModel(mars);
    UnloadTexture(marstex);
}*/




void MakePlanet(const char* texpath,const char* mshpath) {

    earth = LoadModel(mshpath);
    earthtex = LoadTexture(texpath);


    earth.materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = earthtex;


}


void rainDrawModelEx(int index,Vector3 position,float scale,Color tint) {
if(index < 0 || index >= MAX_OBJS) {
    return;}
    DrawModel(objs[index],position,scale,tint);

}

void rainDrawModel(int index) {
if(index < 0 || index >= MAX_OBJS) {
    return;}
    DrawModel(objs[index],(Vector3){0,0,0},1.0f,WHITE);

}



///1
/*void Loadobj1(const char* msh,const char* tex) {
    obj1 = LoadModel(msh);
    obj1tex = LoadTexture(tex);
    obj1.materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = obj1tex;

}

///2
void Loadobj2(const char* msh,const char* tex) {
    obj2 = LoadModel(msh);
    obj2tex = LoadTexture(tex);
    obj2.materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = obj2tex;

}

///3
void Loadobj3(const char* msh,const char* tex ) {
    obj3 = LoadModel(msh);
    obj3tex = LoadTexture(tex);
    obj3.materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = obj3tex;

}

///4
void Loadobj4(const char* msh,const char* tex) {
    obj4 = LoadModel(msh);
    obj4tex = LoadTexture(tex);
    obj4.materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = obj4tex;

}

///5
void Loadobj5(const char* msh,const char* tex) {
    obj5 = LoadModel(msh);
    obj5tex = LoadTexture(tex);
    obj5.materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = obj5tex;
}

///6
void Loadobj6(const char* msh,const char* tex ) {
    obj6 = LoadModel(msh);
    obj6tex = LoadTexture(tex);
    obj6.materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = obj6tex;
}*/


void rainLoadObj(int index, const char* msh,const char* tex) {
    if(index < 0 || index >= MAX_OBJS)
        return;
    objs[index] = LoadModel(msh);
    objstex[index] = LoadTexture(tex);
    objs[index].materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = objstex[index];
    SetTextureFilter(objstex[index],TEXTURE_FILTER_BILINEAR);
    SetTextureWrap(objstex[index],TEXTURE_WRAP_REPEAT);


}

#define GRAVITY
float acceleration;
float speed;
float press;
float surfacePressGravityMagnetismMagnetic;

float rainTransform(int index,float speed,Vector3 dir) {
    //DrawModel(objs[index],dir,1.0,WHITE);
    objspos[index].x  +=dir.x * speed;
    objspos[index].y  +=dir.y * speed;
    objspos[index].z  +=dir.z * speed;
      if(objspos[index].y < 0) objspos[index].y = 0;
    if(objspos[index].y > 100) objspos[index].y = 100;
    if(objspos[index].x < -100) objspos[index].x = -100;
    if(objspos[index].x > 100) objspos[index].x = 100;
    //DrawModel(objs[index],objspos[index],1.0f,WHITE);


    if (objspos[index].y < 0) {
        objspos[index].y = 0;
        speed = 0; // oprește
    }

    //Physics
    speed +=grav;

    return speed;

}



void rainTransformS(int index,float speed,Vector3 dir) {
    //DrawModel(objs[index],dir,1.0f,WHITE);
    objspos[index].x  =dir.x;
    objspos[index].y  =dir.y;
    objspos[index].z  =dir.z;
      /*if(objspos[index].y < 0) objspos[index].y = 0;
    if(objspos[index].y > 100) objspos[index].y = 100;
    if(objspos[index].x < -100) objspos[index].x = -100;
    if(objspos[index].x > 100) objspos[index].x = 100;
    //DrawModel(objs[index],objspos[index],1.0f,WHITE);*/


}



/**
 ***************************PHYSICS PART***********************************************************************************
 *
 *                      sorry for the stupid architecture
 *
 **************************************************************************************************************************
 */



void setGravity(double force) {

     speed+=force;

}

void rainDrawCube(Color clr,Vector3 pos) {
    DrawCube(pos,1.0f,1.0f,1.0f,clr);

}


void rainDrawSphere(Color clr,Vector3 pos) {
    DrawSphere(pos,1.0f,clr);

}

void rainDrawTriangle() {
    rlBegin(RL_TRIANGLES);
    rlColor3f(1.0f,0.0f,0.0f);
    rlVertex2f(0.0f,-0.0f);
    rlColor3f(0.0f,1.0f,0.0f);
    rlVertex2f(0.5f,-0.5f);
    rlColor3f(0.0f,0.0f,1.0f);
    rlVertex2f(0.25f,-0.25f);
    rlEnd();

}


void rainDrawCapsule(Color clr,Vector3 pos,Vector3 pos2) {
    DrawCapsule(pos,pos2,1.0f,32,32,clr);
}



void rainDrawPlane(Color clr,Vector3 pos,Vector2 scale) {
    DrawPlane(pos,scale,clr);

}

Model SkyBox;
Texture2D SkyTex;



void rainDrawSkyBox(double scale) {
    DrawModel(SkyBox,(Vector3){0,-30,0},scale,WHITE);

}


void rainLoadSkyBox(const char* skytex,const char* skymodel) {
    SkyTex = LoadTexture(skytex);
    SkyBox = LoadModel(skymodel);
    SetMaterialTexture(&SkyBox.materials[0], MATERIAL_MAP_DIFFUSE, SkyTex);
    SetTextureFilter(SkyTex, TEXTURE_FILTER_TRILINEAR);
    SetTextureWrap(SkyTex, TEXTURE_WRAP_REPEAT);

}



void rainLockCursor() {
    HideCursor();
    DisableCursor();
}

void rainUnlockCursor() {
    ShowCursor();
    EnableCursor();
}








void rainMakeEarthPlanet(Vector3 pos){
    earth = LoadModel("D:/projects/RainEngine dev/Rain1/Rain/RainEngine/bin/Debug/earth.glb");
     DrawModel(earth,pos,1.0f,WHITE);

}






void jump(int jumpkey,double gravity32,int w32) {

   Camera3D camera = { 0 };
   camera.position = (Vector3){0.0f,1.0f,6.0f};
   camera.target = (Vector3){0.0f,1.0f,0.0f};
   camera.up = (Vector3){0.0f,1.0f,0.0f};
   camera.fovy = 60.0f;
   camera.projection = CAMERA_PERSPECTIVE;


    if(rainisKeyPressed(jumpkey)) {
        for(int i = 0; i < w32; i++) {
            camera.position.y += 0.9;
        }
        rainWait(gravity32);

        for(int i = 0; i < w32; i++) {
            camera.position.y -= 0.9;
        }
    }
}

Texture2D imgs2d[MAX_IMGS];


void rainDraw2dModel(int index,Vector3 pos32) {
    Camera3D camera = { 0 };
   camera.position = (Vector3){0.0f,1.0f,6.0f};
   camera.target = (Vector3){0.0f,1.0f,0.0f};
   camera.up = (Vector3){0.0f,1.0f,0.0f};
   camera.fovy = 60.0f;
   camera.projection = CAMERA_PERSPECTIVE;

    DrawBillboard(camera,imgs2d[index],pos32,1.0f,WHITE);
}




void rainLoadImage2d(int index,const char* texpth) {
    imgs2d[index] = LoadTexture(texpth);
}

void rainDrawImage2d(int index,int posX,int posY,Color clr) {
    DrawTexture(imgs2d[index],posX,posY,clr);
}




void rainDrawLightMap() {
    BeginBlendMode(BLEND_MULTIPLIED);
    DrawModel(lightMap,(Vector3){0,0,0},1.0f,(Color){255,255,255,120});
    EndBlendMode();
}


/*void rainLoadLightMap(const char* lightmap) {
    lightMap = LoadModel("assets/lightmap.obj");
    lightMapsTex = LoadTexture(lightmap);
    lightMap.materials[1].maps[MATERIAL_MAP_DIFFUSE].texture = lightMapsTex;
}*/


void rainLoadLightMap(const char* lightmapPath,const char* lightmapmodel)
{
    lightMap = LoadModel(lightmapmodel);
    lightMapsTex = LoadTexture(lightmapPath);
    lightMap.materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = lightMapsTex;
}




void rainsetGravity(int nm) {
    nm = grav;
}


bool rainButton(Rectangle area,const char* BTNtext) {
    GuiButton(area,BTNtext);
    return 0;
}

bool rainTextBox(Rectangle area) {
static bool codeeditmode = false;
static char scriptCode[1000000] = "";
bool vr = true;
if(GuiTextBox(area,scriptCode,32,codeeditmode)) {
        codeeditmode = !codeeditmode;
}
return 0;
}



void rainGuiPanel(Rectangle area,const char* caption) {
    GuiPanel(area,caption);
}

bool rainCheckCollisionGrid(pointColl2d a,pointColl2d b) {
    return (a.posx == b.posx &&
            a.posy == b.posy);
}

bool rainCheckCollision(pointTrigger a,pointTrigger b) {
    return (a.posx == b.posx &&
            a.posy == b.posy &&
            a.posz == b.posz);
}

int Ggravity;


void Move(float x,float y,float z) {
    rlTranslatef(x,y,z);
}

void Rotate(float angle,float x,float y,float z) {
    rlRotatef(angle,x,y,z);
}


void Scale(float x,float y,float z) {
    rlScalef(x,y,z);
}


void Splash() {
   static Texture2D image;
   static int loaded = 0;
   static float timer = 0;

   if(!loaded) {
    image = LoadTexture("SplashNormal.png");
    loaded = 1;
   }
   timer +=GetFrameTime();

   DrawTexture(image,GetScreenWidth()/2 - image.width,GetScreenHeight()/2 - image.height,WHITE);
   if(timer > 3.0f) {
    UnloadTexture(image);
   }






}

void SplashPro(const char* img) {
       static Texture2D image;
   static int loaded = 0;
   static float timer = 0;

   if(!loaded) {
    image = LoadTexture(img);
    loaded = 1;
   }
   timer +=GetFrameTime();

   DrawTexture(image,GetScreenWidth()/2 - image.width,GetScreenHeight()/2 - image.height,WHITE);
   if(timer > 3.0f) {
    UnloadTexture(image);
   }

}

void SaveTState() {
    rlPushMatrix();
}


void ResetTState() {
    rlPopMatrix();
}
/*Texture2D VignetteEffect = LoadTexture("Vignette.png");
Texture2D VignetteEffectPro;

void postProcessVignette() {
    DrawTexture(VignetteEffect,GetScreenWidth()/2 - VignetteEffect.width,GetScreenHeight()/2 - VignetteEffect.height,WHITE);
}

void LoadVignetteProTex(const char* img) {
    VignetteEffectPro = LoadTexture(img);
}

void postProcessVignettePro() {
    DrawTexture(VignetteEffectPro,GetScreenWidth()/2 - VignetteEffectPro.width,GetScreenHeight()/2 - VignetteEffectPro.height,WHITE);
}
*/

void DrawLight(Vector3 pos,float intensity,float radius,Color clr) {
    DrawSphere(pos,radius,Fade(clr,intensity));
}

void DrawFloorLight(Vector3 pos,float intensity,float radius,Color clr) {
    DrawPlane(pos,(Vector2){radius,radius},Fade(clr,intensity));
}

void DrawWallLight(Vector3 pos,float intensity,float radius,Color clr) {
    SaveTState();
    Rotate(-90.0f,1.0f,0.0f,0.0f);
    DrawPlane(pos,(Vector2){radius,radius},Fade(clr,intensity));
    ResetTState();
}

Texture2D waterTex;
Model WaterMdl;

void InitWater() {

    Mesh watermsh = GenMeshPlane(1.0f,1.0f,1,1);

    waterTex = LoadTexture("Water.png");
    WaterMdl = LoadModelFromMesh(watermsh);

    WaterMdl.materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = waterTex;
    SetTextureWrap(waterTex,TEXTURE_WRAP_REPEAT);
    SetTextureFilter(waterTex,TEXTURE_FILTER_BILINEAR);
}


void DrawWater(Vector3 pos,float scale32) {
    DrawModel(WaterMdl,pos,scale32,WHITE);
}



void InitWaterPro(const char* tex) {

    Mesh watermsh = GenMeshPlane(1.0f,1.0f,1,1);
    waterTex = LoadTexture(tex);
    WaterMdl = LoadModelFromMesh(watermsh);

    WaterMdl.materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = waterTex;
    SetTextureWrap(waterTex,TEXTURE_WRAP_REPEAT);
    SetTextureFilter(waterTex,TEXTURE_FILTER_BILINEAR);

}

Model LavaMdl;
Texture2D LavaTex;

void InitLava() {

    Mesh lavamsh = GenMeshPlane(1.0f,1.0f,1,1);
    waterTex = LoadTexture("Lava.png");
    LavaMdl = LoadModelFromMesh(lavamsh);

    LavaMdl.materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = LavaTex;
    SetTextureWrap(LavaTex,TEXTURE_WRAP_REPEAT);
    SetTextureFilter(LavaTex,TEXTURE_FILTER_BILINEAR);
}


void DrawLava(Vector3 pos,float scale32) {
    DrawModel(LavaMdl,pos,scale32,WHITE);
}



void InitLavaPro(const char* tex) {

    Mesh Lavamsh = GenMeshPlane(1.0f,1.0f,1,1);
    LavaTex = LoadTexture(tex);
    LavaMdl = LoadModelFromMesh(Lavamsh);

    LavaMdl.materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = LavaTex;
    SetTextureWrap(LavaTex,TEXTURE_WRAP_REPEAT);
    SetTextureFilter(LavaTex,TEXTURE_FILTER_BILINEAR);
}



void DrawAtmosphere(Vector3 pos,float radius,float thickness,Color clr) {
    float finalAtmoRadius = radius * (1.0f + thickness);

    float alpha = thickness;
    if (alpha > 1.0f) {
        alpha = 1.0f;
    }

    if (alpha < 0.0f) {
        alpha = 0.0f;
    }


    rlDisableBackfaceCulling();
    BeginBlendMode(BLEND_ADDITIVE);
    DrawSphere(pos,radius,Fade(clr,thickness));
    EndBlendMode();
    rlEnableBackfaceCulling();

}


void DrawPlanetWater(Vector3 pos,float radius) {


    DrawSphere(pos,radius,BLUE);
}

Texture2D AtmoCloudsTex;
Model AtmoCloudMdl;

void InitAtmosphereWithClouds(const char* CloudTex) {
    Mesh atmo = GenMeshSphere(1.0f,50,50);
    AtmoCloudsTex = LoadTexture(CloudTex);
    AtmoCloudMdl = LoadModelFromMesh(atmo);
    AtmoCloudMdl.materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = AtmoCloudsTex;

}


void DrawAtmosphereWithClouds(Vector3 pos,float radius,float thickness,Color clr) {
    float finalAtmoRadius = radius * (1.0f + thickness);

    float alpha = thickness;
    if (alpha > 1.0f) {
        alpha = 1.0f;
    }

    if (alpha < 0.0f) {
        alpha = 0.0f;
    }

    rlDisableBackfaceCulling();
    BeginBlendMode(BLEND_ADDITIVE);
    DrawModel(AtmoCloudMdl,pos,finalAtmoRadius,Fade(clr,thickness));
    EndBlendMode();
    rlEnableBackfaceCulling();
}


/*Mesh gasGiants[50]
Texture2D gasGiantsTex[50];
Model gasGiantsmdl[50];

void InitGasGiant(int index,const char* tex) {
    gasGiants[index] =
}*/



int getMouseYpos() {
    return GetMouseY();
}

int getMouseXpos() {
    return GetMouseX();
}


Model mapMdl;
Texture2D mapTex;


void LoadMap(const char* mdl,const char* tex) {
    mapMdl = LoadModel(mdl);
    mapTex = LoadTexture(tex);
    SetMaterialTexture(&mapMdl.materials[0],MATERIAL_MAP_DIFFUSE,mapTex);



}

void DrawMap(Vector3 pos,float scale) {
    DrawModel(mapMdl,pos,scale,WHITE);
}


Model ShadowMap;
Texture2D ShadowMapTex;

void LoadShadowMap(const char* tex) {
    Mesh mesh = GenMeshPlane(1.0f,1.0f,1,1);
    ShadowMap = LoadModelFromMesh(mesh);
    ShadowMapTex = LoadTexture(tex);
    SetMaterialTexture(&ShadowMap.materials[0],MATERIAL_MAP_DIFFUSE,ShadowMapTex);

}


void DrawShadowMap(Vector3 pos,float scale) {
    DrawModel(ShadowMap,pos,scale,WHITE);
}


Model ReflectionMap;
Texture2D ReflectionMapTex;

void LoadReflexionMap(const char* tex) {
    Mesh mesh = GenMeshPlane(1.0f,1.0f,1,1);
    ShadowMap = LoadModelFromMesh(mesh);
    ShadowMapTex = LoadTexture(tex);
    SetMaterialTexture(&ReflectionMap.materials[0],MATERIAL_MAP_DIFFUSE,ReflectionMapTex);

}


void DrawReflexionMap(Vector3 pos,float scale) {
    DrawModel(ReflectionMap,pos,scale,WHITE);
}



Model Clouds;
Texture2D CloudsTex;


void LoadCloudTexture(const char* tex) {
    Mesh mesh = GenMeshPlane(1.0f,1.0f,1,1);
    Clouds = LoadModelFromMesh(mesh);
    CloudsTex = LoadTexture(tex);
    SetMaterialTexture(&Clouds.materials[0],MATERIAL_MAP_DIFFUSE,CloudsTex);
}


void DrawClouds(float scale) {
    rlDisableBackfaceCulling();
    DrawModel(Clouds,(Vector3){0,230,0},scale,WHITE);
    rlEnableBackfaceCulling();
}




void DrawSun(Color clr) {
    DrawSphere((Vector3){0,350,0},2.5f,clr);
}


Texture2D moonTex;
Model moonMdl;

void InitMoon(const char* tex) {
    Mesh mesh = GenMeshSphere(1.0f,64,32);
    moonMdl = LoadModelFromMesh(mesh);
    moonTex = LoadTexture(tex);
    SetMaterialTexture(&moonMdl.materials[0],MATERIAL_MAP_DIFFUSE,moonTex);

}





void DrawMoon() {
    DrawModel(moonMdl,(Vector3){0,300,0},3.0f,WHITE);
}





void rainDrawCircle(Vector3 pos,float radius,Color clr) {
    DrawCircle3D(pos,radius,(Vector3){0,1,0},0.0f,clr);


}


void DrawPlanetLava(Vector3 pos,float scale) {
    DrawSphere(pos,scale,ORANGE);
}


void DrawRadioActivePlanetAcid(Vector3 pos,float radius) {
    BeginBlendMode(BLEND_ADDITIVE);
    DrawSphere(pos,radius,(Color){0, 228, 48, 250});
    EndBlendMode();
}


void DrawPlanetAcid(Vector3 pos,float radius) {
    DrawSphere(pos,radius,LIME);
}







Texture2D SpacemoonTex;
Model SpacemoonMdl;

void InitSpaceMoon(const char* tex) {
    Mesh mesh = GenMeshSphere(1.0f,64,32);
    SpacemoonMdl = LoadModelFromMesh(mesh);
    SpacemoonTex = LoadTexture(tex);
    SetMaterialTexture(&SpacemoonMdl.materials[0],MATERIAL_MAP_DIFFUSE,SpacemoonTex);

}





void DrawSpaceMoon(Vector3 pos,float scale) {
    DrawModel(SpacemoonMdl,pos,scale,WHITE);
}


void DrawSpaceSun(Vector3 pos,float scale,Color clr) {
    BeginBlendMode(BLEND_ADDITIVE);
    DrawSphere(pos,scale,clr);
    EndBlendMode();
}

void rainGetScreenHeight() {
    GetScreenHeight();
}

void rainGetScreenWidth() {
    GetScreenWidth();
}
void rainTextLabel(int x,int y,float xs,float ys,const char* text) {
    GuiLabel((Rectangle){x,y,xs,ys},text);
}

void rainUnloadModel(int index) {
    UnloadModel(objs[index]);
}

void rainUnloadModelTexture(int index) {
    UnloadTexture(objstex[index]);
}

void rainUnloadImage2d(int index) {
    UnloadTexture(imgs2d[index]);
}

endLibrary

