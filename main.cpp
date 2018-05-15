#include <iostream>
#include <cassert>
using namespace std;
char nibble_to_hex(uint8_t i){
    assert(0x0 <= i && i <= 0xf);
    char digits[] = "0123456789abcdef";
    return digits[i];
}
void print_in_hex(uint8_t byte){
    cout << nibble_to_hex(byte >> 4)
            << nibble_to_hex(byte & 0b00001111);
}
const uint8_t*
as_bytes(const void* data) {
    return reinterpret_cast<const uint8_t*>(data);
}
void print_in_hex(const void* data, size_t size){
    const uint8_t* bytes = as_bytes(data);
    for (size_t i = 0; i < size; i++) {
        print_in_hex(bytes[i]);
        if ((i + 1) % 16 == 0) {
            cout << '\n';
        }
        else {
            cout << ' ';
        }
    }
}
char
bit_digit(uint8_t byte, uint8_t bit) {
    if (byte & (0x1 << bit)) {
        return '1';
    }
    return '0';
}
void
print_in_binary(uint8_t byte) {
    for (uint8_t bit = 7; bit > 0; bit--) {
        cout << bit_digit(byte, bit);
    }
    cout << bit_digit(byte,0);
}
void
print_in_binary(const void* data, size_t size) {
    const uint8_t* bytes = as_bytes(data);
    for (size_t i = 0; i < size; i++) {
        print_in_binary(bytes[i]);
        // Для удобства чтения: пробелы между байтами, по 4 байта на строку.
        if ((i + 1) % 4 == 0) {
            cout << '\n';
        }
        else {
            cout << ' ';
        }
    }
}
int
main() {
//    assert(nibble_to_hex(0x0) == '0');
//    assert(nibble_to_hex(0x1) == '1');
//    assert(nibble_to_hex(0x2) == '2');
//    assert(nibble_to_hex(0x3) == '3');
//    assert(nibble_to_hex(0x4) == '4');
//    assert(nibble_to_hex(0x5) == '5');
//    assert(nibble_to_hex(0x6) == '6');
//    assert(nibble_to_hex(0x7) == '7');
//    assert(nibble_to_hex(0x8) == '8');
//    assert(nibble_to_hex(0x9) == '9');
//    assert(nibble_to_hex(0xa) == 'a');
//    assert(nibble_to_hex(0xb) == 'b');
//    assert(nibble_to_hex(0xc) == 'c');
//    assert(nibble_to_hex(0xd) == 'd');
//    assert(nibble_to_hex(0xe) == 'e');
//    assert(nibble_to_hex(0xf) == 'f');
//    uint32_t u32 = 0x42;
//    cout << "u32 bytes: ";
//    print_in_hex(&u32, sizeof(u32));
//    cout << '\n';
//    uint8_t u8 = 3;
//    print_in_binary(&u8, sizeof(u8));
    uint16_t x, z, res;
    char y;
    cout<<"vedite x y z\n";
    cin>>x>>y>>z;
    switch (y){
    case '&' :
        res = x&z;
//        cout<<x<<" "<<y<<"  "<<z<<"=";
        print_in_hex(&x, sizeof(x));
        cout<<y<<' ';
        print_in_hex(&z, sizeof(z));
        cout<<" = ";
        print_in_hex (&res, sizeof(res));
        cout<<'\n';
        print_in_binary(&x, sizeof(x));
        cout<<y<<' ';
        print_in_binary(&z, sizeof(z));
        cout<<" = ";
        print_in_binary (&res, sizeof(res));
        break;
    case '|' :
        res = x|z;
        print_in_hex(&x, sizeof(x));
        cout<<y<<' ';
        print_in_hex(&z, sizeof(z));
        cout<<" = ";
        print_in_hex (&res, sizeof(res));
        cout<<'\n';
        print_in_binary(&x, sizeof(x));
        cout<<y<<' ';
        print_in_binary(&z, sizeof(z));
        cout<<" = ";
        print_in_binary (&res, sizeof(res));
        break;
    case '^' :
        res = x^z;
//        cout<<x<<" "<<y<<"  "<<z<<"=";
        print_in_hex(&x, sizeof(x));
        cout<<y<<' ';
        print_in_hex(&z, sizeof(z));
        cout<<" = ";
        print_in_hex (&res, sizeof(res));
        cout<<'\n';
        print_in_binary(&x, sizeof(x));
        cout<<y<<' ';
        print_in_binary(&z, sizeof(z));
        cout<<" = ";
        print_in_binary (&res, sizeof(res));
        break;
    }
    struct student {
        char name[17],
        uint16_t year,
        float middlePoint;

    };
}