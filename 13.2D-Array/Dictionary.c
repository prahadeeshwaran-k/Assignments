// date: 23/07/2025 - Wednesday
// chapter: 2D-Array
// Title: Dictionary Sorting
// Description: This program sorts a dictionary of words in alphabetical order using bubble sort.
// Example: Input: ["jungle", "grape", "ice", "apple",
// "banana", "date", "elephant", "frog", "cherry", "hat"]
// Output: Sorted dictionary in alphabetical order
#include<stdio.h>
#include<string.h>
int main(){
    char dictionary[10][30] = {
    "jungle",
    "grape",
    "ice",
    "apple",
    "banana",
    "date",
    "elephant",
    "frog",
    "cherry",
    "hat",
    };
int n = sizeof(dictionary) / sizeof(dictionary[0]);
    char temp[255];

    for(int i = 0; i< n-1; i++){
        for(int j = 0 ;j< n-i-1;j++){
            if(strcmp(dictionary[j],dictionary[j+1])>1){
                //swap
                strcpy(temp,dictionary[j]);
                strcpy(dictionary[j],dictionary[j+1]);
                strcpy(dictionary[j+1],temp);
            }
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        printf("%s \n   ",dictionary[i]);
    }
    
}
