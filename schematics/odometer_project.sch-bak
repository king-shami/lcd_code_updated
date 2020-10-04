EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 4
Title "Odometer I2C Interface"
Date "2020-10-03"
Rev "2.1"
Comp "DES Gang"
Comment1 "just use buttons and pull down resistors for the butotn selection - dw bout debouncing just yet..."
Comment2 "dont worry about attaching a second hall effect for now"
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L power:GND #PWR010
U 1 1 5F70904A
P 9200 3350
F 0 "#PWR010" H 9200 3100 50  0001 C CNN
F 1 "GND" H 9205 3177 50  0000 C CNN
F 2 "" H 9200 3350 50  0001 C CNN
F 3 "" H 9200 3350 50  0001 C CNN
	1    9200 3350
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR09
U 1 1 5F709729
P 9200 1200
F 0 "#PWR09" H 9200 1050 50  0001 C CNN
F 1 "+5V" H 9215 1373 50  0000 C CNN
F 2 "" H 9200 1200 50  0001 C CNN
F 3 "" H 9200 1200 50  0001 C CNN
	1    9200 1200
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR011
U 1 1 5F70C2E7
P 9700 2100
F 0 "#PWR011" H 9700 1850 50  0001 C CNN
F 1 "GND" H 9705 1927 50  0000 C CNN
F 2 "" H 9700 2100 50  0001 C CNN
F 3 "" H 9700 2100 50  0001 C CNN
	1    9700 2100
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR014
U 1 1 5F70C855
P 10200 2000
F 0 "#PWR014" H 10200 1850 50  0001 C CNN
F 1 "+5V" H 10215 2173 50  0000 C CNN
F 2 "" H 10200 2000 50  0001 C CNN
F 3 "" H 10200 2000 50  0001 C CNN
	1    10200 2000
	0    1    1    0   
$EndComp
Text GLabel 8700 1700 0    50   Input ~ 0
lcd_enable
Text GLabel 8700 1900 0    50   Input ~ 0
lcd_rs
Wire Wire Line
	9200 1200 9200 1500
Wire Wire Line
	9200 3100 9200 3350
Wire Wire Line
	8700 1700 8800 1700
Wire Wire Line
	8700 1900 8800 1900
Wire Wire Line
	9600 2000 9700 2000
Wire Wire Line
	10000 2000 10200 2000
Wire Wire Line
	9600 2100 9700 2100
$Comp
L Display_Character:WC1602A DS1
U 1 1 5F6F0D86
P 9200 2300
F 0 "DS1" H 9200 3281 50  0000 C CNN
F 1 "WC1602A" H 9200 3190 50  0000 C CNN
F 2 "Display:WC1602A" H 9200 1400 50  0001 C CIN
F 3 "http://www.wincomlcd.com/pdf/WC1602A-SFYLYHTC06.pdf" H 9900 2300 50  0001 C CNN
	1    9200 2300
	1    0    0    -1  
$EndComp
$Comp
L Device:R R3
U 1 1 5F77198D
P 9850 2000
F 0 "R3" H 9920 2046 50  0000 L CNN
F 1 "330" H 9920 1955 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" V 9780 2000 50  0001 C CNN
F 3 "~" H 9850 2000 50  0001 C CNN
F 4 "C17630" H 9850 2000 50  0001 C CNN "LCSC Part #"
	1    9850 2000
	0    1    1    0   
