// Make me slow! Calling makeMeSlow() should take at least 7 seconds.

#include <chrono>
#include <thread>

void make_me_slow() {
    // This function is too fast!
    for (int x = 0; x < 7; x++) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}
