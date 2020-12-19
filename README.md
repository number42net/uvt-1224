# Unisys UVT-1224

## Keyboard

Below is a scription of the keyboard electronics and protocol.

### Wiring 

Green - Ground
Red - VCC (5v)
White - DB6 (5v)
Black - DB7 (5v)
Yellow - Ground

### PCB:

Keyboard micro controller: Intel P8048AH

![Keyboard PCB](pics/keyboard-pcb.jpg?raw=true "Keyboard PCB")

### Protocol

+ Clock signal: inverse 9bits at 1/3mHz at 10μs duty cycle
+ Number of clock ticks per byte: 9 - first tick is ignored
+ Data pulse duty cycle 40μs
+ Time between bytes varies, but minimum of 10ms

Screenshot of letter A being pressed:

![Protocol](pics/protocol.png?raw=true "Protocol")