$EndComp
$Comp
L dk_Logic-Gates-and-Inverters:SN74HC14N U1
U 1 1 5F72B480
P 2700 6200
F 0 "U1" H 2700 7003 60  0000 C CNN
F 1 "SN74HC14N" H 2700 6897 60  0000 C CNN
F 2 "Package_DIP:DIP-14_W7.62mm_LongPads" H 2900 6400 60  0001 L CNN
F 3 "http://www.ti.com/general/docs/suppproductinfo.tsp?distId=10&gotoUrl=http%3A%2F%2Fwww.ti.com%2Flit%2Fgpn%2Fsn74hc14" H 2900 6500 60  0001 L CNN
F 4 "296-1577-5-ND" H 2900 6600 60  0001 L CNN "Digi-Key_PN"
F 5 "SN74HC14N" H 2900 6700 60  0001 L CNN "MPN"
F 6 "Integrated Circuits (ICs)" H 2900 6800 60  0001 L CNN "Category"
F 7 "Logic - Gates and Inverters" H 2900 6900 60  0001 L CNN "Family"
F 8 "http://www.ti.com/general/docs/suppproductinfo.tsp?distId=10&gotoUrl=http%3A%2F%2Fwww.ti.com%2Flit%2Fgpn%2Fsn74hc14" H 2900 7000 60  0001 L CNN "DK_Datasheet_Link"
F 9 "/product-detail/en/texas-instruments/SN74HC14N/296-1577-5-ND/277223" H 2900 7100 60  0001 L CNN "DK_Detail_Page"
F 10 "IC INVERTER SCHMITT 6CH 14DIP" H 2900 7200 60  0001 L CNN "Description"
F 11 "Texas Instruments" H 2900 7300 60  0001 L CNN "Manufacturer"
F 12 "Active" H 2900 7400 60  0001 L CNN "Status"
F 13 "Z8514 " H 2700 6200 50  0001 C CNN "Altronics Part Number"
	1    2700 6200
	1    0    0    -1  
$EndComp
Text GLabel 3250 5900 2    50   Input ~ 0
state_up
Wire Wire Line
	3250 5900 3000 5900
Wire Wire Line
	3250 6000 3000 6000
Wire Wire Line
	3000 6100 3250 6100
Text GLabel 3250 6100 2    50   Input ~ 0
soft_reset
$Comp
L power:+5V #PWR0108
U 1 1 5F7FE9D1
P 2700 5350
F 0 "#PWR0108" H 2700 5200 50  0001 C CNN
F 1 "+5V" H 2715 5523 50  0000 C CNN
F 2 "" H 2700 5350 50  0001 C CNN
F 3 "" H 2700 5350 50  0001 C CNN
	1    2700 5350
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0109
U 1 1 5F7FF0F2
P 2700 6900
F 0 "#PWR0109" H 2700 6650 50  0001 C CNN
F 1 "GND" H 2705 6727 50  0000 C CNN
F 2 "" H 2700 6900 50  0001 C CNN
F 3 "" H 2700 6900 50  0001 C CNN
	1    2700 6900
	1    0    0    -1  
$EndComp
Wire Wire Line
	2700 6700 2700 6900
Wire Wire Line
	2700 5600 2700 5350
Text Notes 8700 800  0    98   ~ 20
LCD Screen\n
$Comp
L Connector_Generic:Conn_02x10_Odd_Even J3
U 1 1 5F731888
P 8200 5550
F 0 "J3" H 8250 4825 50  0000 C CNN
F 1 "Conn_02x10_Odd_Even" H 8250 4916 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_2x10_P2.54mm_Vertical" H 8200 5550 50  0001 C CNN
F 3 "~" H 8200 5550 50  0001 C CNN
F 4 "609-3221-ND" H 8200 5550 50  0001 C CNN "Digi-Key Part Number"
	1    8200 5550
	-1   0    0    1   
$EndComp
Text GLabel 7700 5050 0    50   Input ~ 0
SCL
Text GLabel 8550 5050 2    50   Input ~ 0
SDA
Connection ~ 7900 5050
Wire Wire Line
	7900 5050 7700 5050
Connection ~ 8400 5050
Wire Wire Line
	8400 5050 8550 5050
Wire Wire Line
	7900 5850 7900 5750
Connection ~ 7900 5850
Wire Wire Line
	7900 5750 7900 5650
Connection ~ 7900 5750
Wire Wire Line
	7900 5650 7900 5550
Connection ~ 7900 5650
Wire Wire Line
	7900 5550 7900 5450
Connection ~ 7900 5550
Wire Wire Line
	7900 5450 7900 5350
