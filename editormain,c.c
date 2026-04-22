
#define RAYGUI_IMPLEMENTATION

#define MAX_LINES 999999
#define MAX_SIZE 256
#define SCRIPT_BUFFER_SIZE 1000000

#include "rain.h"
#include "FileDialog.h"

#include <raylib/raygui.h>



bool GuiTextBoxMulti(Rectangle bounds, char *text, int bufferSize, bool editMode);
//void ScriptEditor(Rectangle view);




void RunEditor() {
    static bool codeeditmode = false;
    static char scriptCode[1000000] = "";
    bool vr = true;
    Viewport();
    int w32h = GetScreenHeight();
    GuiPanel((Rectangle){0,0,300,w32h},"main");
    EditorFeaturesMain();
    //GuiButton((Rectangle){10,30,50,30},"Save");
    //GuiCheckBox((Rectangle){50,50,20,20},"I dont know",&vr);
    //ScriptEditor((Rectangle){30,0,300,300});
    /*if(GuiTextBox((Rectangle){30,0,300,300},scriptCode,32,codeeditmode)) {
        codeeditmode = !codeeditmode;

    }*/



}


void Viewport() {
    if(IsMouseButtonDown(MOUSE_BUTTON_RIGHT)) {
        HideCursor();
    }
    if(IsMouseButtonReleased(MOUSE_BUTTON_RIGHT)) {
        ShowCursor();
    }

}

void EditorFeaturesMain() {
    if(GuiButton((Rectangle){10,30,81,30},"#008#Load Mesh")) {
        editorSceneInteractions();
        //rainOpenFileDialog("*.c");

        //rainPlaySound(45);
    }
}

/*void editorSceneInteractions() {
    if(GuiButton((Rectangle){10,30,70,30},"Make Cube")) {
    CubeCreated = true;
    }
}*/


bool GuiTextBoxMulti(Rectangle bounds, char *text, int bufferSize, bool editMode)
{
    bool pressed = false;

    GuiSetStyle(TEXTBOX, TEXT_ALIGNMENT_VERTICAL, 1);
    //GuiSetStyle(TEXTBOX, TEXT_MULTILINE, 1);

    // TODO: Implement methods to calculate cursor position properly
    pressed = GuiTextBox(bounds, text, bufferSize, editMode);

    //GuiSetStyle(TEXTBOX, TEXT_MULTILINE, 0);
    GuiSetStyle(TEXTBOX, TEXT_ALIGNMENT_VERTICAL, 0);

    return pressed;
}

