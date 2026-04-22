//copyright(c)2026 Cyli123
#ifndef INPUT_H_INCLUDED
#define INPUT_H_INCLUDED

#define KEYQ KEY_Q
#define KEYW KEY_W
#define KEYE KEY_E
#define KEYR KEY_R
#define KEYT KEY_T
#define KEYY KEY_Y
#define KEYU KEY_U
#define KEYI KEY_I
#define KEYO KEY_O
#define KEYP KEY_P
#define KEYA KEY_A
#define KEYS KEY_S
#define KEYD KEY_D
#define KEYF KEY_F
#define KEYG KEY_G
#define KEYH KEY_H
#define KEYJ KEY_J
#define KEYK KEY_K
#define KEYL KEY_L
#define KEYZ KEY_Z
#define KEYX KEY_X
#define KEYC KEY_C
#define KEYV KEY_V
#define KEYB KEY_B
#define KEYN KEY_N
#define KEYM KEY_M
#define KEYSPACE KEY_SPACE





bool rainisKeyHold(int key);
bool rainisKeyPressed(int key);
bool rainIsMouseButton(int btn);
bool rainIsMouseButtonPressed(int btn);
bool rainIsMouseButtonUp(int btn);
bool rainIfKeyReleased(int key);

#endif // INPUT_H_INCLUDED

