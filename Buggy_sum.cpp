#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    // Deliberate off-by-one error: i <= 5 instead of i < 5
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    cout << "The sum is: " << sum <<endl;
    return 0;
}