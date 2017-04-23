/*  CSCI 340 Project Dr. Leclerc Spring 2017
    Dylan Mansour & Joe Schell
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<sys/time.h>
#include "project.h"

/*
IDEA:
1. create 128 capacity array with each index containing a data type of 1 byte
2. access each index in order and time it
3. print out the index and the time it took to access, and the address
4. try to see if there was a big change in access time on indices that are a power of 2
*/
int calc_line_size(){
int nums[128];
int i = 0;
clock_t start = clock(), diff;
char* doggy = "hello";
//initialize the nums array
for(i = 0; i<128; i++){
    nums[i] = i;
}

//get the access time for each num
for(i = 0; i<128; i++){
    start = clock();
    printf("access time for num %d:  ", i);
    diff = clock() - start;
    printf("%lu\n", diff * 1000000000 / CLOCKS_PER_SEC);

}

start = clock();
printf("access string:%s: ", doggy);
diff = clock() - start;
printf("%lu ns\n", diff * 1000000000 / CLOCKS_PER_SEC);

return 0;
}//end of calc_line_size



int main(int argc, char* argv[]){
    //testing how to use the clock function:
int i = 0;
int j = 0;
clock_t start = clock(), diff;

// for(i = 0; i<500; i++){
//     for(j = 0; j<10000000; j++){
//         ;
//     }
//     ;
// }
diff = clock() - start;

printf("time elapsed in nano sec: %lu ns\n", diff  * 1000000000 / CLOCKS_PER_SEC);


calc_line_size();

    return 0;
}
