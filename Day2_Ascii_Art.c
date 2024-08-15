#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Define ASCII_ART_HEIGHT
#define ASCII_ART_HEIGHT 9

// Acrobatic Font Definitions for A-Z
const char *AcrobaticA[] = {
    "     o         ",
    "    <|>        ",
    "    / \\        ",
    "  o/   \\o      ",
    " <|__ __|>     ",
    " /       \\     ",
    "o/         \\o  ",
    "/v           v\\",
    "/>             <\\"
};

// ... [Define other letters similarly] ...

const char *AcrobaticZ[] = {
    "    _______    ",
    "         /     ",
    "        /      ",
    "       /       ",
    "      /        ",
    "     /________ ",
    "               ",
    "               ",
    "               "
};

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
            const char *letterArt[ASCII_ART_HEIGHT] = {0};

            // Select appropriate letter art for the font
            switch (ch) {
                case 'A': letterArt = font; break;
                case 'B': letterArt = font; break;
                case 'C': letterArt = font; break;
                // Add cases for other letters
                case 'Z': letterArt = font; break;
                default:
                    // Print spaces for unsupported characters
                    printf("                  "); // Adjust spacing based on character width
                    continue;
            }

            // Print the letter art for the current row
            printf("%s ", letterArt[i]);
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
    printf("4. Acrobatic\n");
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
                selectedFont[i] = AcrobaticA[i];
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
