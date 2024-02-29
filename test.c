#include <stdio.h>

int main(int argc, char *argv[]) {
    int triangle, circle, x_button, square;
    double ax, ay, az, gx, gy, gz;

    while (1) {
        scanf("%lf, %lf, %lf, %lf, %lf, %lf, %d, %d, %d, %d",
              &ax, &ay, &az, &gx, &gy, &gz, &triangle, &circle, &x_button, &square);

        /* printf for observing values scanned in from ds4rd.exe,
        * be sure to comment or remove in final program */
        printf("Echoing output: %lf, %lf, %lf, %lf, %lf, %lf, %d, %d, %d, %d \n",
               ax, ay, az, gx, gy, gz, triangle, circle, x_button, square);

        /* It would be wise (mainly save time) if you copy your code to calculate
        * the magnitude from lab03-1.c. You will also need to copy your
        * prototypes and functions to the appropriate sections in this program. */
        // printf("The acceleration's current magnitude is: %lf\n", t,
        // magnitude(ax, ay, az);
    }

    return 0;
}