//copyright(c)2026 Cyli123
#include "rain.h"
#include "collision.h"
#include "rendermain.h"
#include <math.h>





bool rainCollisonBox(BoundingBox a,BoundingBox b) {
    return (a.min.x <= b.max.x && a.max.x >= b.min.x &&
            a.min.y <= b.max.y && a.max.y >= b.min.y &&
            a.min.z <= b.max.z && a.max.z >= b.min.z);
}


BoundingBox rainGetObjBoundingBox(int index)
{
    BoundingBox box = GetModelBoundingBox(objs[index]);
    BoundingBox worldBox = {
        Vector3Add(box.min, objspos[index]),
        Vector3Add(box.max, objspos[index])
    };
    return worldBox;
}


/*typedef struct {
    int posx;
    int posy;
    int posz;
    int scalex;
    int scaley;
    int scalez;

}Boxcollider;

typedef struct {
    int posx;
    int posy;
    int posz;
}pointColl;


typedef struct {
    int posx;
    int posy;
}pointcoll2d;

typedef struct {
    int posx;
    int posy;
    int scalex;
    int scaley;
}squareColl;*/



bool IfPointTriggerColl(pointTrigger plr, pointTrigger obj) {
    return (plr.posx == obj.posx &&
            plr.posy == obj.posy &&
            plr.posz == obj.posz);
}


typedef struct {
    float x;
    float y;
    float z;


    float velx;
    float vely;
    float velz;

    int life;

}particles;



bool MeshColisionBox(BoundingBox o1,BoundingBox o2) {
    return CheckCollisionBoxes(o1,o2);
}

ColliderBox CreateBoxCollider(Vector3 pos,Vector3 sz) {
    Vector3 half  = Vector3Scale(sz,0.5f);

    return (ColliderBox){
        Vector3Subtract(pos,half),
        Vector3Add(pos,half)
    };
}
