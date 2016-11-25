//
//  Matrix_Multiplication.c
//  COSC450_Lab1
//
//  Created by Aaron Davis on 9/12/16.
//  Copyright © 2016 Frostburg State University. All rights reserved.
//

#include "main.h"

int multiplicationTester(){
    
    int m, n, o, ran;
    int sum = 0;
    
    //Used for random generator
    time_t t;
    
    //Initializes randum number gengerator
    srand((unsigned) time(&t));
    
    //printf("Enter the dimensions of the first array: ");
    //scanf("%d", &m);
    //scanf("%d", &n);
    
    m = ran = 1 + rand() % 9;
    n = ran = 1 + rand() % 9;
    o = ran = 1 + rand() % 9;
    
    //Initializing first and second 2D array
    int firstArray[m][n];
    int secondArray[n][o];
    int resultArray[m][o];
    
    //Populates first 2D array with integers
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            ran = 1 + (rand() % 9);
            firstArray[i][j] = ran;
        }
    }
    
    //Printing numbers
    printf("Numbers in first Matrix: \n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d\t", firstArray[i][j]);
        }
        printf("\n");
    }
    
    //Populatets second 2D array
    for(int i = 0; i < n; i++){
        for(int j = 0; j < o; j++){
            ran = 1 + (rand() % 9);
            secondArray[i][j] = ran;
        }
    }
    
    //Printing numbers
    printf("Numbers in second Matrix: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < o; j++){
            printf("%d\t", firstArray[i][j]);
        }
        printf("\n");
    }
    
    //Does the math for the problem, then adds to designated spot in array
    for(int i = 0; i < m; i++){
        for(int j = 0; j < o; j++){
            for(int k = 0; k < n; k++){
                sum = sum + firstArray[i][k] * secondArray[k][j];
            }
            
            resultArray[i][j] = sum;
            sum = 0;
        }
    }

    printf("Product of the Matrices: \n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < o; j++){
            printf("%d\t", resultArray[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}


