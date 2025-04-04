#include <iostream>
#include "sha256.h"  // Ensure this is present

using namespace std;

class Block {
public:
/* In blockchain, a block consists of four important pieces of information - 
   1. Transaction data
   2. Nonce
   3. Hash value
   4. Previous hash value */

    string data; // Could be anything like username or unique user ID
    string previousHash; // Hash is a digitized fingerprint of a document or a set of data
    string hash; // Hash of the current payment
    int nonce; // Nonce stands for "number used only once"
    
    // Random number that the blockchain mining program uses

    Block(string data, string previousHash) {
        this->data = data;
        this->previousHash = previousHash;
        this->nonce = 0;
        this->hash = calculateHash();
    }

    string calculateHash() { 
        string input = data + previousHash + to_string(nonce);
        return sha256(input);
    }
};

int main() {
    Block block1("Ansh sends 10 bitcoins to Shaurya", "0");
    cout << "Block 1:\nData: " << block1.data << "\nHash: " << block1.hash << endl << endl;

    Block block2("Shaurya sends 5 bitcoins to Kavish", block1.hash);
    cout << "Block 2:\nData: " << block2.data << "\nHash: " << block2.hash << endl;

    return 0;
}
