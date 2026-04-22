#ifndef SPECIALEFFECTS_H_INCLUDED
#define SPECIALEFFECTS_H_INCLUDED

void InitExplosion();
void InitExplosionPro(const char* tex);
void DrawExplosion(int posx,int posy);
void EndExplosion(float timeToWait);
void InitFire();
void InitFirePro(const char* tex);
void DrawFire(Vector3 pos,float scale);
void DrawFireBlue(Vector3 pos,float scale);
void DrawFireGreen(Vector3 pos,float scale);
void InitRocketSmoke();
void InitRocketSmokePro(const char* tex);
void DrawRocketSmoke();
void InitSmoke();
void InitSmokePro(const char* tex);
void InitSmokeProSphere(const char* tex);
void DrawSmoke(Vector3 pos,float scale);
void InitCleanSparkles();
void DrawCleanSparkles(int posX,int posY);

#endif // SPECIALEFFECTS_H_INCLUDED
