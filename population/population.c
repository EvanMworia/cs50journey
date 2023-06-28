#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // TODO: Prompt for start size

   int StartSize;
   do
   {

    StartSize = get_int("Enter the current population of llamas: ");

   } while (StartSize < 9);

    // TODO: Prompt for end size

    int EndSize;

    do
    {
        EndSize = get_int("Enter the desired end size of population: ");

    } while (EndSize < StartSize);

    // TODO: Calculate number of years until we reach threshold


    int years = 0;

    while (StartSize < EndSize)
    {
        StartSize = StartSize + (StartSize/3) - (StartSize/4);
        years++;
    }
    // TODO: Print number of years
    printf("Years: %d\n", years);
}
