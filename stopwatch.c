#include <stdio.h>
#include <unistd.h> // For sleep function
#include <stdlib.h> // For system function

void displayTime(int hours, int minutes, int seconds) {
    printf("\r%02d:%02d:%02d", hours, minutes, seconds);
    fflush(stdout);
}

void startCountdown(int hours, int minutes, int seconds) {
    while (hours > 0 || minutes > 0 || seconds > 0) {
        displayTime(hours, minutes, seconds);
        
        // Wait for 1 second
        sleep(1);

        // Decrement time
        if (seconds == 0) {
            if (minutes == 0) {
                if (hours > 0) {
                    hours--;
                    minutes = 59;
                    seconds = 59;
                }
            } else {
                minutes--;
                seconds = 59;
            }
        } else {
            seconds--;
        }
    }
    // Display final time as 00:00:00
    displayTime(0, 0, 0);
    printf("\nTime's up!\n");
}

int main() {
    int hours, minutes, seconds;

    // Input the countdown duration
    printf("Enter the countdown time.\n");
    printf("Hours: ");
    scanf("%d", &hours);
    printf("Minutes: ");
    scanf("%d", &minutes);
    printf("Seconds: ");
    scanf("%d", &seconds);

    // Start the countdown
    startCountdown(hours, minutes, seconds);

    return 0;
}
