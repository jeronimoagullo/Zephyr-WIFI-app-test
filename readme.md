# 🚀 Zephyr WiFi Test App 🚀

Welcome to the Zephyr WiFi Test App repository! This project serves as a simple demonstration of WiFi connectivity using Zephyr RTOS. Whether you're a beginner exploring embedded development or an experienced developer experimenting with wireless communication, this project provides a solid foundation for understanding and implementing WiFi functionality in your Zephyr projects.

## Features
- Establishes a WiFi connection with a specified network.
- Demonstrates basic WiFi functionality, including connection setup.

## Getting Started
Follow these steps to build and flash the Zephyr WiFi Test App onto your target board:

### Prerequisites
1. Install Zephyr development environment by following the instructions [here](https://docs.zephyrproject.org/latest/getting_started/index.html).
2. Ensure your target board is supported by Zephyr and has WiFi capabilities.
3. check out the Zephyr branch into **version 3.5** to get a stable Zephyr version instead of developing directly into main:
   ```bash
   git checkout v3.5-branch
   ```
4. The Zephyr SDK can be downloaded from the [official Zephyr repository](https://github.com/zephyrproject-rtos/sdk-ng/tags). Download the **v0.16.4** version which is the suitable SDK for Zephyr 3.5 release.

### Build
1. Clone this repository to your local machine:
   ```
   git clone https://github.com/your_username/zephyr-wifi-test-app.git
   ```
2. Navigate to the project directory:
   ```
   cd zephyr-wifi-test-app
   ```
3. Configure the build for your target board:
   ```
   west build -b <your_board>
   ```

### Flash
1. Connect your target board to your computer via USB.
2. Flash the application onto your board:
   ```
   west flash
   ```

## Tested boards
This example should run in any supported Zephyr board. Currently it was tested in the following boards:

### esp32 devkitc wrover
The required Kconfig and dts overlays are included. You can just test it buidling and flashing the code:
```
west build -b esp32_devkitc_wrover
west flash -r esp32 --esp-device <esp32_serial_port>
```

## STM32L4S5 discovery board
This board is named `b_l4s5i_iot01a`
```
west build -b b_l4s5i_iot01a
west flash
```


## Usage
First of all you need to set your WIFI ssid and password in the `jero_wifi.h` file using the `WIFI_SSID` and `WIFI_PASSWORD` preprocessor directives.

Once the application is flashed onto your board, it will automatically attempt to connect to the specified WiFi network. Monitor the serial output to view the connection status and any debug messages.

Expected output:
```
*** Booting Zephyr OS build zephyr-v3.5.0-67-ge8676185931b ***
[00:00:02.098,000] <inf> jero_wifi: STARTING WIFI...
[00:00:02.098,000] <inf> jero_wifi: Waiting for net if being up
[00:00:02.098,000] <inf> jero_wifi: Net if is up
[00:00:02.100,000] <inf> jero_wifi: Connection requested...
[00:00:08.103,000] <inf> net_dhcpv4: Received: 192.168.1.15
[00:00:08.103,000] <inf> jero_wifi:    Address[1]: 192.168.1.15
[00:00:08.103,000] <inf> jero_wifi:     Subnet[1]: 255.255.255.0
[00:00:08.103,000] <inf> jero_wifi:     Router[1]: 192.168.1.1
[00:00:08.103,000] <inf> jero_wifi: Lease time[1]: 86400 seconds
[00:00:08.103,000] <inf> jero_wifi: Connection successed
[00:00:08.103,000] <inf> wifi_test: Know you can use WIFI for your projects! Project by Jeronimo
```

Then you can check the connection sending a ping request to the Device Address.

## Contributing
Contributions are welcome! If you encounter any issues or have suggestions for improvements, feel free to open an issue or submit a pull request.

## License
This project is licensed under the [MIT License](LICENSE).

## Acknowledgements
- This project is built upon the powerful Zephyr RTOS, which provides robust support for embedded development.
- Special thanks to the Zephyr community for their continuous contributions and support.

Start exploring the world of WiFi connectivity with Zephyr today! Happy coding! 🚀📡