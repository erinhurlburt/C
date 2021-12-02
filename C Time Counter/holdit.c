#include<stdio.h>
#include<time.h>
 
void timeCount() {
    char enter;
 
    printf("Take a deep breath and press enter to start your time. \n");
    fflush(stdout);
    scanf("%c", &enter);
 
    getchar();
    
}
 
int main() {
 
    int t;
    timeCount();
    t = time(0);
    printf("Press enter again when you have to exhale. \n");
    getchar();
    t = time(0) - t;
    //double time_taken = ((double)t)/CLOCKS_PER_SEC;
 
    printf("You held your breath for %d seconds \n", t);
    fflush(stdout);
    return 0;
}