Connection ~ 7900 5450
Wire Wire Line
	7900 5350 7900 5250
Connection ~ 7900 5350
Wire Wire Line
	7900 5250 7900 5150
Connection ~ 7900 5250
Wire Wire Line
	7900 5150 7900 5050
Connection ~ 7900 5150
Wire Wire Line
	7900 5950 7900 5850
Wire Wire Line
	8400 5850 8400 5950
Connection ~ 8400 5850
Wire Wire Line
	8400 5750 8400 5850
Connection ~ 8400 5750
Wire Wire Line
	8400 5650 8400 5750
Connection ~ 8400 5650
Wire Wire Line
	8400 5550 8400 5650
Connection ~ 8400 5550
Wire Wire Line
	8400 5450 8400 5550
Connection ~ 8400 5450
Wire Wire Line
	8400 5350 8400 5450
Connection ~ 8400 5350
Wire Wire Line
	8400 5250 8400 5350
Connection ~ 8400 5250
Wire Wire Line
	8400 5150 8400 5250
Connection ~ 8400 5150
Wire Wire Line
	8400 5050 8400 5150
Wire Wire Line
	10350 5050 10350 5150
Connection ~ 10350 5150
Wire Wire Line
	10350 5150 10350 5250
Connection ~ 10350 5250
Wire Wire Line
	10350 5250 10350 5350
Connection ~ 10350 5350
Wire Wire Line
	10350 5350 10350 5450
Connection ~ 10350 5450
Wire Wire Line
	10350 5450 10350 5550
Connection ~ 10350 5550
Wire Wire Line
	10350 5550 10350 5650
Connection ~ 10350 5650
Wire Wire Line
	10350 5650 10350 5750
Connection ~ 10350 5750
Wire Wire Line
	10350 5750 10350 5850
Connection ~ 10350 5850
Wire Wire Line
	10350 5850 10350 5950
Wire Wire Line
	9850 5950 9850 5850
Connection ~ 9850 5150
Wire Wire Line
	9850 5150 9850 5050
Connection ~ 9850 5250
Wire Wire Line
	9850 5250 9850 5150
Connection ~ 9850 5350
Wire Wire Line
	9850 5350 9850 5250
Connection ~ 9850 5450
Wire Wire Line
	9850 5450 9850 5350
Connection ~ 9850 5550
Wire Wire Line
	9850 5550 9850 5450
Connection ~ 9850 5650
Wire Wire Line
	9850 5650 9850 5550
Connection ~ 9850 5750
Wire Wire Line
	9850 5750 9850 5650
Connection ~ 9850 5850
Wire Wire Line
	9850 5850 9850 5750
Wire Wire Line
	10350 5050 10500 5050
Connection ~ 10350 5050
Wire Wire Line
	9850 5050 9650 5050
Connection ~ 9850 5050
$Comp
L power:+5V #PWR0103
U 1 1 5F743C2F
P 10500 5050
F 0 "#PWR0103" H 10500 4900 50  0001 C CNN
F 1 "+5V" V 10515 5178 50  0000 L CNN
F 2 "" H 10500 5050 50  0001 C CNN
F 3 "" H 10500 5050 50  0001 C CNN
	1    10500 5050
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR0104
U 1 1 5F744716
P 9650 5050
F 0 "#PWR0104" H 9650 4800 50  0001 C CNN
F 1 "GND" H 9655 4877 50  0000 C CNN
F 2 "" H 9650 5050 50  0001 C CNN
F 3 "" H 9650 5050 50  0001 C CNN
	1    9650 5050
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_02x10_Odd_Even J4
U 1 1 5F7413D9
P 10150 5550
F 0 "J4" H 10200 4825 50  0000 C CNN
F 1 "Conn_02x10_Odd_Even" H 10200 4916 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_2x10_P2.54mm_Vertical" H 10150 5550 50  0001 C CNN
F 3 "~" H 10150 5550 50  0001 C CNN
F 4 "609-3221-ND" H 10150 5550 50  0001 C CNN "Digi-Key Part Number"
	1    10150 5550
	-1   0    0    1   
