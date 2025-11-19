#include <stdio.h>
#include <stdlib.h>

unsigned long long get_input(char prompt) {

    unsigned long long value;
    int status;
    int c;

        do {
        printf("%c", prompt);
        status = scanf("%ull", &value); 

        if (status != 1) {

            while ((c = getchar()) != '\n' && c != EOF) {

                printf("Fehler: Eingabe einer Ganzzahl erforderlich.");
            }
        }
    }

    while (status != 1);

    return value;
}

struct num_array {
   unsigned long long num_array;
}   arr;

struct arr create_array(unsigned long long value, struct num_array arr) {

    unsigned long long *temp = (unsigned long long*)calloc(value * sizeof(unsigned long long));
        if (temp == NULL) {
            perror("Speicherzuweisung fehlgeschlagen.");
        } else {
            unsigned long long *num_array = temp;
        }

    for (i = 0; i < value; i++) {
        num_array[i] = i;
    }

    return arr;

}


char run_collatz(struct arr num_array, unsigned long long value) {

    unsigned long long number;
    int count;

    printf("Starting the process..");

    for (int i = 2; i < value; i++) {
        number = num_array[i];
        while (number != 1) {
            if (number % 2 == 0) {
        
                number /= 2;
        
            } else {
                number = number * 3 + 1;
            }
        }
    }
    return "Done!";
}

int main() {

    unsigned long long value = get_input("Geben Sie einen zu untersuchenden Zahlenraum ein:\n");
    struct arr num_array = create_array(unsigned long long value, struct arr num_array);
    run_collatz(struct arr num_array, unsigned lo    ng long value);


    return 0;
}
