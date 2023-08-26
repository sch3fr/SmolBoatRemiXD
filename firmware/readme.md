# smolboatremixd

![smolboatremixd](https://github.com/sch3fr/SmolBoatRemiXD/blob/main/img/keeb.png)

*A short description of the keyboard/project*

* Keyboard Maintainer: [František](https://github.com/sch3fr)
* Hardware Supported: *Pro Micro, hand wiring*
* Hardware Availability: *[Original on thingiverse](https://www.thingiverse.com/thing:3289175), [My edited files](https://github.com/sch3fr/SmolBoatRemiXD/tree/main/STL)*

Make example for this keyboard (after setting up your build environment):

    make smolboatremixd:default

Flashing example for this keyboard:

    make smolboatremixd:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: You can add a microswitch to pins RST an one of the grounds to reset the board
* **Keycode in layout**: Press the key mapped to `RESET` if it is available
