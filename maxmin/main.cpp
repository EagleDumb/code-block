#include <iostream>

using namespace std;
int max_number (int a[], int b) {
    int max1 = 0;
    for (int i = 0; i < b; i ++) {
        if (max1 <= a[i]) {
            max1 = a[i];
        }
    }
    return max1;
}
int min_number (int a[], int b) {
    int min1 = a[0];
    for (int i = 0; i < b; i++) {
        if (min1 >= a[i]) {
            min1 = a[i];
        }
    }
    return min1;
}

int main()
{
    int arr[10] = {2222, 3, 19, 88, 12321, 28, 4774, 31, 141, 25};
    cout << "max: " << max_number(arr,10);
    cout << "min: " << min_number(arr,10);
}
