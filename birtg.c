#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void delay(int ms) {
    usleep(ms * 1000);
}

int main() {
    // Windows support for emojis
    #ifdef _WIN32
        system("chcp 65001 > nul");
    #endif

    char* hearts[] = {"❤️ ", "💖 ", "💗 ", "💓 ", "💝 ", "💕 "};
    srand(time(NULL));

    printf("\033[2J\033[H"); // Clear screen and move cursor to top
    printf("Initializing Love Mode...\n");
    delay(1000);

    // Part 1: Fill the screen with hearts (Love Rain)
    for (int i = 0; i < 150; i++) {
        int spaces = rand() % 60;
        for (int s = 0; s < spaces; s++) printf(" ");
        
        printf("%s", hearts[rand() % 6]);
        fflush(stdout);
        
        delay(30); // Fast rain
        if (i % 8 == 0) printf("\n");
    }

    printf("\n\n");

    // Part 2: The Big Heart ASCII
    printf("       ❤️❤️       ❤️❤️\n");
    printf("     ❤️    ❤️   ❤️    ❤️\n");
    printf("    ❤️       ❤️       ❤️\n");
    printf("     ❤️              ❤️\n");
    printf("       ❤️          ❤️\n");
    printf("         ❤️      ❤️\n");
    printf("           ❤️  ❤️\n");
    printf("             ❤️\n\n");

    // Part 3: The Final Message
    printf("======================================\n");
    printf("   ✨  HAPPY BIRTHDAY DEAR!  ✨   \n");
    printf("      May your day be full of ❤️      \n");
    printf("======================================\n\n");

    // Part 4: A little sparkling effect at the end
    while(1) {
        printf("\r  ❤️ ✨ Happy Birthday Dear ✨ ❤️  ");
        fflush(stdout);
        delay(500);
        printf("\r  💖 🌟 Happy Birthday Dear 🌟 💖  ");
        fflush(stdout);
        delay(500);
    }

    return 0;
}