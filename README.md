# Lemulation

![](https://img.shields.io/badge/C++-17-blue.svg) ![](https://img.shields.io/badge/license-MIT-lightgray.svg) ![](https://img.shields.io/badge/version-0.0.1-yellow.svg) ![](https://img.shields.io/badge/build-passing-green.svg) ![](https://img.shields.io/badge/ShellScript-5.0-red.svg) ![](https://img.shields.io/badge/SFML-2.5.x-Pink.svg) 

> A physics simulator for the Lemon rocket. 

--- 

### Table of Contents  

These are the sections on the [README.md](https://github.com/Deltasiv/Lemonulation/blob/master/README.md) file. 

- [Description](#description)
- [How To Use](#how-to-use)
- [Files Included](#files-included) 
- [References](#references) 
- [Contributing](#contributing) 
- [License](#license)
- [Author Info](#author-info)
- [Contributors](#contributors) 
- [Version Info](#version-info)
- [Help](#help) 
- [Info](#info) 

--- 

## Description 

Lemulation is a rocket launch simulator system made in C++ 17 and Shell script and SFML it is to be used with the Lemon application for aerospace. 

#### Technologies 

- C++ 17 
- SFML - Short Fast Multi-Media Library 2.5.x
- Shell Script 5.0 

#### Other technologies are subject to be used and may or will be changed without notice. 

--- 

## How To Use 

To use this work simply download it and edit or use it by running it in the GNU C++ Compiler SFML and or shell script.

#### Prerequistites 

You must have the GNU C++ Compiler SFML 2.5.x and a Linux platform if you don't have one run.

```bash 
sudo apt-get install g++

then 

sudo apt-get install libsfml-dev
```

#### Installation 

To install Lemon please use the following command and make sure you have the GNU C++ Compiler. 

```
git clone https://github.com/Deltasiv/Lemonulation.git or Download it 
```

#### Usage 

To use this program go to your terminal go to the directory of these files then type the following command. 

```bash
g++ std=c++17 file_name.cpp -o file_name

then 

g++ file_name.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system 

then 

./file_name
```

#### Program Usage 

```cpp
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <sstream>

int main()
{
    // Create the main window
    sf::RenderWindow app(sf::VideoMode(800, 600), "SFML window");

    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile("rocket.png"))
        return EXIT_FAILURE;
    sf::Sprite sprite(texture);

    double angle = 45;

    sf::Vector2f scale(sprite.getScale());
    sprite.setPosition(500, 0);
    sprite.setRotation(angle);
    sprite.setScale(0.2, 0.2);
    sf::Vector2f rocket_position = sprite.getPosition();
    sf::Vector2f rocket_scale = sprite.getScale();

    double rocket_x = rocket_position.x;
```
```
FOR NAN ONLY 
```

--- 

## Files Included 

- [Lemulation](https://github.com/Deltasiv/Lemulation/tree/master/bin/Debug)
- [CONTRIBUTIONS.md]()
- [CONTRIBUTING.md]()
- [README.md](https://github.com/Deltasiv/Lemulation/blob/master/README.md)
- [rocket.png](https://github.com/Deltasiv/Lemulation/blob/master/rocket.png)
- [main.o](https://github.com/Deltasiv/Lemulation/blob/master/obj/Debug/main.o)
- [Lemulation.depend](https://github.com/Deltasiv/Lemulation/blob/master/Lemulation.depend)
- [Debug](https://github.com/Deltasiv/Lemulation/tree/master/obj/Debug)
- [LICENSE](https://github.com/Deltasiv/Lemulation/blob/master/LICENSE)
- [main.cpp](https://github.com/Deltasiv/Lemulation/blob/master/main.cpp)
- [Lemulation](https://github.com/Deltasiv/Lemulation/blob/master/bin/Debug/Lemulation) 
- [Lemulation.layout](https://github.com/Deltasiv/Lemulation/blob/master/Lemulation.layout)
- [cb.bmp](https://github.com/Deltasiv/Lemulation/blob/master/cb.bmp)

#### Files are subject to have their name changed and more files can be included without notice. 

---

## References 

[Back To The Top](#Lemulation) 

--- 

## Contributing

If you wish to help on this project you can simply make changes to the file and post your changes and if they are appreciated we will merge them to the Master branch. Please read the [CONTRIBUTING.md](https://github.com/YELLOWHATT/Comet/blob/master/CONTRIBUTORS.md) file for more information. If you have contributed to this work known as Darwin you will be credited the file for contributors is [CONTRIBUTIONS.md](https://github.com/YELLOWHATT/Comet/blob/master/CONTRIBUTIONS.md). :) 

--- 

## License 

MIT License 

Copyright (c) [2019] [Deltasiv] 

Permission is hereby granted, free of charge, to any person obtainin g a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions: 

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software. 

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT, IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. 

See | [LICENSE.md](https://github.com/Deltasiv/Lemulation/blob/master/LICENSE) file or [MIT](https://choosealicense.com/licenses/mit/)|

[Back To The Top](#Lemulation) 

--- 

## Author Info 

- Github - [Johk3](https://github.com/Johk3)

--- 

## Contributors 

- Johk3  

--- 

## Version Info 

The current stable version of Lemulation is: 0.0.1. 

--- 

Summury of Version 0.0.1 Application is started. 

--- 

## Help 

If there is a bug please contact us through the email provided. 

- Email Address: thekoolaidmannn@gmail.com 

--- 

## Info 

If you have any info you are willing to know contact us on the email that is provided. 

Emails are located in [Help](#help).  

--- 

#### Thank you for giving Lemulation-Lemon a look :) 

---

[Back To The Top](#Lemulation)
