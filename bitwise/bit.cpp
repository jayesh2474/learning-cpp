#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 3;

    int result_and = a & b;
    cout << "Bitwise AND: " << result_and << endl;

    int result_or = a | b;
    cout << "Bitwise OR: " << result_or << endl;

    int result_xor = a ^ b;
    cout << "Bitwise XOR: " << result_xor << endl;

    int result_not_a = ~a;
    cout << "Bitwise NOT of a: " << result_not_a << endl;

    int result_not_b = ~b;
    cout << "Bitwise NOT of b: " << result_not_b << endl;

    int result_left_shift = a << 1;
    cout << "Bitwise Left Shift of a: " << result_left_shift << endl;

    int result_right_shift = a >> 1;
    cout << "Bitwise Right Shift of a: " << result_right_shift << endl;

    return 0;
}
