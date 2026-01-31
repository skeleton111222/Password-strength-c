# 🔐 Password Strength Checker in C

## 📌 Project Description
The **Password Strength Checker** is a console-based application written in **C** that evaluates the strength of a user-entered password.  
It checks whether the password meets common security criteria such as minimum length, use of uppercase and lowercase letters, digits, and special characters.

This project is ideal for beginners learning **strings, conditionals, loops, and character handling** in C.

---

## 🛠️ Technologies Used
- **Programming Language:** C  
- **Compiler:** GCC / Any standard C compiler  
- **Libraries Used:**
  - `stdio.h`
  - `string.h`
  - `ctype.h`

---

## 🧠 Concepts Used
- Strings
- Loops
- Conditional statements
- Character classification (`ctype.h`)
- Input validation

---

## 📂 Files Included
- `password-checker.c` – Main source code file  
- `README.md` – Project documentation  

---

## ✨ Features
- Accepts password input from the user
- Checks minimum password length (8 characters)
- Verifies presence of:
  - Uppercase letters
  - Lowercase letters
  - Digits
  - Special characters
- Displays whether the password is **STRONG** or **WEAK**
- Simple, beginner-friendly logic
- Uses standard C libraries only

---

## ▶️ How to Compile / Run
### 🔹 Clone using cmd & following command or download the file
```
git clone https://github.com/skeleton111222/Password-strength-c
```
### 🔹 Redirect to the folder
```
cd Password-strength-c
```
### 🔹 Compile the Program
```
gcc password-checker.c.c -o password-checker.c
```
### 🔹 Run the Program
```
./password_checker
```

---

## 🗂️ File Structures
```
Password-strength-c/
│
├── .gitignore (to ignore compiled files)
├── README.md (projects info (this file))
└── password-checker.c (code file)
```
---

## 🧪 Output Samples
✅ Strong Password
```
Enter password: Hello@123
Password is STRONG 💪
```
❌ Weak Password
```
Enter password: hello123
Password is WEAK ❌
```

---

## 📝 Notes

- Password input does not include spaces.
- This project is intended for learning purposes and does not store passwords.
- Suitable for college mini-projects, practice, and viva demonstrations.
- Can be extended with advanced security features.

---

## 🚀 Future Enhancements

- Add password strength levels (Weak / Medium / Strong)
- Hide password input using *
- Display missing criteria feedback
- Implement user registration & login system
- Store user data using file handling
- Prevent common or weak passwords

---

## ✅ Conclusion

The Password Strength Checker in C is a simple yet effective project to understand real-world string processing and validation in C.
It helps build a strong foundation in input handling, conditional logic, and character classification, making it an excellent beginner-level project.
