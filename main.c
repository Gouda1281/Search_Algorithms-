#include <stdio.h>
#include <stdlib.h>



int main()
{
    int data[] = {1,1,2,3,4,5,6,7,8,9,10};

    int len  =  sizeof(data)/sizeof(data[0]);
    int Num_Seach  = 10;
    int index =-1;
    index = binary_search(data, len, Num_Seach);
    printf("index : %d ,%d\n", index,len);
    return 0;
}
