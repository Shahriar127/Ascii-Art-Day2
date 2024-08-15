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

const char *StandardD[] = {
    "DDDD ",
    "D   D",
    "D   D",
    "D   D",
    "DDDD "
};

const char *StandardE[] = {
    "EEEEE",
    "E    ",
    "EEE  ",
    "E    ",
    "EEEEE"
};

const char *StandardF[] = {
    "FFFFF",
    "F    ",
    "FFFF ",
    "F    ",
    "F    "
};

const char *StandardG[] = {
    " GGG ",
    "G    ",
    "G GG ",
    "G   G",
    " GGG "
};

const char *StandardH[] = {
    "H   H",
    "H   H",
    "HHHHH",
    "H   H",
    "H   H"
};

const char *StandardI[] = {
    " III ",
    "  I  ",
    "  I  ",
    "  I  ",
    " III "
};

const char *StandardJ[] = {
    "   JJJ",
    "    J ",
    "    J ",
    "J   J ",
    " JJJ  "
};

const char *StandardK[] = {
    "K   K",
    "K  K ",
    "KK   ",
    "K  K ",
    "K   K"
};

const char *StandardL[] = {
    "L    ",
    "L    ",
    "L    ",
    "L    ",
    "LLLLL"
};

const char *StandardM[] = {
    "M   M",
    "MM MM",
    "M M M",
    "M   M",
    "M   M"
};

const char *StandardN[] = {
    "N   N",
    "N   N",
    "NN  N",
    "N N N",
    "N   N"
};

const char *StandardO[] = {
    " OOO ",
    "O   O",
    "O   O",
    "O   O",
    " OOO "
};

const char *StandardP[] = {
    "PPPP ",
    "P   P",
    "PPPP ",
    "P    ",
    "P    "
};

const char *StandardQ[] = {
    " QQQ ",
    "Q   Q",
    "Q   Q",
    "Q  QQ",
    " QQQQ"
};

const char *StandardR[] = {
    "RRRR ",
    "R   R",
    "RRRR ",
    "R R  ",
    "R  RR"
};

const char *StandardS[] = {
    " SSS ",
    "S    ",
    " SSS ",
    "    S",
    " SSS "
};

const char *StandardT[] = {
    "TTTTT",
    "  T  ",
    "  T  ",
    "  T  ",
    "  T  "
};

const char *StandardU[] = {
    "U   U",
    "U   U",
    "U   U",
    "U   U",
    " UUU "
};

const char *StandardV[] = {
    "V   V",
    "V   V",
    "V   V",
    " V V ",
    "  V  "
};

const char *StandardW[] = {
    "W   W",
    "W   W",
    "W W W",
    "WW WW",
    "W   W"
};

const char *StandardX[] = {
    "X   X",
    " X X ",
    "  X  ",
    " X X ",
    "X   X"
};

const char *StandardY[] = {
    "Y   Y",
    " Y Y ",
    "  Y  ",
    "  Y  ",
    "  Y  "
};

const char *StandardZ[] = {
    "ZZZZZ",
    "   Z ",
    "  Z  ",
    " Z   ",
    "ZZZZZ"
};


const char *GraffitiA[] = {
    "  _____   ",
    " /  _  \\  ",
    "/  /_\\  \\ ",
    "/    |    \\",
    "\\____|__  /",
    "        \\/ "
};

const char *GraffitiB[] = {
    "__________ ",
    "\\______   \\",
    " |    |  _/",
    " |    |   \\",
    " |______  /",
    "        \\/ "
};

const char *GraffitiC[] = {
    "_________  ",
    "\\_   ___ \\ ",
    "/    \\  \\/ ",
    "\\     \\____",
    " \\______  /",
    "        \\/ "
};

const char *GraffitiD[] = {
    "________   ",
    "\\______ \\  ",
    " |    |  \\ ",
    " |    `   \\",
    "/_______  /",
    "        \\/ "
};

const char *GraffitiE[] = {
    "___________",
    "\\_   _____/",
    " |    __)_ ",
    " |        \\",
    "/_______  /",
    "        \\/ "
};

