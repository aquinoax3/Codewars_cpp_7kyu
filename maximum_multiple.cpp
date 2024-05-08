// Task
// Given a Divisor and a Bound , Find the largest integer N , Such That ,

// Conditions :
// N is divisible by divisor

// N is less than or equal to bound

// N is greater than 0.


int maxMultiple(int divisor, int bound) {
    int result = 0;
    
    for (int i = divisor; i <= bound; i+=divisor) {
    result = i;
    }
    
    return result;
}
