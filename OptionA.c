#include <stdio.h>
#include <string.h>
#include <ctype.h> // For toupper function

// Define ASCII art for each letter in different fonts

// Doh Font
const char *DohA[] = {
    "              AAA               ",
    "              A:::A              ",
    "             A:::::A             ",
    "            A:::::::A            ",
    "           A:::::::::A           ",
    "          A:::::A:::::A          ",
    "         A:::::A   A:::::A        ",
    "        A:::::A     A:::::A       ",
    "       A:::::A       A:::::A      ",
    "      A:::::AAAAAAAAAAAAAAAAAA     ",
    "     AAA:::::::::::::::::::::AA    ",
    "    A:::::AAAAAAAAAAAAA       A:::::A",
    "   A:::::A                 A:::::A  ",
    "  A:::::A                   A:::::A  ",
    " A:::::A                     A:::::A ",
    "AAAA                          AAAA   "
};

// Epic Font
const char *EpicA[] = {
    " _______ ",
    "(  ___  )",
    "| (   ) |",
    "| (___) |",
    "|  ___  |",
    "| (   ) |",
    "| )   ( |",
    "|/     \\|"
};

// Graffiti Font
const char *GraffitiA[] = {
    "   _____   ",
    "  /  _  \\  ",
    " /  /_\\  \\ ",
    "/    |    \\",
    "\\____|__  /",
    "        \\/ "
};

// Avatar Font
const char *AvatarA[] = {
    " ____ ",
    "/  _ \\",
    "| / \\|",
    "| |-||",
    "\\_/ \\|"
};

// Add more letters for each font if needed

// Define the height of the ASCII art
#define ASCII_ART_HEIGHT 7

void printAsciiArtForString(const char *str, const char *font[]) {
    int len = strlen(str);
    
    if(len > 16) {
        // Print the sentence as it is
        printf("%s\n", str);
        return;
    }

    // Loop over each row of ASCII art
    for (int i = 0; i < ASCII_ART_HEIGHT; i++) {
        for (int j = 0; j < len; j++) {
            char ch = toupper(str[j]); // Convert character to uppercase
            const char **selectedFont = font;
            if (ch == 'A') {
                printf("%s ", selectedFont[i]);
            } else {
                // Handle other letters if needed
                printf("      "); // Adjust spacing based on character width
            }
        }
        printf("\n");
    }
}

int main() {
    char input[100];
    int choice;
    
    // Display font options
    printf("Which font do you like:\n");
    printf("1. Graffiti\n");
    printf("2. Avatar\n");
    printf("3. Epic\n");
    printf("4. Doh\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    // Clear the input buffer after reading integer
    while (getchar() != '\n');
    
    // Prompt user for text input
    printf("Enter a word or sentence: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character from input
    input[strcspn(input, "\n")] = '\0';

    // Select font based on user choice
    const char *selectedFont[ASCII_ART_HEIGHT];
    
    switch (choice) {
        case 1: 
            for (int i = 0; i < ASCII_ART_HEIGHT; i++) {
                selectedFont[i] = GraffitiA[i];
            }
            break;
        case 2:
            for (int i = 0; i < ASCII_ART_HEIGHT; i++) {
                selectedFont[i] = AvatarA[i];
            }
            break;
        case 3:
            for (int i = 0; i < ASCII_ART_HEIGHT; i++) {
                selectedFont[i] = EpicA[i];
            }
            break;
        case 4:
            for (int i = 0; i < ASCII_ART_HEIGHT; i++) {
                selectedFont[i] = DohA[i];
            }
            break;
        default:
            printf("Invalid choice. Using default font (Graffiti).\n");
            for (int i = 0; i < ASCII_ART_HEIGHT; i++) {
                selectedFont[i] = GraffitiA[i];
            }
            break;
    }

    // Print ASCII art using the selected font
    printAsciiArtForString(input, selectedFont);

    return 0;
}
