#include<stdio.h>
// 2.callMassage Sub function
void callpcstcode(){
    int postcodes[] = {23000, 24000, 25000, 26000, 27000, 29000};
    //int count = sizeof(postCodes); // 4 byte " 5 element = 20
    int count = sizeof(postcodes) / sizeof(postcodes[0]);
    printf("count; %d\n,count");

    for ( int i = 0; i <= count-1; i++)
    {
        printf("post code: %d\n", postcodes[i]);
    }
}
// 3. studen Sub function
void studen() {}