$EndComp
Text Notes 1650 7500 0    98   ~ 20
Button Selection\n
Wire Notes Line
	7050 3700 11150 3700
Wire Notes Line
	9150 3700 9150 6450
Text Notes 7850 4450 0    98   ~ 20
I2C Rail
Text Notes 9650 4450 0    98   ~ 20
Power Rail
Wire Wire Line
	1650 5900 2400 5900
Text Label 1850 5900 0    50   ~ 0
vout
$Sheet
S 800  5800 850  200 
U 5F7B6E63
F0 "sw1" 50
F1 "switch_debounced.sch" 50
F2 "vout" O R 1650 5900 50 
$EndSheet
$Sheet
S 800  6200 850  200 
U 5F7CC063
F0 "sw2" 50
F1 "switch_debounced.sch" 50
F2 "vout" O R 1650 6300 50 
$EndSheet
Wire Wire Line
	1650 6300 1900 6300
Wire Wire Line
	1900 6300 1900 6000
Wire Wire Line
	1900 6000 2400 6000
Wire Wire Line
	1650 6700 1950 6700
$Sheet
S 800  6600 850  200 
U 5F7CF7BD
F0 "sw3" 50
F1 "switch_debounced.sch" 50
F2 "vout" O R 1650 6700 50 
$EndSheet
Wire Wire Line
	1950 6700 1950 6100
Wire Wire Line
	1950 6100 2400 6100
Wire Wire Line
	8600 2900 8800 2900
Wire Wire Line
	8800 2800 8600 2800
Wire Wire Line
	8800 2700 8600 2700
Wire Wire Line
	8800 2600 8600 2600
Text GLabel 8600 2900 0    50   Input ~ 0
lcd_bit4
Text GLabel 8600 2800 0    50   Input ~ 0
lcd_bit3
Text GLabel 8600 2700 0    50   Input ~ 0
lcd_bit2
Text GLabel 8600 2600 0    50   Input ~ 0
lcd_bit1
$Comp
L Device:C C1
U 1 1 5F805A7E
P 3200 6750
F 0 "C1" H 3315 6796 50  0000 L CNN
F 1 ".1uF" H 3315 6705 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 3238 6600 50  0001 C CNN
F 3 "~" H 3200 6750 50  0001 C CNN
F 4 "C49678" H 3200 6750 50  0001 C CNN "LCSC Part #"
F 5 "R2865" H 3200 6750 50  0001 C CNN "Altronics Part Number"
	1    3200 6750
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0111
U 1 1 5F805A76
P 3200 6900
F 0 "#PWR0111" H 3200 6650 50  0001 C CNN
F 1 "GND" H 3205 6727 50  0000 C CNN
F 2 "" H 3200 6900 50  0001 C CNN
F 3 "" H 3200 6900 50  0001 C CNN
	1    3200 6900
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR0110
U 1 1 5F805A70
P 3200 6600
F 0 "#PWR0110" H 3200 6450 50  0001 C CNN
F 1 "+5V" H 3215 6773 50  0000 C CNN
F 2 "" H 3200 6600 50  0001 C CNN
F 3 "" H 3200 6600 50  0001 C CNN
	1    3200 6600
	1    0    0    -1  
$EndComp
Text GLabel 3250 6000 2    50   Input ~ 0
state_down
$Comp
L power:GND #PWR02
U 1 1 5F6ED1EA
P 1700 1900
F 0 "#PWR02" H 1700 1650 50  0001 C CNN
F 1 "GND" H 1705 1727 50  0000 C CNN
F 2 "" H 1700 1900 50  0001 C CNN
F 3 "" H 1700 1900 50  0001 C CNN
	1    1700 1900
	-1   0    0    1   
$EndComp
$Comp
L power:+5V #PWR01
U 1 1 5F6F032D
P 1600 4250
F 0 "#PWR01" H 1600 4100 50  0001 C CNN
F 1 "+5V" H 1615 4423 50  0000 C CNN
F 2 "" H 1600 4250 50  0001 C CNN
F 3 "" H 1600 4250 50  0001 C CNN
	1    1600 4250
	-1   0    0    1   
