# Unisys UVT-1224

This is a repository for notes and code for my restoration project. More details can be found on the [restoration page](https://retro.engineer/projects/2020-12-19_Unisys_UVT-1224/) of my website. 

## Main PCB

+ Battery: 3v BR-2325 (Carbon monofluoride Lithium battery rated for higher temperatures and more stability than CR style batteries.)

![Main PCB](images/main-pcb.jpg?raw=true "Main PCB")

## Keyboard

Below is a description of the keyboard electronics and protocol.

### Wiring 

Connectors are modular 6P6C connectors, although only 5 contacts are used. Not compatible with RJ11 (6P4C)

+ Green - Ground
+ Red - VCC (5v)
+ White - DB6 (5v)
+ Black - DB7 (5v)
+ Yellow - Ground

### PCB:

Keyboard micro controller: Intel P8048AH

![Keyboard PCB](images/keyboard-pcb.jpg?raw=true "Keyboard PCB")

### Protocol

+ Clock signal: inverse 9bits at 1/3mHz at 10μs duty cycle
+ 1 start bit, followed by 8 data bits
+ Data pulse duty cycle 40μs
+ Time between bytes varies, but minimum of 10ms

Screenshot of letter A being pressed:

![Protocol](images/protocol.png?raw=true "Protocol")

Scancodes can be found in the [scancodes](scancodes.md) document.
