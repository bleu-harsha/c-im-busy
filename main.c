
/*
 _________     .__ /\          ___.                           
 \_   ___ \    |__|\(_____     \_ |__   __ __  ______ ___.__. 
 /    \  \/    |  | /     \     | __ \ |  |  \/  ___/<   |  | 
 \     \____   |  ||  Y Y  \    | \_\ \|  |  /\___ \  \___  | 
  \______  /   |__||__|_|  /    |___  /|____//____  > / ____| 
         \/              \/         \/            \/  \/     

 C-im-busy: source code for a terminal app that sets the scene.
 A vibe. A mood. A whole cinematic presence.
*/

#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <string.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

const char *COLOR_RESET = "\033[0m";
const char *COLOR_GREEN = "\033[1;32m";
const char *COLOR_YELLOW = "\033[1;33m";
const char *COLOR_CYAN = "\033[1;36m";
const char *COLOR_MAGENTA = "\033[1;35m";
const char *COLOR_BLUE = "\033[1;34m";

// Declare functions before using them
void printhelp(int reason);
int cdonut();

int main() {
    char command[64];
    scanf("%s", command);

    if (strcmp(command, "help") == 0 || strcmp(command, "-h") == 0) {
        printhelp(0);
    } else {
        printf("Unknown command: %s\n", command);
    }
  if (strcmp(command, "cdonut") == 0)
    cdonut();
  else
    return 0;
}

// Print help messages
void printhelp(int reason) { 
    //reason 0 displays the def command's help
    //reason 1 displays cmatrix command's help
    //reason 2 displays cdonut command's help
    //reason 4 displays random command's help
    //reason 5 displays ascii-anim command's help

  if (reason == 0) {
        printf("\033[1;32m"); // Green
        printf(" _________     .__ /\\          ___.                           \n");
        printf(" \\_   ___ \\    |__|\\(_____     \\_ |__   __ __  ______ ___.__. \n");
        printf(" /    \\  \\/    |  | /     \\     | __ \\ |  |  \\/  ___/<   |  | \n");
        printf(" \\     \\____   |  ||  Y Y  \\    | \\_\\ \\|  |  /\\___ \\  \\___  | \n");
        printf("  \\______  /   |__||__|_|  /    |___  /|____//____  > / ____| \n");
        printf("         \\/              \\/         \\/            \\/  \\/     \n");
        printf("\033[0m");

        printf("\033[1;33mAvailable commands:\033[0m\n");
        printf("• help                       displays this message\n");
        printf("• cmatrix                    displays the classic cmatrix\n");
        printf("• cdonut                     displays the rotating donut\n");
        printf("• random                     chooses a random command and executes\n");
        printf("• ascii-anim                 displays ascii animations from ascii.co.uk\n");
        printf("•")
        printf("\033[1;33mUse: cimbusy <command> help to know more off the commands and usage\033[0m\n");
    }


else if (reason == 1){
    printf("\033[1;36m");
    printf("  ______     __    __     ______     ______   ______     __     __  __    \n");
    printf(" /\\  ___\\   /\\ \"-./  \\   /\\  __ \\   /\\__  _\\ /\\  == \\   /\\ \\   /\\_\\_\\_\\   \n");
    printf(" \\ \\ \\____  \\ \\ \\-./\\ \\  \\ \\  __ \\  \\/_\\ \\ \\/ \\ \\  __<   \\ \\ \\  \\/_\\_\\/\\_  \n");
    printf("  \\ \\_____\\  \\ \\_\\ \\ \\_\\  \\ \\_\\ \\_\\    \\ \\_\\  \\ \\_\\ \\_\\  \\_\\   /\\_\\/\\_\\ \n");
    printf("   \\/_____/   \\/_/  \\/_/   \\/_/\\/_/     \\/_/   \\/_/ /_/   \\/_/   \\/_/\\/_/\n");
    printf("\033[0m\n");

    printf("\033[1;36mCommands:\033[0m\n");
    printf("• speed            Adjust the speed of the characters.\n");
    printf("• color            Set output color (terminal color name or hex code).\n");
    printf("• japanese         Enables original Matrix-style katakana characters.\n");
    printf("• rainbow          Enable rainbow color cycling mode.\n");
    printf("• bold             Use bold characters in the output.\n");
    printf("• reverse          Characters go up instead of down (reverse scroll).\n");
    printf("• screensaver      Launch in fullscreen / screensaver mode.\n");
    printf("• lock             Lock terminal with Matrix effect (like a screensaver).\n");

    printf("\n\033[1;36mFlags (use with commands above):\033[0m\n");
    printf("• -slow            Slow character fall speed.\n");
    printf("• -mid             Medium speed (default).\n");
    printf("• -fast            Fast scroll speed.\n");
    printf("• -nobold          Force disable bold characters.\n");
    printf("• -color <value>   Specify color. e.g., green, red, blue, or hex like #00ff00.\n");
    printf("• -curses          Use ncurses compatibility mode.\n");
    printf("• -x, -y <int>     Set screen width/height manually (if needed).\n");
    printf("• -fps <value>     Set frames per second (custom framerate).\n");
}
  else if (reason == 2){
    printf("\033[1;35m  ,gggg,                                                          \n");
    printf(",88\"\"\"Y8b,        8I                                         I8   \n");
    printf("d8\"     `Y8        8I                                         I8   \n");
    printf("d8'   8b  d8        8I                                      88888888\n");
    printf(",8I    \"Y88P'        8I                                         I8   \n");
    printf("I8'            ,gggg,8I    ,ggggg,    ,ggg,,ggg,   gg      gg   I8   \n");
    printf("d8            dP\"  \"Y8I   dP\"  \"Y8ggg,8\" \"8P\" \"8,  I8      8I   I8   \n");
    printf("Y8,          i8'    ,8I  i8'    ,8I  I8   8I   8I  I8,    ,8I  ,I8,  \n");
    printf("`Yba,,_____,,d8,   ,d8b,,d8,   ,d8' ,dP   8I   Yb,,d8b,  ,d8b,,d88b, \n");
    printf("  `\"Y8888888P\"Y8888P\"`Y8P\"Y8888P\"   8P'   8I   `Y88P'\"Y88P\"`Y88P\"\"Y8P\n");
    printf("\033[0m\n");
    printf("\033[1;36mcommands:");
    printf("\033[0m");
    printf("• speed       it is what is says");
    printf("• color       just type a color till it works.to use hex values with this command use -hex <value>");
    printf("• wierd       its bascially random with steroids");
    printf("• random      skibdi skidbi\n");
    printf("• img         just shows 1 frame of the c-donut and stops");
    printf("\033[1;33flags:");
    printf("\033[0m");
    printf("• -slow       usable only with the speed command");
    printf("• -mid        usable with speed command btw");
    printf("• -fast       again,its only used with the speed command");
    printf("• -hex        helps the color command use hex values as input. requires an input ex: #b1b999");       
  }
}
