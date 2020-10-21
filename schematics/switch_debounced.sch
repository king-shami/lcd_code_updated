EESchema Schematic File Version 4
LIBS:odometer_project-cache
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 2 4
Title "Odometer I2C Interface"
Date "2020-10-03"
Rev "2"
Comp "DES Gang"
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Switch:SW_SPST SW1
U 1 1 5F7A2F6B
P 4700 3950
AR Path="/5F7B6E63/5F7A2F6B" Ref="SW1"  Part="1" 
AR Path="/5F7BFBA0/5F7A2F6B" Ref="SW2"  Part="1" 
AR Path="/5F7C314F/5F7A2F6B" Ref="SW3"  Part="1" 
AR Path="/5F7CC063/5F7A2F6B" Ref="SW2"  Part="1" 
AR Path="/5F7CF7BD/5F7A2F6B" Ref="SW3"  Part="1" 
F 0 "SW3" V 4654 4048 50  0000 L CNN
F 1 "SW_SPST" V 4745 4048 50  0000 L CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H4.3mm" H 4700 3950 50  0001 C CNN
F 3 "~" H 4700 3950 50  0001 C CNN
	1    4700 3950
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR0101
U 1 1 5F7A3360
P 4700 4500
AR Path="/5F7B6E63/5F7A3360" Ref="#PWR0101"  Part="1" 
AR Path="/5F7BFBA0/5F7A3360" Ref="#PWR0106"  Part="1" 
AR Path="/5F7C314F/5F7A3360" Ref="#PWR0113"  Part="1" 
AR Path="/5F7CC063/5F7A3360" Ref="#PWR0106"  Part="1" 
AR Path="/5F7CF7BD/5F7A3360" Ref="#PWR0113"  Part="1" 
F 0 "#PWR0113" H 4700 4250 50  0001 C CNN
F 1 "GND" H 4705 4327 50  0000 C CNN
F 2 "" H 4700 4500 50  0001 C CNN
F 3 "" H 4700 4500 50  0001 C CNN
	1    4700 4500
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR0102
U 1 1 5F7A3875
P 4700 2650
AR Path="/5F7B6E63/5F7A3875" Ref="#PWR0102"  Part="1" 
AR Path="/5F7BFBA0/5F7A3875" Ref="#PWR0107"  Part="1" 
AR Path="/5F7C314F/5F7A3875" Ref="#PWR0114"  Part="1" 
AR Path="/5F7CC063/5F7A3875" Ref="#PWR0107"  Part="1" 
AR Path="/5F7CF7BD/5F7A3875" Ref="#PWR0114"  Part="1" 
F 0 "#PWR0114" H 4700 2500 50  0001 C CNN
F 1 "+5V" H 4715 2823 50  0000 C CNN
F 2 "" H 4700 2650 50  0001 C CNN
F 3 "" H 4700 2650 50  0001 C CNN
	1    4700 2650
	1    0    0    -1  
$EndComp
Wire Wire Line
	4700 2650 4700 2850
Wire Wire Line
	4700 4150 4700 4500
$Comp
L Device:R R1
U 1 1 5F7A4488
P 4700 3000
AR Path="/5F7B6E63/5F7A4488" Ref="R1"  Part="1" 
AR Path="/5F7BFBA0/5F7A4488" Ref="R4"  Part="1" 
AR Path="/5F7C314F/5F7A4488" Ref="R6"  Part="1" 
AR Path="/5F7CC063/5F7A4488" Ref="R4"  Part="1" 
AR Path="/5F7CF7BD/5F7A4488" Ref="R6"  Part="1" 
F 0 "R6" H 4770 3046 50  0000 L CNN
F 1 "10K" H 4770 2955 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" V 4630 3000 50  0001 C CNN
F 3 "~" H 4700 3000 50  0001 C CNN
	1    4700 3000
	1    0    0    -1  
$EndComp
Wire Wire Line
	4700 3150 4700 3400
Wire Wire Line
	4950 3400 4700 3400
Connection ~ 4700 3400
Wire Wire Line
	4700 3400 4700 3750
$Comp
L Device:C C2
U 1 1 5F7A534F
P 5450 3950
AR Path="/5F7B6E63/5F7A534F" Ref="C2"  Part="1" 
AR Path="/5F7BFBA0/5F7A534F" Ref="C3"  Part="1" 
AR Path="/5F7C314F/5F7A534F" Ref="C4"  Part="1" 
AR Path="/5F7CC063/5F7A534F" Ref="C3"  Part="1" 
AR Path="/5F7CF7BD/5F7A534F" Ref="C4"  Part="1" 
F 0 "C4" H 5565 3996 50  0000 L CNN
F 1 "0.1uF" H 5565 3905 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 5488 3800 50  0001 C CNN
F 3 "~" H 5450 3950 50  0001 C CNN
	1    5450 3950
	1    0    0    -1  
