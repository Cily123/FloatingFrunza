#include "rain.h"


Texture2D ExplosionTex;
float ExplosionScale = 0.2;

void InitExplosion() {
    ExplosionTex = LoadTexture("Explosion.png");
}

void InitExplosionPro(const char* tex) {
    ExplosionTex = LoadTexture(tex);
}




void UpdateExplosion(float deltaTime) {
    ExplosionScale +=0.2 * deltaTime;
}


void DrawExplosion(int posx,int posy) {
    SaveTState();
    Scale(ExplosionScale,ExplosionScale,1.0f);
    DrawTexture(ExplosionTex,posx -  ExplosionTex.width / 2,posy - ExplosionTex.height / 2,WHITE);
    ResetTState();
}

void EndExplosion(float timeToWait) {
    WaitTime(timeToWait);
    UnloadTexture(ExplosionTex);
}




Model FireMdl;
Texture2D FireTex;

void InitFire() {
    Mesh Fire = GenMeshPlane(1.0f,1.0f,1,1);
    FireTex = LoadTexture("Fire.png");
    FireMdl = LoadModelFromMesh(Fire);
    SetMaterialTexture(&FireMdl.materials[0],MATERIAL_MAP_DIFFUSE,FireTex);
}

void InitFirePro(const char* tex) {
    Mesh Fire = GenMeshPlane(1.0f,1.0f,1,1);
    FireTex = LoadTexture(tex);
    FireMdl = LoadModelFromMesh(Fire);
    SetMaterialTexture(&FireMdl.materials[0],MATERIAL_MAP_DIFFUSE,FireTex);
}



void DrawFire(Vector3 pos,float scale) {
    SaveTState();
    Rotate(-90.0f,1.0f,0.0f,0.0f);
    DrawModel(FireMdl,pos,scale,WHITE);
    ResetTState();
}

void DrawFireBlue(Vector3 pos,float scale) {
    SaveTState();
    Rotate(-90.0f,1.0f,0.0f,0.0f);
    DrawModel(FireMdl,pos,scale,SKYBLUE);
    ResetTState();
}


void DrawFireGreen(Vector3 pos,float scale) {
    SaveTState();
    Rotate(-90.0f,1.0f,0.0f,0.0f);
    DrawModel(FireMdl,pos,scale,GREEN);
    ResetTState();
}

Model RocketSmoke;
Texture RocketSmokeTex;

void InitRocketSmoke() {
    Mesh smoke = GenMeshCylinder(1.0f,2.0f,32);
    RocketSmokeTex = LoadTexture("RocketSmoke.png");
    RocketSmoke = LoadModelFromMesh(smoke);
    SetMaterialTexture(&RocketSmoke.materials[0],MATERIAL_MAP_DIFFUSE,RocketSmokeTex);


}

void InitRocketSmokePro(const char* tex) {
    Mesh smoke = GenMeshCylinder(1.0f,2.0f,32);
    RocketSmokeTex = LoadTexture(tex);
    RocketSmoke = LoadModelFromMesh(smoke);
    SetMaterialTexture(&RocketSmoke.materials[0],MATERIAL_MAP_DIFFUSE,RocketSmokeTex);
}


void DrawRocketSmoke() {
    DrawModel(RocketSmoke,(Vector3){0,0,0},1.0f,WHITE);
}


Model smokeMdl;
Texture2D smokeTex;

void InitSmoke() {
    Mesh smoke = GenMeshPlane(1.0f,1.0f,1,1);
    smokeTex = LoadTexture("smoke.png");
    smokeMdl = LoadModelFromMesh(smoke);
    SetMaterialTexture(&smokeMdl.materials[0],MATERIAL_MAP_DIFFUSE,smokeTex);
}

void InitSmokePro(const char* tex) {
    Mesh smoke = GenMeshPlane(1.0f,1.0f,1,1);
    smokeTex = LoadTexture(tex);
    smokeMdl = LoadModelFromMesh(smoke);
    SetMaterialTexture(&smokeMdl.materials[0],MATERIAL_MAP_DIFFUSE,smokeTex);
}

void InitSmokeProSphere(const char* tex) {
    Mesh smoke = GenMeshSphere(1.0f,32,32);
    smokeTex = LoadTexture(tex);
    smokeMdl = LoadModelFromMesh(smoke);
    SetMaterialTexture(&smokeMdl.materials[0],MATERIAL_MAP_DIFFUSE,smokeTex);
}



void DrawSmoke(Vector3 pos,float scale) {
    SaveTState();
    Rotate(-90.0f,1.0f,0.0f,0.0f);
    DrawModel(smokeMdl,pos,scale,Fade(WHITE,0.89));
    ResetTState();
}

Texture2D cleanSparklesTex;

void InitCleanSparkles() {
    cleanSparklesTex = LoadTexture("CleanSparkles.png");
}


void DrawCleanSparkles(int posX,int posY) {
    DrawTexture(cleanSparklesTex,posX,posY,WHITE);
}
