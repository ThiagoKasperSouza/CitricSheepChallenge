#include <iostream>
#include <string>
#include "../include/sha256.cpp"
#include "../include/string_hex.cpp"
using namespace std;

/**INSTRUÇÕES: Ler TODO.md*/


int main(int argc, char *argv[])
{
    string str = "CitricSheep";
    int ascii_values[str.size()];
    int sum= 0;
    for(int i = 0; i < str.size(); i++) {
        ascii_values[i] = (int) str.at(i);
        sum += ascii_values[i];
    }
    string sha_inp= to_string(sum);
    string res = sha256(sha_inp);

    cout << "Soma: " << sum << endl;
    cout << "SHA256 hash: " << res << endl;
    cout << "Resultado em hex: " << string_to_hex(res) << endl;
}
