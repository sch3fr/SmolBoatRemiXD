# SmolBoatRemiXD
SmolBoat is a custom 3D printed mechanical keyboard designed by [Druz320 on Thingiverse](https://www.thingiverse.com/thing:3289175).
While I really liked the design, there were some tweaks that I wanted to make, and I also needed smaller models, so I could print it
on my smaller 3D printer. Please note that this repo is focused only on the JJ50 clone.
## Changes compared to the original
- Changed the cutout to fit the SparkFun Pro Micro
- Added a hole for controller brace
- Added cherry stabiliser for 2U spacebar
- Added smaller cut files to print on my 3D printer
## Cuts
There are 4 smaller files, two for bottom and 2 for the top piece. The pieces have holes in them for pegs, of which you will need 4 of them. The pegs help with
rugidity of the whole thing. I recommend glueing the pieces together. As I didn't have any glue suitable for PLA, I used a 3D pen to "weld" the pieces together,
which is also a valid option, however make sure to sand down the top piece afterwards, or the switches won't fit well.
## Wiring
This is a standard hand wired keyboards. The rows are connected with diodes, the columns are joined together with wire.<br>
| Rows | Columns |
|------|---------|
|<table> <tr><th>Row number</th><th>Pin number</th></tr><tr><td>0</td><td>D3</td></tr><tr><td>1</td><td>D2</td></tr><tr><td>2</td><td>D1</td></tr><tr><td>3</td><td>D0</td></tr><tr><td>4</td><td>D4</td></tr></table>| <table> <tr><th>Column number</th><th>Pin number</th></tr><tr><td>0</td><td>B6</td></tr><tr><td>1</td><td>B2</td></tr><tr><td>2</td><td>B3</td></tr><tr><td>3</td><td>B1</td></tr><tr><td>4</td><td>F7</td></tr><tr><td>5</td><td>F6</td></tr><tr><td>6</td><td>F5</td></tr><tr><td>7</td><td>F4</td></tr><tr><td>8</td><td>B5</td></tr><tr><td>9</td><td>B4</td></tr><tr><td>10</td><td>E6</td></tr><tr><td>11</td><td>D7</td></tr> </table>|
### Wiring diagram
![Wiring diagram](img/diagram.png")
## Firmware
The firmware is your standard QMK firmware. I'll share the .hex file once I'm satisfied with it.
## Notes
I ended up not using the brace, since my awful wiring pushes the Pro Micro to its place.<br>
You might have to file the cherry stabs hole a bit for it to fit.<br>
I'd love to add Via support sometime in the future.