#include<iostream>
#include<string>
using namespace std;

int main() {
    string alphabets {"abcdefghijklmnopqrstuvwxyzBCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key       {"ZYXWVUHTSRQPONMLKIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};

    string msg;
    string encrypted_msg;
    string decrypted_msg;

    cout << "Enter your message: ";
    getline(cin, msg);

    // Encryption
    cout << "\nEncrypting message..." << endl;
    for (char c : msg) {
        size_t position = alphabets.find(c);
        if (position != string::npos) {
            char new_c = key.at(position);
            encrypted_msg += new_c;  // Append
        } else {
            encrypted_msg += c;  // Leave characters like spaces/punctuation unchanged
        }
    }

    cout << "Encrypted message: " << encrypted_msg << endl;

    // Decryption
    cout << "\nDecrypting message..." << endl;
    for (char c : encrypted_msg) {
        size_t position = key.find(c);
        if (position != string::npos) {
            char original_c = alphabets.at(position);
            decrypted_msg += original_c;
        } else {
            decrypted_msg += c;
        }
    }

    cout << "Decrypted message: " << decrypted_msg << endl;

    return 0;
}
