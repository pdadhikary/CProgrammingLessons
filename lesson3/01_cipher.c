#include <stdio.h>
#include <stdlib.h>

// constants
#define OFFSET 32
#define ALPHABET_LENGTH 26

// function headers
char lower(char);

// global variables
char secret_message[300] = "X wpkt eaprts xcudgbpixdc kxipa "
                            "id iwt hjgkxkpa du iwt Gtqtaaxdc "
                            "xcid iwt btbdgn hnhitbh du iwxh G2 "
                            "jcxi. Bn upiwtg lxaa zcdl wdl id "
                            "gtigxtkt xi. Ndj bjhi htt iwxh "
                            "sgdxs hputan staxktgts id wxb dc "
                            "Pastgppc. Iwxh xh djg bdhi sthetgpit "
                            "wdjg. Wtae bt, Dqx-Lpc Ztcdqx. "
                            "Ndj'gt bn dcan wdet.";

int main() {
    // varibale declarations
    int shift, element, max_idx, max_count;
    shift = element = max_idx = max_count = 0;
    int character_count[ALPHABET_LENGTH];

    // initalize all counts to 0
    for (int i = 0; i < ALPHABET_LENGTH; i++) character_count[i] = 0;

    // count the frequency of each character
    for (int i = 0; (element = lower(secret_message[i])) != '\0'; i++) {
        if (element >= 'a' && element <= 'z') {
            character_count[element - 'a'] += 1;
        }
    }

    // find which charater has the largest frequency
    for (int i = 0; i < ALPHABET_LENGTH; i++) {
        if(character_count[i] > max_count) {
            max_idx = i;
            max_count = character_count[i];
        }
    }

    // calculate the shift
    shift = max_idx - ('e' - 'a');
    printf("shift is %d\n", shift);

    // decode the secret message
    printf("Secret Message:\n\"");
    for (int i = 0; (element = lower(secret_message[i])) != '\0'; i++) {
        if (element >= 'a' && element <= 'z') {
                element -= shift;
                if (element > 'z') {
                    // wrap back to 'a'
                    element -= ALPHABET_LENGTH;
                } else if (element < 'a') {
                    // wrap around to 'z'
                    element += ALPHABET_LENGTH;
                }
        }
        printf("%c", element);
    }
    printf("\"\n");

    return 0;
}

char lower(char element) {
    // convert the character to lower case
    if (element >= 'A' && element <= 'Z') element += OFFSET;

    return element;
}