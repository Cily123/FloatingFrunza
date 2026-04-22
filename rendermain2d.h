//copyright(c)2026 Cyli123
#ifndef RENDERMAIN2D_H_INCLUDED
#define RENDERMAIN2D_H_INCLUDED

void render2d();
void setup2d();
void rainLoadImage2d(int index,const char* texpth);
void rainDrawImage2d(int index,int posX,int posY,Color clr);
void rainDraw2dModel(int index,Vector3 pos32);
void showFps(int posx,int posy);
void rainHideCursor();
void rainShowCursor();
void rainDrawGrid();
void rainDrawGridPro(int s,float sp);

#endif // RENDERMAIN2D_H_INCLUDED