$EndComp
Wire Wire Line
	1700 2100 1700 2000
Wire Wire Line
	1600 4100 1600 4250
Wire Wire Line
	2400 3100 2300 3100
Wire Wire Line
	2400 3200 2300 3200
Wire Wire Line
	2300 3300 2400 3300
Text GLabel 1300 2700 0    50   Input ~ 0
SDA
Text GLabel 1300 2600 0    50   Input ~ 0
SCL
$Comp
L Connector:Conn_01x03_Female J2
U 1 1 5F7812F4
P 5900 1200
F 0 "J2" H 5792 875 50  0000 C CNN
F 1 "Conn_01x03_Female" H 5792 966 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Horizontal" H 5900 1200 50  0001 C CNN
F 3 "~" H 5900 1200 50  0001 C CNN
F 4 "952-2245-ND" H 5900 1200 50  0001 C CNN "Digi-Key Part Number"
F 5 "P5430" H 5900 1200 50  0001 C CNN "Altronics Part Number"
	1    5900 1200
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR013
U 1 1 5F7874BC
P 5700 1600
F 0 "#PWR013" H 5700 1350 50  0001 C CNN
F 1 "GND" H 5705 1427 50  0000 C CNN
F 2 "" H 5700 1600 50  0001 C CNN
F 3 "" H 5700 1600 50  0001 C CNN
	1    5700 1600
	1    0    0    -1  
$EndComp
Wire Wire Line
	5700 1300 5700 1600
$Comp
L power:+5V #PWR012
U 1 1 5F78A72E
P 5700 800
F 0 "#PWR012" H 5700 650 50  0001 C CNN
F 1 "+5V" H 5715 973 50  0000 C CNN
F 2 "" H 5700 800 50  0001 C CNN
F 3 "" H 5700 800 50  0001 C CNN
	1    5700 800 
	1    0    0    -1  
$EndComp
Wire Wire Line
	5700 800  5700 1100
Text Notes 1850 1250 0    98   ~ 20
Arduino Nano
Wire Wire Line
	2400 3000 2300 3000
Wire Wire Line
	2300 2900 2400 2900
Wire Wire Line
	2300 2700 2400 2700
Wire Wire Line
	2400 2600 2300 2600
Wire Wire Line
	2300 2500 2400 2500
Wire Notes Line
	4200 550  4200 7750
$Comp
L power:+5V #PWR0116
U 1 1 5F79699A
P 5700 2650
F 0 "#PWR0116" H 5700 2500 50  0001 C CNN
F 1 "+5V" H 5715 2823 50  0000 C CNN
F 2 "" H 5700 2650 50  0001 C CNN
F 3 "" H 5700 2650 50  0001 C CNN
	1    5700 2650
	1    0    0    -1  
$EndComp
Wire Wire Line
	5700 2650 5700 2950
Wire Wire Line
	5700 3150 5700 3450
$Comp
L power:GND #PWR0117
U 1 1 5F796993
P 5700 3450
F 0 "#PWR0117" H 5700 3200 50  0001 C CNN
F 1 "GND" H 5705 3277 50  0000 C CNN
F 2 "" H 5700 3450 50  0001 C CNN
F 3 "" H 5700 3450 50  0001 C CNN
	1    5700 3450
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x03_Female J1
U 1 1 5F79698D
P 5900 3050
F 0 "J1" H 5792 2725 50  0000 C CNN
F 1 "Conn_01x03_Female" H 5792 2816 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Horizontal" H 5900 3050 50  0001 C CNN
F 3 "~" H 5900 3050 50  0001 C CNN
F 4 "952-2245-ND" H 5900 3050 50  0001 C CNN "Digi-Key Part Number"
F 5 "P5430" H 5900 3050 50  0001 C CNN "Altronics Part Number"
	1    5900 3050
	1    0    0    -1  
