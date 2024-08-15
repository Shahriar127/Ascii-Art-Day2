#include <stdio.h>
#include <string.h>
#include <ctype.h> // For toupper function

// Define ASCII art for each letter
const char *StandardA[] = {
    "  A  ",
    " A A ",
    "AAAAA",
    "A   A",
    "A   A"
};

const char *StandardB[] = {
    "BBBB ",
    "B   B",
    "BBBB ",
    "B   B",
    "BBBB "
};

const char *StandardC[] = {
    " CCC ",
    "C   C",
    "C    ",
    "C   C",
    " CCC "
};

// Define other letters similarly...

const char *GraffitiA[] = {
    "  _____   ",
    " /  _  \\  ",
    "/  /_\\  \\ ",
    "/    |    \\",
    "\\____|__  /",
    "        \\/ "
};

// Define other Graffiti letters similarly...

#define ASCII_ART_HEIGHT 5

void printAsciiArtForString(const char *str, const char *font[]) {
    int len = strlen(str);

    // Check if the input length exceeds the limit
    if (len > 16) {
        printf("%s\n", str);
        return;
    }

    // Loop over each row of ASCII art
    for (int i = 0; i < ASCII_ART_HEIGHT; i++) {
        for (int j = 0; j < len; j++) {
            char ch = toupper(str[j]); // Convert character to uppercase

            // Print ASCII art for letters A to Z
            switch (ch) {
                case 'A': printf("%s ", font[0]); break;
                case 'B': printf("%s ", font[1]); break;
                // Add cases for other letters
                default: printf("     "); // Adjust spacing based on character width
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
    printf("4. Standard\n");
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
    switch (choice) {
        case 1:
            printAsciiArtForString(input, GraffitiA);
            break;
        // Handle other cases for Avatar and Epic fonts
        case 4:
            printAsciiArtForString(input, StandardA);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
