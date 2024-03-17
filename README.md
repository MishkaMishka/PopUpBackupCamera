# PopUp Backup Camera

## Description
The PopUp Backup Camera project utilizes a NodeMCU V3 (ESP8266) along with a Servo motor (MG90S) to control the position of a camera assembly. The camera assembly is housed in a custom 3D-printed housing, which can be found on Thingiverse (provide the Thingiverse link). The code included in this repository allows the servo motor to maintain a specific position until a reverse signal is received, making it suitable for backup camera applications.

## Hardware Requirements
- NodeMCU V3 (ESP8266) board
- Servo motor (MG90S)
- Custom 3D-printed housing for the camera assembly
- Wires and connectors

## Installation
1. Connect the servo motor to the NodeMCU V3 board according to the wiring instructions.
2. Upload the provided Arduino code to the NodeMCU V3 board.
3. Ensure that the custom 3D-printed housing is assembled and ready for use.

## Usage
1. Power on the NodeMCU V3 board.
2. The servo motor will move to a specific position and hold it until a reverse signal is received.
3. The camera assembly within the custom housing can be used for backup camera applications when reversing your vehicle.

## Contributing
Contributions to this project are welcome. For major changes, please open an issue first to discuss what you would like to change.

## License
[MIT](LICENSE)

## Author
Michał Ziółkowski

## Additional Information
For more details, please refer to the comments within the Arduino code. If you encounter any issues or have questions, feel free to open an issue in this repository.