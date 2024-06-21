#include <stdio.h>
#include <stdbool.h>

void sort(int array[], int size);

int main(int argc, char const *argv[])
{
    int nums[] = {1, 4, 1, 2, 4, 5, 8, 9, 1, 4, 2, 3, 0, 1, 0, 5, 0};
    int size = sizeof(nums)/sizeof(nums[0]);

    sort(nums, size);

    for(int i=0; i<size; i++)
    {
        printf("\n%d", nums[i]);
    }

    return 0;
}

void sort(int array[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        bool check = false;
        for(int j=0; j<size-1; j++){
            if (array[j] > array[j+1]){
                int temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
                check = true;
            }
        }
        if (check == false)
        {
            printf("\nAll sorted");
            break;
        }
    }
}