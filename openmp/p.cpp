#include <iostream>
#include <omp.h>
using namespace std;

int main() {
    const int N = 10;
    int arr[N] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;

    // Parallel region with reduction
    #pragma omp parallel for reduction(+:sum)
    for(int i = 0; i < N; i++) {
        sum += arr[i];
    }

    cout << "Sum of array: " << sum << endl;

    return 0;
}