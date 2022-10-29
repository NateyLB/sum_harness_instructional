#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>



void 
setup(int64_t N, uint64_t A[])
{
   printf(" inside sum_indirect problem_setup, N=%lld \n", N);
   for(int i = 0; i < N; i++){
      A[i] = lrand48() % N;
   }
  
}

int64_t
sum(int64_t N, uint64_t A[])
{
   printf(" inside sum_indirect perform_sum, N=%lld \n", N);
   uint64_t sum = 0;
   uint64_t index = A[0];
   uint64_t num;
   for(int i = 0; i < N; i++){
      num = A[index];
      sum += num;
      index = num;
   }
   return sum;
}

