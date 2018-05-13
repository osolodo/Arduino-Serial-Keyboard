# Arduino Serial Keyboard

Have you ever wanted to use an Arduino for keyboard input? Maybe you've been playing your favorite FPS game and you want a footpedal to re-load, or a Big Red Button to launch the nukes in your favorite strategy game. Or maybe make your own Num-pad?

Well you can, just use the Keyboard libr... Oh, you looked at that? You don't 'just happen to' have one of the few boards that support it? Well if you're like me you don't want to go out and buy a new board just to prototype some cool idea, you'd rather use what you've got.

That's what this program is for. Just a couple of libraries tied together at the moment, but there are some convenient features planned and there's a helpful example of a single key button.

## Installation:
You will need the packages:
* pyautogui
* python-xlib (or python3-xlib for python3)
* pyserial
Then just download and run.

## Usage:
Until escape characters are added ASK just parrots the serial stream.

## Planned features:
* Auto-Detect port
* Non-printed keys
* Hotkey combinations
* Running terminal commands
