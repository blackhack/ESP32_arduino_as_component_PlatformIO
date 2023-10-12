# ESP32 Arduino as Component in PlatformIO

This is a basic blink project using IDF with Arduino as a Component on PlatformIO.

**Introduction:**

Using the [Arduino framework for ESP32](https://github.com/espressif/arduino-esp32/) as an [IDF](https://github.com/espressif/esp-idf) component in [PlatformIO](https://github.com/platformio/platform-espressif32) can be a challenging task due to dependency hell. It requires careful version matching between Arduino, IDF, and the PlatformIO framework for ESP32. In some cases, you may also need to tweak toolchain versions in `platformio.ini` because, even though Arduino and PlatformIO both match the IDF version, the toolchains may not.

<br>

**Known Bugs:**

Sometimes, especially during the first run, you can get an error related to "component manager." To fix it, I usually just need to run this command on a PlatformIO command line:

`pip install -U --force-reinstall "idf-component-manager"`

However, sometimes even the command gives some kind of permissions error. In such cases, simply running the command again usually works.

If things are still not compiling, another workaround is to delete the "packages" and "platforms" folders from the ".platformio" directory, or at least the folders related to ESP32 and Arduino, and the ".pio" and ".vscode" folders on the project root.

Restarting Visual Studio Code every time, of course

<br>

**Tested Environment:**

This project has been tested on VSCode running on Windows 11.

<br>

**Disclaimer:**

Please note that I am not responsible for any issues or consequences that may arise from using this project, and I am not obligated to keep it updated. This project was originally created to streamline my own workflow whenever I start a new project. However, if you find it useful for your projects, feel free to use it as well.

<br>

**License:**

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
