//copyright(c)2026 Cyli123
//supported formats: .wav, .ogg
#include "rain.h"

#define MAX_SOUNDS 100
#define MAX_MUSICS 4

Sound sounds[MAX_SOUNDS];
Music musics[MAX_MUSICS];

void rainLoadSound(int index,const char* soundsource) {

     sounds[index] = LoadSound(soundsource);

}


void rainPlaySound(int index) {
    PlaySound(sounds[index]);

}



void rainLoadMusic(int index,const char* musicsource) {
    musics[index] = LoadMusicStream(musicsource);
}

void rainPlayMusic(int index) {
    PlayMusicStream(musics[index]);
}

void rainStopSound(int index) {
    StopSound(sounds[index]);
}


void rainStopMusic(int index) {
    StopMusicStream(musics[index]);
}


void rainUnloadMusic(int index) {
    UnloadMusicStream(musics[index]);
}

void rainUnloadSound(int index) {
    UnloadSound(sounds[index]);
}
