// For "x", determine how many positive integers less than or equal to "x" are odd but not prime. Assume "x" is an integer between 1 and 10000.

// Example: 5 has three odd numbers (1,3,5) and only the number 1 is not prime, so the answer is 1

// Example: 10 has five odd numbers (1,3,5,7,9) and only 1 and 9 are not prime, so the answer is 2



bool isPrime(int n) {
    // 0 and 1 are not prime numbers
    if (n <= 1) {
        return false;
    }
    // 2 and 3 are prime numbers
    if (n <= 3) {
        return true;
    }
    // If the number is divisible by 2 or 3, it's not prime
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    // Check for divisors from 5 up to the square root of n.
    // Loop increments by 6 (checking i and i + 2) to skip multiples of 2 and 3.
    for (int i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }

    // If no divisors were found, the number is prime
    return true;
}

unsigned int oddNotPrime(unsigned int n){
 unsigned int count = 0;
  
  for (int i = 1; i <= n; i++) {
    if (isPrime(n)) {
      count++;
    }
  }
  
  return count;
}
