//copyright(c)2026 Cyli123
#ifndef RENDERMAIN_H_INCLUDED
#define RENDERMAIN_H_INCLUDED
#include "collision.h"

#define EARTHGRAVITY 9
#define MOONGRAVITY 1
#define MARSGRAVITY 3
#define JUPITERGRAVITY 24

void render3d();
void setup3d();


void endthething();

void rainDrawModelEx(int index,Vector3 position,float scale,Color tint);
void rainDrawModel(int index);
void rainLoadObj(int index,const char* msh,const char* tex);
void MakePlanet(const char* texpath,const char* mshpath);
/*void Loadobj2(const char* msh,const char* tex);
void Loadobj3(const char* msh,const char* tex );
void Loadobj4(const char* msh,const char* tex);
void Loadobj5(const char* msh,const char* tex);
void Loadobj6(const char* msh,const char* tex );*/
float rainTransform(int index,float speed,Vector3 dir);
void rainTransformS(int index,float speed,Vector3 dir);
void setGravity(double force);
void rainDrawCube(Color clr,Vector3 pos);
void rainDrawCapsule(Color clr,Vector3 pos,Vector3 pos2);
void rainDrawTriangle();
void rainDrawSphere(Color clr,Vector3 pos);
void rainDrawPlane(Color clr,Vector3 pos,Vector2 scale);
void rainCreateSkyBox(const char* img,double scale);
void rainDrawSkyBox(double scale);
void rainLoadSkyBox(const char* skytex,const char* skymodel);
void rainLockCursor();
void rainUnlockCursor();
void rainMakeEarthPlanet(Vector3 pos);
void jump(int jumpkey,double gravity32,int w32);
void rainDrawLightMap();
void rainLoadLightMap(const char* lightmapPath,const char* lightmapmodel);
void rainsetGravity(int nm);
bool rainButton(Rectangle area,const char* BTNtext);
bool rainTextBox(Rectangle area);
void rainGuiPanel(Rectangle area,const char* caption);
bool rainCheckCollisionGrid(pointColl2d a,pointColl2d b);
bool rainCheckCollision(pointTrigger a,pointTrigger b);
void Move(float x,float y,float z);
void Rotate(float angle,float x,float y,float z);
void Scale(float x,float y,float z);
void Splash();
void SplashPro(const char* img);
void SaveTState();
void ResetTState();
/*void postProcessVignette();
void postProcessVignettePro()
void LoadVignetteProTex(const char* img);*/
void DrawLight(Vector3 pos,float intensity,float radius,Color clr);
void DrawFloorLight(Vector3 pos,float intensity,float radius,Color clr);
void InitWater();
void DrawWater(Vector3 pos,float scale32);
void InitWaterPro(const char* tex);
void InitLava();
void InitLavaPro(const char* tex);
void DrawLava(Vector3 pos,float scale32);
void DrawAtmosphere(Vector3 pos,float radius,float thickness,Color clr);
void InitAtmosphereWithClouds(const char* CloudTex);
void DrawAtmosphereWithClouds(Vector3 pos,float radius,float thickness,Color clr);
int getMouseXpos();
int getMouseYpos();
void LoadMap(const char* mdl,const char* tex);
void DrawMap(Vector3 pos,float scale);
void LoadShadowMap(const char* tex);
void DrawShadowMap(Vector3 pos,float scale);
void LoadReflexionMap(const char* tex);
void DrawReflexionMap(Vector3 pos,float scale);
void LoadCloudTexture(const char* tex);
void DrawClouds(float scale);
void DrawSun(Color clr);
void InitMoon(const char* tex);
void DrawMoon();
void rainDrawCircle(Vector3 pos,float radius,Color clr);
void DrawPlanetLava(Vector3 pos,float scale);
void DrawRadioActivePlanetAcid(Vector3 pos,float radius);
void DrawPlanetAcid(Vector3 pos,float radius);
void InitSpaceMoon(const char* tex);
void DrawSpaceMoon(Vector3 pos,float scale);
void DrawSpaceSun(Vector3 pos,float scale,Color clr);
void DrawWallLight(Vector3 pos,float intensity,float radius,Color clr);
void rainGetScreenHeight();
void rainGetScreenWidth();
void rainUnloadModel();
void rainUnloadModelTexture(int index);
void rainUnloadImage2d(int index);






#endif // RENDERMAIN_H_INCLUDED
