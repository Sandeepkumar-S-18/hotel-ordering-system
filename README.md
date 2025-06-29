# 🏨 Hotel Menu Ordering System (C Project)

This is a simple console-based hotel menu ordering system written in C. It allows users to view a vegetarian food menu, place orders by selecting items and quantities, view an order summary, and proceed to payment instructions. This project is ideal for beginners learning C programming, especially focused on arrays, functions, and user input handling.

---

## 🚀 Features

- Display a well-formatted vegetarian menu
- Order one or multiple items with quantity
- Prevent invalid entries (invalid item numbers or quantities)
- Display a detailed order summary with calculated totals
- Simulated payment instruction
- Loop-based main menu interaction until exit

---

## 📜 Menu Items

| S.No | Item Name               | Price (₹) |
|------|-------------------------|-----------|
| 1    | Veg Biryani             | 150       |
| 2    | Paneer Butter Masala    | 180       |
| 3    | Masala Dosa             | 60        |
| 4    | Idli Vada Combo         | 50        |
| 5    | Gobi Manchurian         | 120       |
| 6    | Tandoori Roti (2 pcs)   | 30        |
| 7    | Dal Fry                 | 100       |
| 8    | Filter Coffee           | 25        |

---

## 🧑‍💻 How to Run

### 🛠 Prerequisites
- A C compiler (e.g., GCC)
- A terminal/command prompt

### 🖥️ Steps

1. **Clone the repository:**
   ```bash
   git clone https://github.com/your-username/hotel-ordering-system.git
   cd hotel-ordering-system
   ```
2. **Compile the code:**
   ```bash
   gcc hotel.c -o hotel
   ```
3. **Run the executable:**
   ```bash
   hotel.exe
   ```

---

## 📂 File Structure

```bash
hotel-ordering-system/
├── hotel.c         # Main source code
├── README.md       # Project documentation
```

---

## 🧾 Sample Output

```bash
===============================================
|              WELCOME TO HOTEL              |
===============================================

1. MENU    2. ORDER FOOD    3. PAYMENT    4. EXIT
Enter your choice: 2

Enter the serial number of the item you want to order: 1
Enter quantity for Veg Biryani: 2
Would you like to order another item? (y/n): y
...
============== ORDER SUMMARY ==============
| Product Name            | Qty |  Total   |
| Veg Biryani             |   2 | Rs. 300  |
| Filter Coffee           |   1 | Rs. 25   |
Total Amount to Pay: Rs. 325
```

---

## 🙌 Acknowledgements
Created with ❤️ for learning and showcasing basic C programming logic.

