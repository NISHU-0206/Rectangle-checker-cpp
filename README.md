# Rectangle Area and Perimeter Calculator (C++)

This is a simple C++ program using Object-Oriented Programming to model and perform operations on rectangles.

---

## 💡 Features

- Accepts user input for multiple rectangles
- Calculates and displays:
  - Area
  - Perimeter
- Displays rectangle details
- Checks if a rectangle is a square

---

## 🧩 Class Structure

### 🔸 `Rectangle` Class

**Private Attributes:**
- `float width` – Width of the rectangle
- `float height` – Height of the rectangle

**Public Functions:**
- `void setData(float w, float h)` – Sets the width and height
- `void calculateArea()` – Calculates and prints the area
- `void calculatePerimeter()` – Calculates and prints the perimeter
- `void display()` – Displays all rectangle properties
- `bool isSquare(float a, float b)` – Checks whether the rectangle is a square

---

## ⚙️ Program Flow

1. Takes width and height of two rectangles from the user
2. For each rectangle:
   - Sets data using `setData()`
   - Calculates area and perimeter
   - Displays rectangle details
3. Checks if the third rectangle is a square by comparing its dimensions

---

## 🧑‍💻 How to Compile & Run

Save the file as `rectangle.cpp`

### Compile:
g++ rectangle.cpp -o rectangle

shell
Copy
Edit

### Run:
./rectangle

---

## ✅ Notes

- The function `isSquare()` is defined outside the class using scope resolution (`::`)
- Demonstrates the use of class objects and methods effectively
- Input is taken from the user via `cin`

---
