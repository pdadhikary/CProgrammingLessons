// Section 1.9

#include <stdio.h>

int character_count(char[], int);

int main() {
    /*
        Because C is low level language it does not have
        an implementation of a String like Java or Python.
        In all programming languages, including C, Strings are actually
        character arrays. Its only that, high level programming
        languages tend to hide the complexity of creating an array...
    */

   // let's create a string that hold's the name "James".
   // "James" has 5 characters be we want to have 1 extra space
   // for a special character, '\0'.
   // '\0' is a special character that tells C that this is the
   // end of the string.
    char name[6];
    name[0] = 'J';
    name[1] = 'a';
    name[2] = 'm';
    name[3] = 'e';
    name[4] = 's';
    name[5] = '\0';

    printf("%s\n", name); // use the token %s for printing character arrays i.e. strings

   /*
        As you can see this is very tedious process, so long time ago
        the developers of C though it would be good idea to add some
        syntactic sugar. Basically let users define a String of characters
        using "".
   */
    char another_name[100] = "Dennis Ritchie";
    /*
        C automatically does eveything we did in the above code
        including putting in the \0 at the end.

        Note, we declared an array of 100 character but we didn't
        use all of it, that's completely fine.
    */
    printf("%s\n", another_name);


    printf("\nWrite some text here:\n");
    char vowels[] = "aeiouAEIOU";
    int vowel_count = character_count(vowels, 10);
    printf("\nVowel Count is: %d\n", vowel_count);
    return 0;
}

int character_count(char items[], int n) {
    int vowel_count = 0;

    char input = getchar();
    while(input != EOF) {
        for(int i = 0; i < n; i++) {
            if(input == items[i]) vowel_count++;
        }
        input = getchar();
    }

    return vowel_count;
}