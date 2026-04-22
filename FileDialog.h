#ifndef FILEDIALOG_H_INCLUDED
#define FILEDIALOG_H_INCLUDED
#define MAX_FILENAME 260


//char resFileName[MAX_PATH] = "";
const char* rainOpenFileDialog(const char* filter);
extern char resFileName[MAX_FILENAME];



#endif // FILEDIALOG_H_INCLUDED
