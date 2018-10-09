# Project01
Andrew Watts

COSC 2030

OCT 26 2018 


Planning:

  Values that need to be stored: (two weeks worth of data)

Daily sum of bloodsugar reading, Highest Daily reading, Lowest Daily reading, Total count of valid daily readings
	
Weekly sum of all readings, week's highest and lowest reading, total count of valid readings,  the day with the largest change in number of readings from the previous day.

functionality:

must accept inputs of positive int or float, zeros or negatives will be ignored

Inputing D should display the day's sumary, input of W should display the Week summary, N should move to the next day


other:

Must be able to deal with overflow in the sum of all values, considering that a lethal bloodsugar level is about 550 (mg/dL), the world record for button pressing is about 8 presses per second and that the user must input values manualy: if the user was to maintain a bloodsugar level of 600 for two weeks straight and take a reading ten times per second that absolute maximum sum we would need to store would be 7.2576*10^9. so our sum should be able to handle up to that number. Being able to store a larger number would be pointless as the user is very very dead at this point. 
