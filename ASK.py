from pyautogui import press, typewrite, hotkey
import serial
# ##################################

# You'll probably need to change these to suit your setup
port = '/dev/ttyACM0'
baud = 9600

# ##################################
ser = serial.Serial(port, buad)
while True:
    ln = ser.read()
    print typewrite(ln)