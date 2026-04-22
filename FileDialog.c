#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <commdlg.h>
#include "FileDialog.h"


char resFileName[MAX_FILENAME];
const char* rainOpenFileDialog(const char* filter)
{
    //static char filename[MAX_PATH] = "";
    OPENFILENAMEA ofn = {0};

    ofn.lStructSize = sizeof(OPENFILENAMEA);
    ofn.hwndOwner = GetActiveWindow();
    ofn.lpstrFile = resFileName;
    ofn.nMaxFile = MAX_FILENAME;
    ofn.lpstrFilter = filter;
    ofn.nFilterIndex = 1;
    ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;

    if(GetOpenFileNameA(&ofn)) {
        return resFileName;
    }
    return NULL;
}
