#include "sha256.h"
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

/* Predefined constants for SHA-256 */
vector<unsigned int> k = {
    0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5,
    0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3, 0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174,
    0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
    0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967
};

/* Initial hash values */
vector<unsigned int> h = { 
    0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a, 
    0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19 
};

/* Utility functions */
unsigned int rightRotate(unsigned int x, unsigned int n) {
    return (x >> n) | (x << (32 - n));
}

/* SHA-256 hashing function */
string sha256(const string str) {
    vector<unsigned int> w(64);
    unsigned int a, b, c, d, e, f, g, h0;
    a = h[0]; b = h[1]; c = h[2]; d = h[3];
    e = h[4]; f = h[5]; g = h[6]; h0 = h[7];

    // Process message in 512-bit chunks (simplified for single block)
    for (int i = 0; i < 64; i++) {
        unsigned int temp1 = h0 + rightRotate(e, 6) + (e & f) + k[i] + w[i];
        unsigned int temp2 = rightRotate(a, 2) + (a & b);
        h0 = g; g = f; f = e; e = d + temp1;
        d = c; c = b; b = a; a = temp1 + temp2;
    }

    h[0] += a; h[1] += b; h[2] += c; h[3] += d;
    h[4] += e; h[5] += f; h[6] += g; h[7] += h0;

    // Convert hash to hex string
    stringstream ss;
    for (auto val : h) ss << hex << setw(8) << setfill('0') << val;
    return ss.str();
}
