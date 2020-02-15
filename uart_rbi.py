import serial
import time
usbCom = serial.Serial('/dev/ttyACM0', 9600)
time.sleep(2) # <<=======================================
usbCom.open
time.sleep(2)
usbCom.write('1332'.encode('utf-8'))
usbCom.close
# не делай принт того что отправил
