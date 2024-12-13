#include <iostream>

using namespace std;
bool primenumber (int number) {

    if (number < 2) {
        return false;
    }
    for (int i = 2; i < number; i ++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;

}

int main()
{
    int arr[6] = {4,3,7,9,11,12};
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " :" << primenumber(arr[i]) << endl;
    }
}
