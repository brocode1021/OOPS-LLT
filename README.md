# OOPS-LLT
The objective of this project is to demonstrate the power of Object-Oriented Programming (OOP) in a practical "Web Dev" scenario.
🏋️ FitTrack Pro: C++ OOP Web Engine

FitTrack Pro is a C++ application that serves as a backend engine to generate a modern Fitness Dashboard. It uses advanced OOP concepts to process workout data and output a fully styled `index.html` file.

## 🚀 Key Features
- **Automated Frontend Generation**: Generates responsive HTML/CSS directly from C++.
- **Smart UI Rendering**: Different visual styles and icons for Cardio and Strength workouts.
- **Dynamic Calorie Logic**: Specialized math formulas for different workout types.
- **Responsive Design**: Uses CSS Flexbox and Grid for a clean layout.

## 🛠 OOP Architecture
- **Abstraction**: Uses an abstract `Workout` class as a blueprint.
- **Inheritance**: Specialized classes (`Cardio`, `Strength`) inherit from the base class.
- **Polymorphism**: The engine processes a generic list of workouts and calls specialized methods at runtime.
- **Encapsulation**: Data members are protected/private, ensuring data integrity.

## 📂 File Description
- `main.cpp`: The core C++ engine containing logic and HTML templates.
- `index.html`: The generated frontend dashboard (created after running the code).

## 🔨 How to Build and Run
1. Ensure you have a C++ compiler (like G++).
2. Open your terminal and run:
   ```bash
   g++ main.cpp -o fittrack
   ./fittrack
