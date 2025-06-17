#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>

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
    if(strcmp(command, "cdonut" == 0)
        cdonut();
    else
    return 0;
}

// Print help messages
void printhelp(int reason) {
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
        usleep(30000);
    }
    return 0;
}