const char *GraffitiF[] = {
    "___________",
    "\\_   _____/",
    " |    __)  ",
    " |     \\   ",
    " \\___  /   ",
    "     \\/    "
};

const char *GraffitiG[] = {
    "  ________ ",
    " /  _____/ ",
    "/   \\  ___ ",
    "\\    \\_\\  \\",
    " \\______  /",
    "        \\/ "
};

const char *GraffitiH[] = {
    "  ___ ___  ",
    " /   |   \\ ",
    "/    ~    \\",
    "\\    Y    /",
    " \\___|_  / ",
    "       \\/  "
};

const char *GraffitiI[] = {
    ".___      ",
    "|   |     ",
    "|   |     ",
    "|   |     ",
    "|___|     "
};

const char *GraffitiJ[] = {
      "      ____ " 
      "     |    |"  
      "     |    |"  
      " / _|    |"  
      " | _______|"  
           
};

const char *GraffitiK[] = {
     " ____  __. "  
     "|    |/ _| "  
     "|      <   "  
     "|    |  <  "  
     "|____|__ ] "  
     "           "
};

           

const char *GraffitiL[] = {
      ".____      "  
      "|    |     "  
      "|    |     "  
      "|    |___  "  
      "|_______ | "  
      "           " 
           
};


const char *GraffitiM[] = {
    "    __    __        ",
    "   /  \\  /  \\       ",
    "  /    \\/    \\      ",
    " /            \\     ",
    "/___|     |____\\    ",
    "                    "
};

const char *GraffitiN[] = {
    "    __        _  ",
    "   /  \\     / /  ",
    "  /  /\\ \\  / /   ",
    " / /   \\ \\/ /    ",
    "/_/     \\__/     ",
    "                 "
};

const char *GraffitiO[] = {
    "    ____     ",
    "  /      \\   ",
    " / |     |\\  ",
    "/  |_____| \\ ",
    "\\________  / ",
    "           "
};

const char *GraffitiP[] = {
    "__________ ",
    "\\______   \\",
    " |     ___/",
    " |    |    ",
    " |____|    "
};


const char *GraffitiQ[] = {
    "________   ", 
    "\\_____  \\  ", 
    " /  / \\  \\ ", 
    "/   \\_/.  \\",
    "\\_____   _/", 
    "       \\__>"
};

const char *GraffitiR[] = {
    "__________ ", 
    "\\______   \\",
    " |       _/", 
    " |    |   \\", 
    " |____|_  /", 
    "        \\/"
};

const char *GraffitiS[] = {
    "  _________ ",
    " /   _____/ ",
    " \\_____  \\  ",
    " /        \\ ",
    "/_______  / ",
    "        \\/  "
};

const char *GraffitiT[] = {
    "___________", 
    "\\__    ___/", 
    "  |    |   ", 
    "  |    |   ", 
    "  |____|   "
};

const char *GraffitiU[] = {
    " ____ ___ ",  
    "|    |   |",  
    "|    |   |",  
    "|    |  | ",  
    "|______/  ",  
    "          " 
};


const char *GraffitiV[] = {
    "____   ____", 
    "\\   \\ /   /", 
    " \\   Y   / ", 
    "  \\     /  ", 
    "   \\___/   "
};

const char *GraffitiW[] = {
    " __      __ ", 
    "/  \\    /  \\",
    "\\   \\/\\/   /",
    " \\        / ", 
    "  \\__  /  ", 
    "     \\/   "
};

const char *GraffitiX[] = {
    "____  ___", 
    "\\   \\/  /", 
    " \\     / ", 
    "  \\   /  ", 
    "   \\_/   "
};

const char *GraffitiY[] = {
    " _____.___.", 
    "\\__  |   |", 
    " /   |   |", 
    " \\____   |", 
    " /______|", 
    " \\/      "
};

const char *GraffitiZ[] = {
    "__________", 
    "\\____    /", 
    "     /   ", 
    "    /    ", 
    "   /_____", 
    "        \\/"
};


// Define the height of the ASCII art
#define ASCII_ART_HEIGHT 5

