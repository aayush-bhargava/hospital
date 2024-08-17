# Simulation of Hospital Management System
<h1 align="center">Hi 👋, I'm Aayush Bhargava</h1>
<h3 align="center">A passionate embedded and software developer from India</h3>
<img align="right" alt="Coding" width="400" src="https://dotrobot.nl/wp-content/uploads/2023/07/embedded-hardware-engineer-elektrotechniek.webp">

- 🔭 I’m currently working on **Software projects**

- 🌱 I’m currently learning **Embedded electronics and tele-communication engineering**

- 🤝 I’m looking for help with **microprocessors and stuff.**

- 👨‍💻 All of my projects are available at [https://github.com/aayush-bhargava](https://github.com/aayush-bhargava)

- 💬 Ask me about **arduino connections ;)**

- 📫 How to reach me **aayushbhargava71@gmail.com**

- ⚡ Fun fact **i can make something move just with my skills. lol**

- Also, my Tinkercad Profile link is mentioned to see my all other small projects online as well.
- Tinkercad : https://www.tinkercad.com/users/91NkU8CeNkv

<h3 align="left">Connect with me:</h3>
<p align="left">
</p>

<h3 align="left">Languages and Tools:</h3>
<p align="left"> <a href="https://www.cprogramming.com/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="c" width="40" height="40"/> </a> <a href="https://www.w3schools.com/cpp/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/cplusplus/cplusplus-original.svg" alt="cplusplus" width="40" height="40"/> </a> <a href="https://www.w3schools.com/cs/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/csharp/csharp-original.svg" alt="csharp" width="40" height="40"/> </a> <a href="https://www.java.com" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/java/java-original.svg" alt="java" width="40" height="40"/> </a> <a href="https://developer.mozilla.org/en-US/docs/Web/JavaScript" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/javascript/javascript-original.svg" alt="javascript" width="40" height="40"/> </a> <a href="https://www.python.org" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/python/python-original.svg" alt="python" width="40" height="40"/> </a> </p>

- 👨‍💻 All of my projects are available at [https://github.com/aayush-bhargava](https://github.com/aayush-bhargava)

- 💬 Ask me about **arduino connections and code debugs ;)**

- 📫 How to reach me **aayushbhargava71@gmail.com**

- ⚡ Fun fact **i can make something move just with my skills. lol**

- Also, my Tinkercad Profile link is mentioned to see my all other small projects online as well.
- Tinkercad : https://www.tinkercad.com/users/91NkU8CeNkv

<h3 align="left">Connect with me:</h3>
<p align="left">
</p>

<h3 align="left">Languages and Tools:</h3>
<p align="left"> <a href="https://www.cprogramming.com/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="c" width="40" height="40"/> </a> <a href="https://www.w3schools.com/cpp/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/cplusplus/cplusplus-original.svg" alt="cplusplus" width="40" height="40"/> </a> <a href="https://www.w3schools.com/cs/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/csharp/csharp-original.svg" alt="csharp" width="40" height="40"/> </a> <a href="https://www.java.com" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/java/java-original.svg" alt="java" width="40" height="40"/> </a> <a href="https://developer.mozilla.org/en-US/docs/Web/JavaScript" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/javascript/javascript-original.svg" alt="javascript" width="40" height="40"/> </a> <a href="https://www.python.org" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/python/python-original.svg" alt="python" width="40" height="40"/> </a> </p>
<p>The provided code is a C++ program for a Hospital Management Software simulation. Here's a breakdown of the code functionalities:

**Classes:**

- `all`: This class holds the main functionalities of the software. It has member variables like `task` to store the user's chosen task, `PI` (an array of structures) to store patient information, `T1` (an object of the `temp` class) for temporary variables, etc. It also has member functions like `tasks()` to display the main menu, `enter_patient_info()` to enter new patient information, `show_patient_detail()` to display patient details, `search_menu()` to search by city or blood group, `delete_entry()` to delete an entry, `recycle_bin()`, `software_detail()`, and `exit_function()`.

- `date`: This class stores the date and has member functions like `enter_date()` to get the date from the user and `show_date()` to display the date in a formatted way.

- `dob`: This class stores the date of birth of a patient and has member functions like `enter_date()` to get the date of birth from the user and `show_date()` to display the date of birth in a formatted way.

- `temp`: This class holds temporary variables used throughout the program. It has member variables like `count` (number of patients entered), `serial` (serial number assigned to each patient), `entry_index` (array to keep track of deleted entries), etc.

**Functions:**

- `main()`: This is the main function where the program starts. It creates objects of all the classes, calls the `enter_date()` function of the `date` class to get the current date, and then calls the `tasks()` function of the `all` class to display the main menu.

- `tasks()`: This function displays the main menu of the software with options like entering a new patient, viewing details of existing patients, searching by city or blood group, deleting an entry, viewing the recycle bin, getting information about the software, and exiting. It takes the user's choice as input and calls the corresponding function based on the choice.

- `enter_patient_info()`: This function allows the user to enter information for a new patient. It gets details like name, sex, marital status, disease, blood group, address, and date of birth. It also checks for duplicate entries and handles invalid inputs.

- `show_patient_detail()`: This function displays the details of a patient based on the registration number entered by the user. It checks if the registration number is valid and displays the information if found.

- Other functions like `search_menu()`, `delete_entry()`, `recycle_bin()`, `software_detail()`, and `exit_function()` are likely implemented similarly to handle searching, deleting entries, viewing the recycle bin, displaying software information, and exiting the program respectively.

**Overall, this code simulates a basic Hospital Management Software with functionalities for adding, viewing, searching, and deleting patient information.**

**Note:**

- The code uses `conio.h` header which is non-standard and might not be available in all compilers. You might need to replace it with platform-specific console input/output functions.
- The code uses some repetitive checks for invalid inputs. These can be improved by using more robust input validation techniques.
- The comments can be improved to provide better explanations for the code sections.
</p>
