#include <stdio.h>
#include <stdlib.h>

unsigned long long get_input(const char *prompt) {

    unsigned long long value;
    int status;
    int c;

        do {
        printf("%s", prompt);
        status = scanf("%llu", &value); 

        if (status != 1) {

            while ((c = getchar()) != '\n' && c != EOF) {

                printf("Fehler: Eingabe einer Ganzzahl erforderlich.");
            }
        }
    }

    while (status != 1);

    return value;
}

struct array {
   unsigned long long *num_array;
};

struct array create_array(unsigned long long value) {

    unsigned long long *temp = (unsigned long long*)calloc(value, sizeof(unsigned long long));
    struct array num_array;
    if (temp == NULL) {
            perror("Speicherzuweisung fehlgeschlagen.");
        } else {
            num_array[value] = *temp;
        }

    for (int i = 0; i < value; i++) {
        num_array[i] = i;
    }

    return array;

}


const char *run_collatz(struct array num_array, unsigned long long value) {

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
    struct array num_array = create_array(value);
    run_collatz(num_array, value);


    return 0;
}