void printAsciiArtForString(const char *str) {
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
                case 'A': printf("%s ", StandardA[i]); break;
                case 'B': printf("%s ", StandardB[i]); break;
                case 'C': printf("%s ", StandardC[i]); break;
                case 'D': printf("%s ", StandardD[i]); break;
                case 'E': printf("%s ", StandardE[i]); break;
                case 'F': printf("%s ", StandardF[i]); break;
                case 'G': printf("%s ", StandardG[i]); break;
                case 'H': printf("%s ", StandardH[i]); break;
                case 'I': printf("%s ", StandardI[i]); break;
                case 'J': printf("%s ", StandardJ[i]); break;
                case 'K': printf("%s ", StandardK[i]); break;
                case 'L': printf("%s ", StandardL[i]); break;
                case 'M': printf("%s ", StandardM[i]); break;
                case 'N': printf("%s ", StandardN[i]); break;
                case 'O': printf("%s ", StandardO[i]); break;
                case 'P': printf("%s ", StandardP[i]); break;
                case 'Q': printf("%s ", StandardQ[i]); break;
                case 'R': printf("%s ", StandardR[i]); break;
                case 'S': printf("%s ", StandardS[i]); break;
                case 'T': printf("%s ", StandardT[i]); break;
                case 'U': printf("%s ", StandardU[i]); break;
                case 'V': printf("%s ", StandardV[i]); break;
                case 'W': printf("%s ", StandardW[i]); break;
                case 'X': printf("%s ", StandardX[i]); break;
                case 'Y': printf("%s ", StandardY[i]); break;
                case 'Z': printf("%s ", StandardZ[i]); break;
                default: printf("     "); // Adjust spacing based on character width
            }
        }
        printf("\n");
    }
}

    void GraffitiAfun(const char *str) {
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
                case 'A': printf("%s ", GraffitiA[i]); break;
                case 'B': printf("%s ", GraffitiB[i]); break;
                case 'C': printf("%s ", GraffitiC[i]); break;
                case 'D': printf("%s ", GraffitiD[i]); break;
                case 'E': printf("%s ", GraffitiE[i]); break;
                case 'F': printf("%s ", GraffitiF[i]); break;
                case 'G': printf("%s ", GraffitiG[i]); break;
                case 'H': printf("%s ", GraffitiH[i]); break;
                case 'I': printf("%s ", GraffitiI[i]); break;
                case 'J': printf("%s ", GraffitiJ[i]); break;
                case 'K': printf("%s ", GraffitiK[i]); break;
                case 'L': printf("%s ", GraffitiL[i]); break;
                case 'M': printf("%s ", GraffitiM[i]); break;
                case 'N': printf("%s ", GraffitiN[i]); break;
                case 'O': printf("%s ", GraffitiO[i]); break;
                case 'P': printf("%s ", GraffitiP[i]); break;
                case 'Q': printf("%s ", GraffitiQ[i]); break;
                case 'R': printf("%s ", GraffitiR[i]); break;
                case 'S': printf("%s ", GraffitiS[i]); break;
                case 'T': printf("%s ", GraffitiT[i]); break;
                case 'U': printf("%s ", GraffitiU[i]); break;
                case 'V': printf("%s ", GraffitiV[i]); break;
                case 'W': printf("%s ", GraffitiW[i]); break;
                case 'X': printf("%s ", GraffitiX[i]); break;
                case 'Y': printf("%s ", GraffitiY[i]); break;
                case 'Z': printf("%s ", GraffitiZ[i]); break;
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
           GraffitiAfun(input); 
            break;
        // case 2:
        //     for (int i = 0; i < ASCII_ART_HEIGHT; i++) {
        //         selectedFont[i] = AvatarA[i];
        //     }
        //     break;
        // case 3:
        //     for (int i = 0; i < ASCII_ART_HEIGHT; i++) {
        //         selectedFont[i] = EpicA[i];
        //     }
        //     break;
        case 4:
            printAsciiArtForString(input);
            break;
        default:
            printf("Invalid choice. Using default font (Standard).\n");
            printAsciiArtForString(input);
            break;
    }

    return 0;
}
