# bldc-motor-control-FOC
[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)
[![paypal](https://www.paypalobjects.com/en_US/i/btn/btn_donate_SM.gif)](https://www.paypal.com/cgi-bin/webscr?cmd=_donations&business=CU2SWN2XV9SCY&currency_code=EUR&source=url)

This repository implements Field Oriented Control (FOC) for BLDC motors in Matlab/Simulink. The controller was deployed and tested on a real-time hoverboard embedded platform:
 - [hoverboard-firmware-hack-FOC](https://github.com/EmanuelFeru/hoverboard-firmware-hack-FOC)
 
---
Table of Contents
=======================

* [FOC Webview](#foc-webview)
* [FOC Architecture](#foc-architecture)
* [Parameters](#parameters)
* [Diagnostics](#diagnostics)
* [Contributions](#contributions)

---
## FOC Webview

To explore the controller without a Matlab/Simulink installation click on the link below:

[https://eferu.github.io/bldc-motor-control-FOC/](https://eferu.github.io/bldc-motor-control-FOC/)

---
## FOC Architecture

The FOC architecture includes:
- **Estimations**: estimates the rotor position, angle and motor speed based on Hall sensors signal
- **Diagnostics**: implements error detection such as unconnected Hall sensor, motor blocked, MOSFET defective
- **Control Manager**: manages the transitions between control modes (Voltage, Speed, Torque)
- **FOC Algorithm**: implements the FOC strategy
- **Control Type Manager**: Manages the transition between Commutation, Sinusoidal, and FOC control type

![FOC architecture](/02_Figures/FW_architecture.png)

The FOC algorithm architecture is illustrated in the figure below:

![FOC algorithm](/02_Figures/FOC_algorithm.png)

In this implementation 3 control types are available:
- Commutation
- SIN (Sinusoidal)
- FOC (Field Oriented Control) with the following 3 control modes:
  - **VOLTAGE MODE**: in this mode the controller applies a constant Voltage to the motors.
  - **SPEED MODE**: in this mode a closed-loop controller realizes the input speed target by rejecting any of the disturbance (resistive load) applied to the motor.
  - **TORQUE MODE**: in this mode the input torque target is realized. This mode enables motor "freewheeling" when the torque target is `0`.

![Schematic representation of the available control methods](/02_Figures/control_methods.png)

The C code for the controller is capable for auto-code generated using [Matlab/Simulink](https://nl.mathworks.com/solutions/embedded-code-generation.html). The controller is designed for [stock hoverboard motors](https://github.com/EmanuelFeru/hoverboard-firmware-hack-FOC/blob/master/docs/pictures/motor_inside.jpg) with the motor windings construction as shown [here](https://github.com/EmanuelFeru/hoverboard-firmware-hack-FOC/blob/master/docs/pictures/motor_winding.png). However, with slight modifications, the controller can be adapted to other available BLDC motors.

---
## Parameters 

The controller parameters are given in the following table:

![Parameters table](/02_Figures/paramTable.png)

---
### Diagnostics
The motor is constantly monitored for errors. These errors are:
- **Error 001**: Hall sensor not connected
- **Error 002**: Hall sensor short circuit
- **Error 004**: Motor NOT able to spin (Possible causes: motor phase disconnected, MOSFET defective, operational Amplifier defective, motor blocked)

---
## Contributions

Every contribution to this repository is highly appreciated! Feel free to create pull requests to improve this repository as ultimately you are going to help everyone. 

If you want to donate to keep this repository updated, please use the link below:

[![paypal](https://www.paypalobjects.com/en_US/NL/i/btn/btn_donateCC_LG.gif)](https://www.paypal.com/cgi-bin/webscr?cmd=_donations&business=CU2SWN2XV9SCY&currency_code=EUR&source=url)


---

