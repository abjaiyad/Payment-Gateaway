# 💳 Payment Gateway Simulation — C

A beginner-level C program that simulates a basic UPI payment gateway workflow with payment-mode selection, PIN validation, and balance checking.

> **Note:** This is an educational simulation. It does not process real payments or connect to banking services.

## 🚀 Features
- Select from multiple simulated payment modes
- Accept QR, mobile, UPI, or bank-account details as input
- Validate a predefined UPI PIN
- Check available balance before a transaction
- Deduct successful transaction amounts from the simulated balance

## 🧠 Concepts Practiced
- Variables and data types
- `printf` and `scanf`
- `do...while` loops
- `switch` statements
- Conditional statements
- Basic transaction logic

## 📂 Project Structure
```text
Payment-Gateaway/
├── project.c
├── README.md
└── .gitignore
```

## ▶️ How to Run
```bash
gcc project.c -o payment_gateway
./payment_gateway
```

## 🔐 Educational Note
The program contains a predefined PIN and starting balance for demonstration purposes only. Do not use real credentials or financial information with this program.

## 🔮 Future Improvements
- Add transaction history
- Improve input validation
- Add safer handling of sensitive input
- Separate payment processing into reusable functions

## 👨‍💻 Author
**Amad Bin Jaiyad**  
BCA Final Year Student | Developer & Learner

> Repository name remains `Payment-Gateaway` to preserve the existing GitHub history.