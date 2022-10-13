#include <iostream>

using namespace std;

enum WeaponMask
{
    nog     = 0b00000001,
    pistol  = 0b00000010,
    vint    = 0b00000100,
    drob    = 0b00001000,
    avtomat = 0b00010000,
    granat  = 0b00100000,
    ognemet = 0b01000000,
    tank    = 0b10000000,
};

int main()
{
    /*char a = 53;
    char b = 83;

    cout << "a & b = " << (a & b) << "\n";
    cout << "a | b = " << (a | b) << "\n";
    cout << "a ^ b = " << (a ^ b) << "\n";
    cout << "a << 2 = " << (a << 2) << "\n";
    cout << "a >> 2 = " << (a >> 2) << "\n";
    cout << "~a = " << (int)(signed char)(~a) << "\n";*/


    unsigned char weapon;

    //weapon |= WeaponMask::avtomat;
    //weapon &= ~WeaponMask::drob;
    weapon = weapon | WeaponMask::drob | WeaponMask::ognemet;

    
    int num = 95;

    cout << "-num = " << -num << "\n";
    cout << "-num = " << (~num + 1) << "\n";

    cout << (num << 1) << "\n"; // 95 * 2
    cout << (num << 2) << "\n"; // 95 * 4
    cout << (num << 3) << "\n"; // 95 * 8
    cout << "----------\n";
    cout << (num >> 1) << "\n"; // 95 / 2
    cout << (num >> 2) << "\n"; // 95 / 4
    cout << (num >> 3) << "\n"; // 95 / 8
    

}