$EndComp
Wire Notes Line
	600  5000 4200 5000
Text GLabel 4950 1200 0    50   Input ~ 0
hall1
Text GLabel 2400 2600 2    50   Input ~ 0
state_down
Text GLabel 2400 2500 2    50   Input ~ 0
state_up
Text GLabel 2400 2700 2    50   Input ~ 0
lcd_enable
$Comp
L odometer_project-rescue:Arduino_Nano_v2.x-MCU_Module A1
U 1 1 5F6EAD86
P 1800 3100
F 0 "A1" H 1800 2011 50  0000 C CNN
F 1 "Arduino_Nano_v2.x" H 1800 1920 50  0000 C CNN
F 2 "Module:Arduino_Nano" H 1800 3100 50  0001 C CIN
F 3 "https://www.arduino.cc/en/uploads/Main/ArduinoNanoManual23.pdf" H 1800 3100 50  0001 C CNN
F 4 "929974E-01-15-ND" H 1800 3100 50  0001 C CNN "Digi-Key Part Number"
	1    1800 3100
	-1   0    0    1   
$EndComp
Text GLabel 2400 3400 2    50   Input ~ 0
hall1
Text GLabel 2400 3000 2    50   Input ~ 0
lcd_bit4
Text GLabel 3450 2400 2    50   Input ~ 0
soft_reset
Text GLabel 2400 2900 2    50   Input ~ 0
lcd_rs
Text GLabel 2400 3100 2    50   Input ~ 0
lcd_bit3
Text GLabel 2400 3200 2    50   Input ~ 0
lcd_bit2
Text GLabel 2400 3300 2    50   Input ~ 0
lcd_bit1
Text GLabel 3450 4150 2    50   Input ~ 0
hall2
Wire Wire Line
	2400 3400 2300 3400
Wire Notes Line
	7050 500  7050 6450
Wire Wire Line
	3450 4150 3350 4150
$Comp
L Jumper:Jumper_3_Open JP2
U 1 1 5F7DCDC4
P 3350 3800
F 0 "JP2" V 3304 3887 50  0000 L CNN
F 1 "Jumper_3_Open" V 3395 3887 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 3350 3800 50  0001 C CNN
F 3 "~" H 3350 3800 50  0001 C CNN
	1    3350 3800
	0    1    1    0   
$EndComp
Wire Wire Line
	3350 4050 3350 4150
Text GLabel 3450 3450 2    50   Input ~ 0
soft_reset
Wire Wire Line
	3450 3450 3350 3450
Wire Wire Line
	3350 3450 3350 3550
$Comp
L Jumper:Jumper_3_Open JP1
U 1 1 5F7F2B74
P 3350 2800
F 0 "JP1" V 3304 2887 50  0000 L CNN
F 1 "Jumper_3_Open" V 3395 2887 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 3350 2800 50  0001 C CNN
F 3 "~" H 3350 2800 50  0001 C CNN
	1    3350 2800
	0    1    1    0   
$EndComp
Wire Wire Line
	3450 2400 3350 2400
Wire Wire Line
	3350 2400 3350 2550
Wire Wire Line
	3200 2800 2300 2800
$Comp
L power:GND #PWR0118
U 1 1 5F80652A
P 3350 3150
F 0 "#PWR0118" H 3350 2900 50  0001 C CNN
F 1 "GND" H 3355 2977 50  0000 C CNN
F 2 "" H 3350 3150 50  0001 C CNN
F 3 "" H 3350 3150 50  0001 C CNN
	1    3350 3150
	1    0    0    -1  
$EndComp
Wire Wire Line
	3350 3050 3350 3150
Wire Wire Line
	3200 3800 3000 3800
Wire Wire Line
	3000 3800 3000 3500
Wire Wire Line
	3000 3500 2300 3500
Text GLabel 4950 3050 0    50   Input ~ 0
hall2
Wire Wire Line
	4950 3050 5200 3050
Wire Wire Line
	5700 1200 5100 1200
