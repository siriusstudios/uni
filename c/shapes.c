#include <stdio.h>
#include <math.h>

void ascend(int amt){
    //iterator, yet again. Please start by looking at main() and square() functions to have a better understanding
    int i = 0;
    int row = 1;
    //making sure it loops (amt) amount of times
    while(i<amt){
        //overall, as you can see rows get incremented here too (rows++)
        //here the length of each row (j) depends on amount of rows.
        //EXAMPLE
        //*
        //**
        //***
      
        //the length matches exactly the row number. So all we need to do is print * j amount of times.
        for(int j = 0; j<row; j++){
            printf("*");
        }
        row++;
        i++;
        //break the line again
        printf("\n");
    }
}

//works just as ascend() function except rows and i's get decremeneted. (rows--, i-- instead of rows++, i++)
void descend(int size){
    int init_size = size;
    int i = 0;
    while(i<init_size){
        for(int j = 0; j<size; j++){
            printf("*");
        }
        i++;
        size--;
        printf("\n");
    }
}

void triangle(int size){
    //this function makes the triangle rise until the given point (peak/2 in this case)
    ascend(size);
}

void pyramid(int peak){
    //this function makes the triangle rise until the given point (peak/2 in this case)
    ascend(round(peak/2));
    //this function makes the triangle go down FROM the given point (peak/2 in this case)
    descend(round(peak/2));
    //pyramid is basically two triangles here in 2D lol
}

void square(int rows, int size){
    //i is iterator. It will make sure that we dont surpass the amount of given rows
    int i = 0;
    while(i<rows){
        //using j we will just print * needed amount of times, that amount of times will match size provided.
        for(int j = 0; j<size; j++){
            printf("*");
        }
        //break the line
        printf("\n");
        i++;
    }
}

int main(){
    printf("\nTRIANGLE:\n");
    //size of triangle (rows)
    triangle(5);
    printf("\nPYRAMID:\n");
    //size of pyramid, in this case peak will be (10/2) = 5.
    pyramid(10);
    printf("\nSQUARE:\n");
    //4 is amount of rows, 9 is length of them
    square(4, 9);
    return 0;
}
