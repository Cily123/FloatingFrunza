#include <stdio.h>
#define library(name)
#define endLibrary


library(rain::debug::log)
void debug_log(const char* log) {
    printf("LOG: %s\n", log);
}

endLibrary

library(rain::debug::warn)
void debug_warning(const char* warn) {
    printf("WARNING: %s\n",warn);
}


endLibrary

library(rain::debug::error)
void debug_error(const char* err)  {
    printf("ERROR: %s\n",err);
}


endLibrary


library(rain::debug::suggestion)

void debug_suggestion(const char* suggestion) {
    printf("SUGGESTION: %s\n",suggestion);
}

endLibrary


library(rain::debug::print)

void printText(const char* text) {
    printf("%s\n",text);
}
endLibrary
