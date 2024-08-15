#include <stdio.h>
#include <string.h>
#include <ctype.h> // For toupper function

// Define ASCII art for each letter
const char *A[] = {
    "  A  ",
    " A A ",
    "AAAAA",
    "A   A",
    "A   A"
};

const char *B[] = {
    "BBBB ",
    "B   B",
    "BBBB ",
    "B   B",
    "BBBB "
};

const char *C[] = {
    " CCC ",
    "C   C",
    "C    ",
    "C   C",
    " CCC "
};

const char *D[] = {
    "DDDD ",
    "D   D",
    "D   D",
    "D   D",
    "DDDD "
};

const char *E[] = {
    "EEEEE",
    "E    ",
    "EEE  ",
    "E    ",
    "EEEEE"
};

const char *F[] = {
    "FFFFF",
    "F    ",
    "FFFF ",
    "F    ",
    "F    "
};

const char *G[] = {
    " GGG ",
    "G    ",
    "G GG ",
    "G   G",
    " GGG "
};

const char *H[] = {
    "H   H",
    "H   H",
    "HHHHH",
    "H   H",
    "H   H"
};

const char *I[] = {
    " III ",
    "  I  ",
    "  I  ",
    "  I  ",
    " III "
};

const char *J[] = {
    "   JJJ",
    "    J ",
    "    J ",
    "J   J ",
    " JJJ  "
};

const char *K[] = {
    "K   K",
    "K  K ",
    "KK   ",
    "K  K ",
    "K   K"
};

const char *L[] = {
    "L    ",
    "L    ",
    "L    ",
    "L    ",
    "LLLLL"
};

const char *M[] = {
    "M   M",
    "MM MM",
    "M M M",
    "M   M",
    "M   M"
};

const char *N[] = {
    "N   N",
    "N   N",
    "NN  N",
    "N N N",
    "N   N"
};

const char *O[] = {
    " OOO ",
    "O   O",
    "O   O",
    "O   O",
    " OOO "
};

const char *P[] = {
    "PPPP ",
    "P   P",
    "PPPP ",
    "P    ",
    "P    "
};

const char *Q[] = {
    " QQQ ",
    "Q   Q",
    "Q   Q",
    "Q  QQ",
    " QQQQ"
};

const char *R[] = {
    "RRRR ",
    "R   R",
    "RRRR ",
    "R R  ",
    "R  RR"
};

const char *S[] = {
    " SSS ",
    "S    ",
    " SSS ",
    "    S",
    " SSS "
};

const char *T[] = {
    "TTTTT",
    "  T  ",
    "  T  ",
    "  T  ",
    "  T  "
};

const char *U[] = {
    "U   U",
    "U   U",
    "U   U",
    "U   U",
    " UUU "
};

const char *V[] = {
    "V   V",
    "V   V",
    "V   V",
    " V V ",
    "  V  "
};

const char *W[] = {
    "W   W",
    "W   W",
    "W W W",
    "WW WW",
    "W   W"
};

const char *X[] = {
    "X   X",
    " X X ",
    "  X  ",
    " X X ",
    "X   X"
};

const char *Y[] = {
    "Y   Y",
    " Y Y ",
    "  Y  ",
    "  Y  ",
    "  Y  "
};

const char *Z[] = {
    "ZZZZZ",
    "   Z ",
    "  Z  ",
    " Z   ",
    "ZZZZZ"
};

// Define the height of the ASCII art
#define ASCII_ART_HEIGHT 5

void printAsciiArtForString(const char *str) {
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
            
                // Print ASCII art for letters B to Z
                switch (ch) {
                    case 'A': printf("%s ", A[i]); break;
                    case 'B': printf("%s ", B[i]); break;
                    case 'C': printf("%s ", C[i]); break;
                    case 'D': printf("%s ", D[i]); break;
                    case 'E': printf("%s ", E[i]); break;
                    case 'F': printf("%s ", F[i]); break;
                    case 'G': printf("%s ", G[i]); break;
                    case 'H': printf("%s ", H[i]); break;
                    case 'I': printf("%s ", I[i]); break;
                    case 'J': printf("%s ", J[i]); break;
                    case 'K': printf("%s ", K[i]); break;
                    case 'L': printf("%s ", L[i]); break;
                    case 'M': printf("%s ", M[i]); break;
                    case 'N': printf("%s ", N[i]); break;
                    case 'O': printf("%s ", O[i]); break;
                    case 'P': printf("%s ", P[i]); break;
                    case 'Q': printf("%s ", Q[i]); break;
                    case 'R': printf("%s ", R[i]); break;
                    case 'S': printf("%s ", S[i]); break;
                    case 'T': printf("%s ", T[i]); break;
                    case 'U': printf("%s ", U[i]); break;
                    case 'V': printf("%s ", V[i]); break;
                    case 'W': printf("%s ", W[i]); break;
                    case 'X': printf("%s ", X[i]); break;
                    case 'Y': printf("%s ", Y[i]); break;
                    case 'Z': printf("%s ", Z[i]); break;
                    default: printf("     "); // Adjust spacing based on character width
                }
            } else {
                // Print spaces for unsupported characters
                printf("     "); // Adjust spacing based on character width
            }
        }
        printf("\n");
    }
}

int main() {
    char input[100];
    printf("Enter a word or sentence: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character from input
    input[strcspn(input, "\n")] = '\0';

    printAsciiArtForString(input);

    return 0;
}
