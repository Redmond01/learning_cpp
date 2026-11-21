# C++ Practice Projects (LearnCpp Progression)

## Tier 1: Core Arithmetic, Types & Constants

### 1. Digital Stopwatch Breakdown (Seconds Converter)
* **What you build:** Take a large number of seconds from the user (e.g., `3665`) and convert it into `Hours : Minutes : Seconds` (`1 : 1 : 5`).
* **The C++ Lesson:** **The Modulo Operator (`%`).** While `/` gives you the whole hours, `%` gives you the leftover remainder seconds—a core pattern used everywhere in programming (clocks, array wrapping, cryptography).

### 2. Exact Change Dispenser
* **What you build:** Ask for an amount of money in cents (e.g., `87` cents) and calculate the minimum number of quarters (`25`), dimes (`10`), nickels (`5`), and pennies (`1`) needed.
* **The C++ Lesson:** **Sequential State Updates.** You'll practice updating a "remaining balance" variable step-by-step from largest to smallest denomination without losing track of state.

### 3. Simple Physics Projectile / Fall Calculator
* **What you build:** Ask the user for the height of a building in meters, then print the height of a dropped ball at `0`, `1`, `2`, `3`, `4`, and `5` seconds using $d = \frac{1}{2}gt^2$ ($g = 9.8$). *(Bonus: this is a classic learncpp.com style problem!)*
* **The C++ Lesson:** **`constexpr` Constants & Expressions.** Instead of scattering magic numbers like `9.8` everywhere, you'll learn to define `constexpr double gravity{9.8};` and reuse clean formulas.

### 4. ASCII Character Decoder & Shifter (Mini Caesar Cipher)
* **What you build:** Ask the user for a single lowercase letter and a shift number (e.g., `'a'` and `3`), then print its ASCII numeric code and the shifted letter (`'d'`).
* **The C++ Lesson:** **How `char` is actually an integer in disguise.** You'll see firsthand that `'a'` is just the number `97` in RAM, and learn how `static_cast<int>(ch)` and `static_cast<char>(...)` convert between letters and numbers.

---

## Tier 2: Adding `if` / `else` and Loops *(Your very next steps on LearnCpp)*

### 5. Interactive Unit & Temperature Converter
* **What you build:** Display a numbered menu (`1.` Celsius to Fahrenheit, `2.` Kilometers to Miles, `3.` Kilograms to Pounds), read the user's choice, and convert their value.
* **The C++ Lesson:** **Branching (`if` / `else if` or `switch`) & Input Validation.** What happens if the user types `9` instead of `1`, `2`, or `3`? You'll learn how to catch bad choices gracefully.

### 6. Text-Based Dungeon Room / Story Choice Game
* **What you build:** A 3-stage interactive story where the player has health (`int hp{100};`) and gold (`int gold{0};`), making choices (`1` or `2`) that either trap them or reward them.
* **The C++ Lesson:** **Variable Scope & Tracking State Over Time.** You'll see how variables declared at the top of `main()` survive across multiple scenes while temporary variables inside `{ }` blocks get destroyed when the block ends.

### 7. Number Guessing Game ("Higher or Lower")
* **What you build:** Pick a secret target number (hardcoded first, then randomized later), let the user keep guessing until they find it, and tell them `"Too high!"` or `"Too low!"` along with their attempt count.
* **The C++ Lesson:** **`while` Loops & Loop Counters.** You'll learn how to keep a program alive until a specific condition is met rather than exiting after one run.

### 8. Mini ATM / Bank Account Simulator
* **What you build:** Start with a balance of `$1,000.00`. Loop a menu allowing the user to Check Balance, Deposit, Withdraw, or Exit—blocking withdrawals that exceed the balance.
* **The C++ Lesson:** **Guard Clauses & Defensive Logic.** You'll practice checking invalid states early (like negative deposits or overdrafts) before modifying critical variables.

### 9. Gradebook & Average Analyzer
* **What you build:** Keep asking the user to enter test scores until they type `-1` to finish, then print the total number of tests, the highest score, the lowest score, and the class average.
* **The C++ Lesson:** **Sentinel Values & Running Accumulators.** You'll learn how to process an unknown amount of user input without needing a `std::vector` yet, simply by updating `sum`, `min`, and `max` on each input.