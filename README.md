# Auto Irrigation System

This project provides a solution for an auto irrigation system using a tensiometer and integrates with an IoT platform for remote monitoring.

## Repository Structure

- `hardware/`: Contains hardware schematics and bill of materials.
- `firmware/`: Contains code for the Arduino firmware.
- `iot-platform/`: Contains code for IoT integration.
- `documentation/`: Includes user manual and troubleshooting guide.

## Getting Started

1. **Set Up Hardware:**
   - Connect the tensiometer and relay module as described in the `hardware/` folder.

2. **Upload Firmware:**
   - Open the Arduino IDE or similar.
   - Upload the code from `firmware/src/main.cpp` to your microcontroller.

3. **Run IoT Integration Script:**
   - Install required Python libraries using `pip install paho-mqtt`.
   - Modify `iot-platform/iot_integration.py` with your MQTT broker details.
   - Run the script to start monitoring.

4. **Documentation:**
   - Refer to the `documentation/` folder for the user manual and troubleshooting guide.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