$EndComp
Wire Wire Line
	5450 3800 5450 3400
Connection ~ 5450 3400
Wire Wire Line
	5450 3400 6100 3400
$Comp
L power:GND #PWR0105
U 1 1 5F7A59C8
P 5450 4500
AR Path="/5F7B6E63/5F7A59C8" Ref="#PWR0105"  Part="1" 
AR Path="/5F7BFBA0/5F7A59C8" Ref="#PWR0112"  Part="1" 
AR Path="/5F7C314F/5F7A59C8" Ref="#PWR0115"  Part="1" 
AR Path="/5F7CC063/5F7A59C8" Ref="#PWR0112"  Part="1" 
AR Path="/5F7CF7BD/5F7A59C8" Ref="#PWR0115"  Part="1" 
F 0 "#PWR0115" H 5450 4250 50  0001 C CNN
F 1 "GND" H 5455 4327 50  0000 C CNN
F 2 "" H 5450 4500 50  0001 C CNN
F 3 "" H 5450 4500 50  0001 C CNN
	1    5450 4500
	1    0    0    -1  
$EndComp
Wire Wire Line
	5450 4100 5450 4500
Text HLabel 6500 3400 2    50   Output ~ 0
vout
$Comp
L Device:R R2
U 1 1 5F7D50A7
P 5100 3400
AR Path="/5F7B6E63/5F7D50A7" Ref="R2"  Part="1" 
AR Path="/5F7BFBA0/5F7D50A7" Ref="R?"  Part="1" 
AR Path="/5F7C314F/5F7D50A7" Ref="R?"  Part="1" 
AR Path="/5F7CC063/5F7D50A7" Ref="R5"  Part="1" 
AR Path="/5F7CF7BD/5F7D50A7" Ref="R7"  Part="1" 
F 0 "R7" H 5170 3446 50  0000 L CNN
F 1 "10K" H 5170 3355 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" V 5030 3400 50  0001 C CNN
F 3 "~" H 5100 3400 50  0001 C CNN
	1    5100 3400
	0    -1   -1   0   
$EndComp
Wire Wire Line
	5250 3400 5450 3400
$Comp
L Device:LED D1
U 1 1 5F8214CD
P 6100 4150
AR Path="/5F7B6E63/5F8214CD" Ref="D1"  Part="1" 
AR Path="/5F7CC063/5F8214CD" Ref="D2"  Part="1" 
AR Path="/5F7CF7BD/5F8214CD" Ref="D3"  Part="1" 
F 0 "D3" V 6139 4033 50  0000 R CNN
F 1 "LED_Yellow" V 6048 4033 50  0000 R CNN
F 2 "LED_SMD:LED_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 6100 4150 50  0001 C CNN
F 3 "~" H 6100 4150 50  0001 C CNN
	1    6100 4150
	0    -1   -1   0   
$EndComp
Wire Wire Line
	6100 3900 6100 4000
$Comp
L Device:R R8
U 1 1 5F8223FC
P 6100 3750
AR Path="/5F7B6E63/5F8223FC" Ref="R8"  Part="1" 
AR Path="/5F7CC063/5F8223FC" Ref="R9"  Part="1" 
AR Path="/5F7CF7BD/5F8223FC" Ref="R10"  Part="1" 
F 0 "R10" H 6031 3704 50  0000 R CNN
F 1 "330" H 6031 3795 50  0000 R CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" V 6030 3750 50  0001 C CNN
F 3 "~" H 6100 3750 50  0001 C CNN
	1    6100 3750
	1    0    0    1   
$EndComp
Wire Wire Line
	6100 3600 6100 3400
Connection ~ 6100 3400
Wire Wire Line
	6100 3400 6500 3400
$Comp
L power:GND #PWR03
U 1 1 5F8242EB
P 6100 4500
AR Path="/5F7B6E63/5F8242EB" Ref="#PWR03"  Part="1" 
AR Path="/5F7BFBA0/5F8242EB" Ref="#PWR?"  Part="1" 
AR Path="/5F7C314F/5F8242EB" Ref="#PWR?"  Part="1" 
AR Path="/5F7CC063/5F8242EB" Ref="#PWR04"  Part="1" 
AR Path="/5F7CF7BD/5F8242EB" Ref="#PWR05"  Part="1" 
F 0 "#PWR05" H 6100 4250 50  0001 C CNN
F 1 "GND" H 6105 4327 50  0000 C CNN
F 2 "" H 6100 4500 50  0001 C CNN
F 3 "" H 6100 4500 50  0001 C CNN
	1    6100 4500
	1    0    0    -1  
$EndComp
Wire Wire Line
	6100 4300 6100 4500
Text Notes 6550 3950 0    50   ~ 10
On our Proto Board Design, dont worry \nabout this circuit - just use a standard pull \ndown resistor with a switch and connect the \nrelevant lines to the relevant pins
$EndSCHEMATC
