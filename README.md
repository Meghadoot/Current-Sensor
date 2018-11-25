# Current-Sensor
This is a library for the Current sensor (driver) designed specifically to work with all Arduino Boards.

## Table of Contents

1. [Current Sensor](#CurrentSensor)
2. [Table of Contents](#table-of-contents)
3. [Summary](#summary)
4. [Installation](#installation)
5. [Usage](#usage)
6. [Contributing](#contributing)
7. [History](#history)
8. [License](#license)

<snippet>
<content>
  

## Summary

Current driver uses the current sensor (simple voltage divider) to measure the current drawn from battery or cell(0V to 10Amps). Internal ADC is used to calculate the exact value of analog current from raw measured reading.


## Installation

To use this library download the zip file or clone the repository, decompress it to a folder named Current Sensor. Move the folder to {Arduino Path}/libraries.

## Usage

* Include the library at the top of your Arduino script. `#include <Current_Sensor>`
* Create a global or local variable. 
  
 `Current_Sensor cs(Analog_pin, gain, Configuration)`
  ```
   *  Analog_pin: Any Analog Pin on Arduino Board
   
   *  gain: Current measurement IC gain  
 
   ```
  
   Gain value can be set initially by reading datasheet and analysing the linear region operation of current measurement IC.
 By default, this value is set to **1**. 
   
  Maxim (MAX4080) Current Sensor (OUT pin) can be connected to any analog pin on arduino board.

![max4080_connection](https://user-images.githubusercontent.com/25079922/48984902-00c5ed00-f102-11e8-85f7-d4d0b495e62a.png)
  
  
 or
 
 Simply,
  
 `Current_Sensor cs(Analog_pin)`
 
* Read the exact Current value in Amps.
 `float current = cs.calculateVolts()`

## Contributing

1. Fork the project.
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am 'Add some feature'`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request.

## History

- Nov  19, 2018   - Version 1.0.0 released (Readme Updated)

## License

GNU GPL, see License.txt
</content>
</snippet>
