#include<stdio.h>

struct pairInt{
    int min, max;
};

//Function Definition
//Function returning structure 
struct pairInt min_max(int x, int y)
{
    struct pairInt pair; //pair is avariable of structure having two components- min and max
    pair.min = (x > y) ? y : x; //if x>y, then y is the minimum value
    pair.max = (x > y) ? x : y; //if x>y, then x is the maximum value
    return pair;
}

int main(){
    struct pairInt result; //result is avariable of structure having two components- min and max
    result = min_max(3,5); //Call by value, function call returns structure variable pair
    printf("%d <= %d", result.min,result.max);
}