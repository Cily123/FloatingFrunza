//copyright(c)2026 Cyli123
#ifndef COLLISION_H_INCLUDED
#define COLLISION_H_INCLUDED
#include <stdbool.h>
#include <raylib/raylib.h>

bool rainCollisonBox(BoundingBox a,BoundingBox b);
BoundingBox rainGetObjBoundingBox(int index);



/*typedef struct {
    int posx;
    int posy;
    int posz;
    int scalex;
    int scaley;
    int scalez;

}Boxcollider;*/

typedef struct {
    int posx;
    int posy;
    int posz;
}pointTrigger;




typedef struct {
    int posx;
    int posy;
}pointColl2d;

typedef struct {
    int posx;
    int posy;
    int scalex;
    int scaley;
}squareColl;


typedef BoundingBox ColliderBox;

bool MeshColisionBox(BoundingBox o1,BoundingBox o2);
ColliderBox CreateBoxCollider(Vector3 pos,Vector3 sz);

#endif // COLLISION_H_INCLUDED
