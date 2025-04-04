Blockchain Simulator 🚀🔗

About This Project ✨

This is a very simple and basic blockchain project created by me to understand the fundamentals of blockchain technology. The goal of this project is to implement a basic blockchain structure using C++ and SHA-256 hashing.

Code Contribution 💻

main.cpp: Most of this code was written by me, except for a few tweaks and improvements suggested by ChatGPT.

sha256.cpp: The majority of this code was generated with the help of ChatGPT. Since SHA-256 is a well-known cryptographic hashing algorithm, implementing it from scratch is unnecessary and would be highly complex. Instead, the implementation relies on OpenSSL, which is an industry-standard library for cryptographic operations.

Features 🔥

Implements a simple blockchain structure with blocks containing:

Transaction data

Previous hash reference

SHA-256 hash

Nonce value

Uses SHA-256 for hashing transactions.

Demonstrates how blocks are linked together using cryptographic hashes.


How to Compile and Run ⚡

Requirements 📌

C++ compiler (g++)

OpenSSL installed on your system

Steps 🛠️

Install OpenSSL (if not installed):

brew install openssl   # For macOS
sudo apt install libssl-dev   # For Linux

Compile the code:

g++ main.cpp sha256.cpp -o blockchain -lssl -lcrypto

Run the program:

./blockchain



<img width="1157" alt="image" src="https://github.com/user-attachments/assets/d348f3d5-0508-4f3c-aa3f-6bd0d7de95f7" />

