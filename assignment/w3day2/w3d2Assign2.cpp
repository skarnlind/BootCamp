// Generate random numbers between 0-33, ten thousand times, then print how many duplicates of each number
// you have generated -- print in ascending order.

// Hint: results should be stored in ascending order in your container.


v1 = rand() % 100;         // v1 in the range 0 to 99
v2 = rand() % 100 + 1;     // v2 in the range 1 to 100
v3 = rand() % 30 + 1985;   // v3 in the range 1985-2014 

v4 = rand() % 34;   // v4 in this case