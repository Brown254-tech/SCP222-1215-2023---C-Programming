#include <stdio.h>
#include <string.h>

#define MAX_RECORDS 5

// Define a record structure
typedef struct {
    char name[50];
    int score;
} Record;

void sortRecords(Record records[], int n) {
    Record temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (records[j].score > records[j + 1].score) {
                // Swap records
                temp = records[j];
                records[j] = records[j + 1];
                records[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    Record records[MAX_RECORDS] = {
        {"Alice", 85},
        {"Bob", 70},
        {"Charlie", 90},
        {"David", 60},
        {"Eve", 75}
    };

    printf("Records before sorting:\n");
    for (int i = 0; i < MAX_RECORDS; i++) {
        printf("%s: %d\n", records[i].name, records[i].score);
    }

    sortRecords(records, MAX_RECORDS);

    printf("\nRecords after sorting:\n");
    for (int i = 0; i < MAX_RECORDS; i++) {
        printf("%s: %d\n", records[i].name, records[i].score);
    }

    return 0;
}