$Comp
L Device:LED D?
U 1 1 5F84F1A9
P 5100 2000
AR Path="/5F7B6E63/5F84F1A9" Ref="D?"  Part="1" 
AR Path="/5F7CC063/5F84F1A9" Ref="D?"  Part="1" 
AR Path="/5F7CF7BD/5F84F1A9" Ref="D?"  Part="1" 
AR Path="/5F84F1A9" Ref="D4"  Part="1" 
F 0 "D4" V 5139 1883 50  0000 R CNN
F 1 "LED_Yellow" V 5048 1883 50  0000 R CNN
F 2 "LED_SMD:LED_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 5100 2000 50  0001 C CNN
F 3 "~" H 5100 2000 50  0001 C CNN
	1    5100 2000
	0    -1   -1   0   
$EndComp
Wire Wire Line
	5100 1750 5100 1850
$Comp
L Device:R R?
U 1 1 5F84F1B0
P 5100 1600
AR Path="/5F7B6E63/5F84F1B0" Ref="R?"  Part="1" 
AR Path="/5F7CC063/5F84F1B0" Ref="R?"  Part="1" 
AR Path="/5F7CF7BD/5F84F1B0" Ref="R?"  Part="1" 
AR Path="/5F84F1B0" Ref="R11"  Part="1" 
F 0 "R11" H 5031 1554 50  0000 R CNN
F 1 "330" H 5031 1645 50  0000 R CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" V 5030 1600 50  0001 C CNN
F 3 "~" H 5100 1600 50  0001 C CNN
	1    5100 1600
	1    0    0    1   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5F84F1B7
P 5100 2350
AR Path="/5F7B6E63/5F84F1B7" Ref="#PWR?"  Part="1" 
AR Path="/5F7BFBA0/5F84F1B7" Ref="#PWR?"  Part="1" 
AR Path="/5F7C314F/5F84F1B7" Ref="#PWR?"  Part="1" 
AR Path="/5F7CC063/5F84F1B7" Ref="#PWR?"  Part="1" 
AR Path="/5F7CF7BD/5F84F1B7" Ref="#PWR?"  Part="1" 
AR Path="/5F84F1B7" Ref="#PWR0119"  Part="1" 
F 0 "#PWR0119" H 5100 2100 50  0001 C CNN
F 1 "GND" H 5105 2177 50  0000 C CNN
F 2 "" H 5100 2350 50  0001 C CNN
F 3 "" H 5100 2350 50  0001 C CNN
	1    5100 2350
	1    0    0    -1  
$EndComp
Wire Wire Line
	5100 2150 5100 2350
Text Notes 4750 5450 0    118  ~ 24
Hall Effect Sensors
Wire Notes Line
	4200 5800 7050 5800
$Comp
L Device:LED D?
U 1 1 5F8558CA
P 5200 3850
AR Path="/5F7B6E63/5F8558CA" Ref="D?"  Part="1" 
AR Path="/5F7CC063/5F8558CA" Ref="D?"  Part="1" 
AR Path="/5F7CF7BD/5F8558CA" Ref="D?"  Part="1" 
AR Path="/5F8558CA" Ref="D5"  Part="1" 
F 0 "D5" V 5239 3733 50  0000 R CNN
F 1 "LED_Yellow" V 5148 3733 50  0000 R CNN
F 2 "LED_SMD:LED_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 5200 3850 50  0001 C CNN
F 3 "~" H 5200 3850 50  0001 C CNN
	1    5200 3850
	0    -1   -1   0   
$EndComp
Wire Wire Line
	5200 3600 5200 3700
$Comp
L Device:R R?
U 1 1 5F8558D1
P 5200 3450
AR Path="/5F7B6E63/5F8558D1" Ref="R?"  Part="1" 
AR Path="/5F7CC063/5F8558D1" Ref="R?"  Part="1" 
AR Path="/5F7CF7BD/5F8558D1" Ref="R?"  Part="1" 
AR Path="/5F8558D1" Ref="R12"  Part="1" 
F 0 "R12" H 5131 3404 50  0000 R CNN
F 1 "330" H 5131 3495 50  0000 R CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" V 5130 3450 50  0001 C CNN
F 3 "~" H 5200 3450 50  0001 C CNN
	1    5200 3450
	1    0    0    1   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5F8558D8
