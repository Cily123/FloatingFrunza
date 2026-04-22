//copyright(c)2026 Cyli123
#include "rain.h"

void rainSetWindowIcon(const char* iconimg) {
    Image winicon = LoadImage(iconimg);
    SetWindowIcon(winicon);
}
