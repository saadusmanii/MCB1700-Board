# MCB1700 Media Center Project

A multimedia entertainment system implemented on the MCB1700 development board using C and uVision software.

![Alt text](/Images/pic1.png)

## Features

### 📸 Photo Gallery
- View a collection of images
- Navigate through photos using joystick controls
![Alt text](/Images/pic3.jpg)
- Optimized image display using RGB565 format
- Smooth transitions between images
![Alt text](/Images/pic2.jpg)


### 🎵 MP3 Player
- Stream audio from PC via USB connection
- Volume control using onboard potentiometer
- LED visualization for volume level
- Real-time audio playback
![Alt text](/Images/pic4.jpg)

### 🎮 Game Center
Two interactive games:
![Alt text](/Images/pic5.jpg)

#### Pong
- Single-player game against AI
- Responsive paddle control using joystick
- Dynamic ball physics
- Continuous gameplay until player misses

#### Number Guesser
- Randomly generated target number
- Interactive feedback system
![Alt text](/Images/pic7.jpg)
- Up/down controls for number selection
![Alt text](/Images/pic6.jpg)
- Visual feedback for guesses
![Alt text](/Images/pic8.jpg)
![Alt text](/Images/pic9.jpg)

## Controls

### General Navigation
- Joystick UP/DOWN: Navigate through menus
- Joystick SELECT: Choose option
- Joystick LEFT: Return to previous menu

### Photo Gallery
- Joystick UP/DOWN: Scroll through images
- Joystick LEFT: Exit to main menu

### MP3 Player
- Potentiometer: Adjust volume
- Joystick LEFT: Exit to main menu

### Games
- Pong:
  - Joystick LEFT/RIGHT: Move paddle
  - Joystick UP: Restart after game over
  - Joystick SELECT: Return to menu after game over
- Number Guesser:
  - Joystick UP/DOWN: Adjust guess
  - Joystick SELECT: Submit guess
  - Joystick LEFT: Exit to main menu

## Technical Requirements

### Hardware
- MCB1700 Development Board
- LCD Display
- Joystick
- Potentiometer
- LED Array
- USB Connection (for MP3 player)

### Software
- Keil uVision IDE
- GIMP (for image processing)
- C Programming Language

## Development Notes

- Images are converted to .c files using GIMP and implemented using GLCD_Bitmap
- Audio streaming uses interrupt-based USB communication
- Game logic is modularized for easy maintenance
- Menu system uses state-based navigation
- All graphics rendered using the GLCD library

## Project Structure

```
├── src/
│   ├── main.c             # Main program entry
│   ├── photoGallery.c     # Photo viewer implementation
│   ├── usbdmain.c         # MP3 player functionality
│   ├── pong.c             # Pong game implementation
│   ├── numberGuesser.c    # Number guessing game
│   └── gameMenu.c         # Game center menu
└── include/
    └── GLCD.h            # LCD display functions
```

## Installation

1. Clone the repository
2. Open the project in Keil uVision
3. Build the project
4. Flash the program to MCB1700 board

## Credits

Developed by Saad Usmani