P 5200 4200
AR Path="/5F7B6E63/5F8558D8" Ref="#PWR?"  Part="1" 
AR Path="/5F7BFBA0/5F8558D8" Ref="#PWR?"  Part="1" 
AR Path="/5F7C314F/5F8558D8" Ref="#PWR?"  Part="1" 
AR Path="/5F7CC063/5F8558D8" Ref="#PWR?"  Part="1" 
AR Path="/5F7CF7BD/5F8558D8" Ref="#PWR?"  Part="1" 
AR Path="/5F8558D8" Ref="#PWR0120"  Part="1" 
F 0 "#PWR0120" H 5200 3950 50  0001 C CNN
F 1 "GND" H 5205 4027 50  0000 C CNN
F 2 "" H 5200 4200 50  0001 C CNN
F 3 "" H 5200 4200 50  0001 C CNN
	1    5200 4200
	1    0    0    -1  
$EndComp
Wire Wire Line
	5200 4000 5200 4200
Wire Wire Line
	5100 1200 5100 1450
Connection ~ 5100 1200
Wire Wire Line
	5100 1200 4950 1200
Wire Wire Line
	5200 3050 5200 3300
Connection ~ 5200 3050
Wire Wire Line
	5200 3050 5700 3050
$Comp
L Device:R_POT RV1
U 1 1 5F87A988
P 10700 1700
F 0 "RV1" H 10630 1654 50  0000 R CNN
F 1 "R_POT" H 10630 1745 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Bourns_3296W_Vertical" H 10700 1700 50  0001 C CNN
F 3 "~" H 10700 1700 50  0001 C CNN
	1    10700 1700
	-1   0    0    1   
$EndComp
Wire Wire Line
	9600 1700 10550 1700
$Comp
L power:+5V #PWR0122
U 1 1 5F8834FB
P 10700 1450
F 0 "#PWR0122" H 10700 1300 50  0001 C CNN
F 1 "+5V" H 10715 1623 50  0000 C CNN
F 2 "" H 10700 1450 50  0001 C CNN
F 3 "" H 10700 1450 50  0001 C CNN
	1    10700 1450
	1    0    0    -1  
$EndComp
Wire Wire Line
	10700 1450 10700 1550
$Comp
L power:GND #PWR0123
U 1 1 5F8870F2
P 10700 2000
F 0 "#PWR0123" H 10700 1750 50  0001 C CNN
F 1 "GND" H 10705 1827 50  0000 C CNN
F 2 "" H 10700 2000 50  0001 C CNN
F 3 "" H 10700 2000 50  0001 C CNN
	1    10700 2000
	1    0    0    -1  
$EndComp
Wire Wire Line
	10700 1850 10700 2000
Wire Wire Line
	1700 2000 1800 2000
Wire Wire Line
	1800 2000 1800 2100
Connection ~ 1700 2000
Wire Wire Line
	1700 2000 1700 1900
Text Notes 2200 4550 0    50   ~ 10
Don't stress about these jumpers.\nJust connect a line straight from soft_reset
Text Notes 5600 4250 0    50   ~ 10
dont worry about the\nsecond hall effect sensor
Wire Wire Line
	8300 1800 8300 1950
$Comp
L power:GND #PWR0121
U 1 1 5F875B74
P 8300 1950
F 0 "#PWR0121" H 8300 1700 50  0001 C CNN
F 1 "GND" H 8305 1777 50  0000 C CNN
F 2 "" H 8300 1950 50  0001 C CNN
F 3 "" H 8300 1950 50  0001 C CNN
	1    8300 1950
	1    0    0    -1  
$EndComp
Wire Wire Line
	8300 1800 8800 1800
$EndSCHEMATC
