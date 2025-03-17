# Unit-Convertor
The project UNIT CONVERTOR is an assistive tool for people to convert the values between different metrices

# Unit Converter

## Description
This project is a simple unit conversion tool implemented in C. It allows users to convert values between different units of measurement, including length, mass, time, temperature, digital storage, power, volume, area, and speed. The program also maintains a history of conversions in a text file (`Project1.txt`).

## Features
- Convert between various units of measurement.
- Save conversion history to a file.
- User-friendly menu-driven interface.
- Support for multiple categories:
  - Length (Kilometers, Meters, Centimeters, Miles)
  - Mass (Tonnes, Kilograms, Grams, Milligrams, Pounds)
  - Time (Years, Months, Days, Hours, Minutes, Seconds)
  - Temperature (Celsius, Fahrenheit, Kelvin)
  - Digital Storage (Terabytes, Gigabytes, Megabytes, Kilobytes)
  - Power (Kilowatts, Watts, Joules)
  - Volume (Liters, Cubic Meters, Cubic Centimeters, Cubic Feet)
  - Area (Square Kilometers, Square Meters, Square Centimeters, Square Millimeters)
  - Speed (Miles/Hour, Kilometers/Hour, Kilometers/Second, Meters/Second)

## How to Run
1. Compile the C program using a GCC compiler:
   ```bash
   gcc -o unit_converter Project1.c
   ```
2. Run the compiled executable:
   ```bash
   ./unit_converter
   ```
3. Follow the on-screen menu to select the category, input units, and perform conversions.

## Usage
1. Run the program.
2. Choose a category from the main menu.
3. Select the source unit and the target unit for conversion.
4. Enter the value to be converted.
5. View the converted value.
6. Choose whether to continue or exit.

## Requirements
- C compiler (GCC, MinGW, or any other standard C compiler)
- Compatible operating system (Windows, Linux, macOS)

## Notes
- The program saves conversion history in `Project1.txt`.
- If the history file cannot be opened, conversions will still work, but history will not be saved.

## Future Improvements
- Implement a graphical user interface (GUI) using FLTK or another UI framework.
- Add more unit categories.
- Allow users to retrieve and review past conversions from history.

## Author
- Developed by [Your Name]

## License
This project is open-source and can be used and modified freely.

