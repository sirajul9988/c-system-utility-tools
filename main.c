#include <stdio.h>
#include <time.h>

void showSystemInfo() {
    time_t t;
    time(&t);

    printf("System Utility Tool\n");
    printf("-------------------\n");
    printf("Current Date & Time: %s", ctime(&t));
}

int main() {
    int choice;

    printf("C System Utility Tools\n");
    printf("1. Show System Time\n");
    printf("2. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            showSystemInfo();
            break;
        case 2:
            printf("Exiting tool...\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
