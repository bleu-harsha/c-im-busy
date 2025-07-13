/*
  ,gggg,                                                          
,88"""Y8b,        8I                                         I8   
d8"     `Y8        8I                                         I8   
d8'   8b  d8        8I                                      88888888
,8I    "Y88P'        8I                                         I8   
I8'            ,gggg,8I    ,ggggg,    ,ggg,,ggg,   gg      gg   I8   
d8            dP"  "Y8I   dP"  "Y8ggg,8" "8P" "8,  I8      8I   I8   
Y8,          i8'    ,8I  i8'    ,8I  I8   8I   8I  I8,    ,8I  ,I8,  
`Yba,,_____,,d8,   ,d8b,,d8,   ,d8' ,dP   8I   Yb,,d8b,  ,d8b,,d88b, 
  `"Y8888888P"Y8888P"`Y8P"Y8888P"   8P'   8I   `Y88P'"Y88P"`Y88P""Y8P

 Codnut — an extension of C-im-busy.
*/

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

