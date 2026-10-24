#include "difference_of_squares.h"

namespace difference_of_squares {

// TODO: add your solution here
    int square_of_sum(int n){
        int sum = (1 + n) * n / 2;
        return sum * sum;
    }

    int sum_of_squares(int n){
        int total_sum = 0;
        for (int i = 1; i <= n; i++){
            int sum = i*i; 
            total_sum += sum;
        }
        return total_sum;
    }

    int difference(int n){
        int square_sum = square_of_sum(n);
        int sum_square = sum_of_squares(n);
        return square_sum - sum_square;
    }

}  // namespace difference_of_squares
