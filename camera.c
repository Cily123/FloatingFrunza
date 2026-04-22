//copyright(c)2026 Cyli123
#include "rain.h"

#define FIRSTPERSON CAMERA_FIRST_PERSON
#define THIRDPERSON CAMERA_THIRD_PERSON
#define ORBITCAMERA CAMERA_ORBITAL
#define EXPLORERCAMERA CAMERA_FREE
#define FLY_CAMERA CAMERA_FREE




void setCameraStyle(int mode) {

   Camera3D camera = { 0 };
   camera.position = (Vector3){0.0f,1.0f,6.0f};
   camera.target = (Vector3){0.0f,1.0f,0.0f};
   camera.up = (Vector3){0.0f,1.0f,0.0f};
   camera.fovy = 60.0f;
   camera.projection = CAMERA_PERSPECTIVE;
   BoundingBox playerColl = {
    (Vector3){camera.position.x - 0.3f, camera.position.y - 0.5f, camera.position.z - 0.3f},
    (Vector3){camera.position.x + 0.3f, camera.position.y + 0.5f, camera.position.z + 0.3f}
};

if(mode == FIRSTPERSON) {
    HideCursor();
}
    return UpdateCamera(&camera,mode);
}
