//copyright(c)2026 Cyli123
#include "rain.h"
#include <stdbool.h>








bool rainisKeyHold(int key) {
    return IsKeyDown(key);
}

bool rainisKeyPressed(int key) {
    return IsKeyPressed(key);
}


bool rainIsMouseButton(int btn) {
    return IsMouseButtonDown(btn);
}


bool rainIsMouseButtonPressed(int btn) {
    return IsMouseButtonPressed(btn);
}

bool rainIsMouseButtonUp(int btn) {
    return IsMouseButtonReleased(btn);
}


bool rainIfKeyReleased(int key) {
    return IsKeyReleased(key);
}


