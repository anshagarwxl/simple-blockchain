# 🚀🔗 Blockchain Simulator

A basic blockchain simulation project built using **C++** and **SHA-256 hashing**, designed to understand the core mechanics behind blockchain technology. This project focuses on how blocks are linked, how hashes are generated, and how data integrity is maintained across a chain.

---

## ✨ About This Project

This project was created to gain a hands-on understanding of how a blockchain works under the hood — without diving into full-scale cryptocurrencies or complex frameworks.

It features a minimal, self-contained blockchain that includes:
- Basic block structure
- SHA-256 hashing
- Block linking via previous hash
- Simple proof-of-work (nonce)

---

## 💻 Code Contribution Breakdown

- **`main.cpp`**  
  The core logic of the blockchain was written by me, with a few improvements and suggestions powered by ChatGPT.

- **`sha256.cpp`**  
  This part was generated with ChatGPT’s help. Since SHA-256 is a standard cryptographic function, re-implementing it from scratch would be unnecessary and error-prone. This implementation uses **OpenSSL**, a widely accepted cryptography library.

---

## 🔥 Key Features

- Block structure includes:
  - Transaction data
  - SHA-256 hash
  - Previous block’s hash reference
  - Nonce (proof-of-work simulation)
- Cryptographic linking between blocks using SHA-256
- Highlights immutability and integrity of a blockchain chain

---

## ⚙️ How to Compile and Run

### 📌 Requirements
- C++ compiler (`g++`)
- OpenSSL installed on your system

### 🛠️ Setup Steps

1. **Install OpenSSL**

   - macOS:
     ```bash
     brew install openssl
     ```

   - Ubuntu/Linux:
     ```bash
     sudo apt install libssl-dev
     ```

2. **Compile the code**
   ```bash
   g++ main.cpp sha256.cpp -o blockchain -lssl -lcrypto
   ```

3. **Run the program**
   ```bash
   ./blockchain
   ```

---

## 🖼️ Output Preview

<img width="1157" alt="Blockchain Output" src="https://github.com/user-attachments/assets/d348f3d5-0508-4f3c-aa3f-6bd0d7de95f7" />

---

## 🧠 What I Learned

- Fundamentals of how blockchain data structures work
- How cryptographic hashes enforce integrity
- Practical experience compiling C++ projects with OpenSSL
- The role of nonces and block validation

---

## 📄 License

This is a personal learning project and is not meant for production use or real cryptocurrency implementation.  
Feel free to fork or use the code for educational purposes.

---

Let me know if you’d like to add:
- GitHub project badges
- A `LICENSE` file
- Or a `CONTRIBUTING.md` if others will contribute!
