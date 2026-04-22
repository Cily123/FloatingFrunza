//copyright(c)2026 Cyli123
#ifndef AUDIO_H_INCLUDED
#define AUDIO_H_INCLUDED

void rainLoadSound(int index,const char* soundsource);
void rainPlaySound(int index);
void rainLoadMusic(int index,const char* musicsource);
void rainPlayMusic(int index);
void rainStopMusic(int index);
void rainStopSound(int index);
void rainUnloadMusic(int index);
void rainUnloadSound(int index);
#endif // AUDIO_H_INCLUDED
