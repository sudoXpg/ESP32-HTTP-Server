# ESP32 HTTP Server

## Overview

This project implements a lightweight HTTP server on the ESP32 platform. The server serves a static HTML webpage embedded directly into the firmware. Designed for simplicity and efficiency, it showcases the capability of the ESP32 microcontroller to handle HTTP communication in a bare-metal approach.

## Features

- **Embedded HTML Content**: The webpage is stored as a binary file and embedded directly into the firmware, eliminating the need for external storage.
- **Minimalist Design**: Bare-metal implementation without using frameworks like ESP-IDF, focusing on direct interaction with the ESP32 hardware.
- **Efficient Resource Management**: Optimized for low resource consumption, suitable for microcontroller environments.


## Getting Started

### Prerequisites

- ESP32 development board
- ESP-IDF or compatible toolchain installed on your system
- Serial communication software (e.g., `minicom`, `PuTTY`)

### Setup and Build

1. Clone the repository:
   ```bash
   git clone https://github.com/sudoXpg/ESP32-HTTP-Server
   cd ESP32-HTTP-Server
   ```

2. Compile the project:
   ```bash
   idf.py build
   ```

3. Flash the firmware to the ESP32:
   ```bash
   idf.py -p <port> flash
   ```

4. Monitor the serial output:
   ```bash
   idf.py monitor
   ```

### How It Works

1. **WiFi Connection**: The ESP32 connects to a predefined WiFi network.
2. **HTTP Server**: Listens for incoming HTTP requests on port 22160.
3. **HTML Response**: Serves the embedded `webpage.html` content in response to HTTP GET requests.

## Usage

1. Power up the ESP32 and ensure it is connected to your WiFi network.
2. Open a web browser and navigate to the ESP32's IP address (displayed in the serial monitor output).
3. The HTML page should be displayed in your browser.

## Embedded HTML Example

The embedded webpage is a simple portfolio:

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>ESP32 HTTP Server</title>
</head>
<body>
    <h1>Welcome to the ESP32 HTTP Server</h1>
    <p>This page is served from an ESP32 microcontroller!</p>
</body>
</html>
```

## Future Improvements

- Support for dynamic content generation
- TLS/SSL encryption for secure communication
- Implementation of a lightweight file system for serving multiple pages

## Contributions

Contributions are welcome! Please open an issue or submit a pull request for any enhancements or bug fixes.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Author

[sudoXpg](https://github.com/sudoXpg)
