# Minimum-Pizzas


---

### 🧠 **Problem Summary**

* Each **pizza** has **4 slices**.
* There are **N friends**, and **each friend needs X slices**.
* You want to find the **minimum number of pizzas** needed.

---

### ✅ **Steps Explained**

#### 1. **Input the number of test cases:**

```cpp
int T;
cin >> T;
```

You may need to do this calculation for multiple test cases.

#### 2. **Loop over each test case:**

```cpp
while (T--) {
    int N, X;
    cin >> N >> X;
```

Here, you're reading the number of friends (`N`) and how many slices each one wants (`X`).

#### 3. **Calculate total slices needed:**

```cpp
int totalSlices = N * X;
```

Multiply the number of friends by the number of slices each one wants.

#### 4. **Find minimum number of pizzas:**

```cpp
int pizzas = (totalSlices + 3) / 4;
```

Why `+3`? To do **ceiling division** with integers.
Dividing `totalSlices` by 4 (slices per pizza) gives how many pizzas you need, but since C++ truncates division, we add 3 to ensure it rounds *up*.

📌 **Example**:
If `totalSlices = 10`:

* `10 / 4 = 2` (which is wrong because 2 pizzas = 8 slices, not enough)
* But `(10 + 3) / 4 = 13 / 4 = 3` ✔️

#### 5. **Print the result:**

```cpp
cout << pizzas << endl;
```

Prints the number of pizzas for each test case.

---

Let me know if you'd like a [visual diagram](f), [code with comments](f), or [interactive explanation](f).
