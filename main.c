#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <string.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

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
    //reason 3 displays pattern-cool command's help
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
        printf("• help            - displays this message and exits\n");
        printf("• cmatrix         - displays the classic cmatrix\n");
        printf("• cdonut          - displays the revolving donut\n");
        printf("• pattern-cool    - displays weird ascii patterns\n");
        printf("• random          - chooses a random command and executes\n");
        printf("• ascii-anim      - displays ascii animations from https://ascii.co.uk/animated\n");
        printf("\033[1;33mUse: cimbusy <command> help for details.\033[0m\n");
    }
  else if (reason == 1){
     printf("\033[1;36m");
     printf("  ______     __    __     ______     ______   ______     __     __  __    \n");
     printf(" /\\  ___\\   /\\ \"-./  \\   /\\  __ \\   /\\__  _\\ /\\  == \\   /\\ \\   /\\_\\_\\_\\   \n");
     printf(" \\ \\ \\____  \\ \\ \\-./\\ \\  \\ \\  __ \\  \\/_\\ \\ \\/ \\ \\  __<   \\ \\ \\  \\/_\\_\\/\\_  \n");
     printf("  \\ \\_____\\  \\ \\_\\ \\ \\_\\  \\ \\_\\ \\_\\    \\ \\_\\  \\ \\_\\ \\_\\  \\_\\   /\\_\\/\\_\\ \n");
     printf("   \\/_____/   \\/_/  \\/_/   \\/_/\\/_/     \\/_/   \\/_/ /_/   \\/_/   \\/_/\\/_/\n");
    printf("\033[0m\n");
    prtinf("\033[1;36mcommands:");
    printf("\033[0m <content to later add>");
    printf("\033[1;33flags:");
    printf("\033[0m <content to later add>"); 
           
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
    prtinf("\033[1;36mcommands:");
    printf("\033[0m <content to later add>");
    printf("\033[1;33flags:");
    printf("\033[0m <content to later add>"); 
           
  }
   else if (reason == 3){
    printf("\033[1;34m\n _____  ____  _____  _____  ____ _____  __  _  ____  ____  ____  _    \n");
    printf("| ()_)/ () \\|_   _||_   _|| ===|| () )|  \\| |/ (__`/ () \\ / () \\| |__ \n");
    printf("|_|  /__/\\__\\ |_|    |_|  |____||_|\\_\\|_|\\__|\\____)\\____/\\____/|____|\n\033[0m\n");
    prtinf("\033[1;36mcommands:");
    printf("\033[0m <content to later add>");
    printf("\033[1;33flags:");
    printf("\033[0m <content to later add>"); 
           
  }
  
   else if (reason == 4){
    printf("\033[1;36m\n _____   ____    ____   _  _____   _____  ____    __  \n");
    printf("|     | |    \\  |    \\ | ||     \\ /     \\|    \\  /  | \n");
    printf("|     \\ |     \\ |     \\| ||      \\|     ||     \\ /   | \n");
    printf("|__|\\__\\|__|\\__\\|__/\\____||______\\\\_____/|__/\\__/|__|\n");
    printf("\033[0m");
    prtinf("\033[1;36mcommands:");
    printf("\033[0m <content to later add>");
    printf("\033[1;33flags:");
    printf("\033[0m <content to later add>"); 
           
  }
   else if (reason == 5){
    printf("\033[1;36m\n");
    printf("     ___           _______.  ______  __   __            ___      .__   __.  __  .___  ___. \n");
    printf("    /   \\         /       | /      ||  | |  |          /   \\     |  \\ |  | |  | |   \\/   | \n");
    printf("   /  ^  \\       |   (----`|  ,----'|  | |  |  ______ /  ^  \\    |   \\\\|  | |  | |  \\  /  | \n");
    printf("  /  /_\\  \\       \\   \\    |  |     |  | |  | |______/  /_\\  \\   |  . `  | |  | |  |\\/|  | \n");
    printf(" /  _____  \\  .----)   |   |  `----.|  | |  |       /  _____  \\  |  |\\   | |  | |  |  |  | \n");
    printf("/__/     \\\\__\\ |_______/     \\______||__| |__|      /__/     \\\\__\\ |__| \\__| |__| |__|  |__| \n");
    printf("\033[0m\n");
    prtinf("asci-anim ascii art");
    prtinf("\033[1;36mcommands:");
    printf("\033[0m <content to later add>");
    printf("\033[1;33flags:");
    printf("\033[0m <content to later add>"); 
           
  }
}

// Donut animation
int cdonut() {
    float A = 0, B = 0;
    float i, j;
    int k;
    float z[1760];
    char b[1760];
    printf("\x1b[2J");
    for (;;) {
        memset(b, 32, 1760);
        memset(z, 0, 7040);
        for (j = 0; j < 6.28; j += 0.07) {
            for (i = 0; i < 6.28; i += 0.02) {
                float c = sin(i), d = cos(j), e = sin(A), f = sin(j);
                float g = cos(A), h = d + 2, D = 1 / (c * h * e + f * g + 5);
                float l = cos(i), m = cos(B), n = sin(B), t = c * h * g - f * e;
                int x = 40 + 30 * D * (l * h * m - t * n);
                int y = 12 + 15 * D * (l * h * n + t * m);
                int o = x + 80 * y;
                int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
                if (22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
                    z[o] = D;
                    b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
                }
            }
        }
        printf("\x1b[H");
        for (k = 0; k < 1760; k++) {
            putchar(k % 80 ? b[k] : 10);
        }
        A += 0.00004;
        B += 0.00002;
        #ifdef _WIN32
        Sleep(30);
        #else
        usleep(30000);
        #endif
    }
    return 0;
}
