// contains logic and function calls
//fl=first elemtn , ll = last element
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>


bool palindrome(int *arr, int size){

int *fl=arr;
int *ll=arr + (size-1);

  while(fl<ll){

      if(*fl!=*ll){

          return false;

      }

    fl++;
    ll--;
  }

return true;

}

