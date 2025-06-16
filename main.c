#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>


 int main(){
  char command[64];
  scanf("%s",command);
  if (strcmp(command, "help") == 0 || strcmp(command, "-h") == 0 || strcmp(command,"\n") == 0)
    printhelp(0);
  else if{
    printf("Unkown command: %s\n", command);
  }

  int printhelp(int reason){
    //reason 0 displays the def command's help
    //reason 1 displays cmatrix command's help
    //reason 2 displays cdonut command's help
    //reason 3 displays pattern-cool command's help
    //reason 4 displays random command's help
    //reason 5 displays ascii-anim command's help
    if(reason == 0){
    //------------------------------------------------------------banner--------------------------------------------------------------------------------
    printf("\033[1;32m"); // Green
    printf(" _________     .__ /\\          ___.                           \n");
    printf(" \\_   ___ \\    |__|\\(_____     \\_ |__   __ __  ______ ___.__. \n");
    printf(" /    \\  \\/    |  | /     \\     | __ \\ |  |  \\/  ___/<   |  | \n");
    printf(" \\     \\____   |  ||  Y Y  \\    | \\_\\ \\|  |  /\\___ \\  \\___  | \n");
    printf("  \\______  /   |__||__|_|  /    |___  /|____//____  > / ____| \n");
    printf("         \\/              \\/         \\/            \\/  \\/     \n");
    printf("\033[0m");//reset color
    //------------------------------------------------------available commands--------------------------------------------------------------------------
    printf("\033[1;33m");
    printf("Available commands:");
    printf("\033[0m");
    printf("• help             displays this message and exits");
    printf("• cmatrix          displays the classic cmatrix");
    printf("• cdonut           displays the revolving donut which can be further tweaked with flags");
    printf("• pattern-cool      displays wierd ascii patterns ");
    printf("• random            chooses a random command and executes");
    printf("• ascii-anim        displays ascii animations(random by default) from https://ascii.co.uk/animated");
    printf("\033[1;33m");
    printf("for more information on the listed commands use  cimbusy <command> help ");
    printf("\033[0m");
}

int cdonut() {
    float A = 0, B = 0;
    float i, j;
    int k;
    float z[1760];
    char b[1760];
    printf("\x1b[2J");
    for(;;) {
        memset(b,32,1760);
        memset(z,0,7040);
        for(j=0; j < 6.28; j += 0.07) {
            for(i=0; i < 6.28; i += 0.02) {
                float c = sin(i);
                float d = cos(j);
                float e = sin(A);
                float f = sin(j);
                float g = cos(A);
                float h = d + 2;
                float D = 1 / (c * h * e + f * g + 5);
                float l = cos(i);
                float m = cos(B);
                float n = sin(B);
                float t = c * h * g - f * e;
                int x = 40 + 30 * D * (l * h * m - t * n);
                int y= 12 + 15 * D * (l * h * n + t * m);
                int o = x + 80 * y;
                int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
                if(22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
                    z[o] = D;
                    b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
                }
            }
        }
        printf("\x1b[H");
        for(k = 0; k < 1761; k++) {
            putchar(k % 80 ? b[k] : 10);
            A += 0.00004;
            B += 0.00002;
        }
        usleep(30000);
    }
    return 0;
}
