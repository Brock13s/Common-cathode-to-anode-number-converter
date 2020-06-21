# Common-cathode-to-anode-number-converter


What is this program you ask?


Well this program is for converting common cathode led number to common anode. 


What the hell do you mean by that?


What I mean by that is with common cathode rgb leds not the standard leds with 2 legs the ones with 4 legs they have red, green and blue leds built into them and theres two different types common cathode and common anode. Common cathode is where the middle longer leg is ground and all of the shorter legs are positive and 0 is off and 255 is on all way (5v) these require no conversion however common anode, the middle leg is 5v and all the others is ground (short legs) however when you write analogWrite(redpin, 255) for common anode it is now off and 0 is on so its basically the opposite. So this program converts the common cathode value into a common anode value that can be used in the source code to control your rgb led. All this program does is uses math to convert the number then spits it out you can do multiple colors at once without having to write it again which is kind of time consuming. Use this program for common anode to convert the cathode number to anode number. You wont need this for common cathode since its the default value.

Why did you make this program even though you could use a calculator

I decided to make this program because I thought it would be fun and im learning Programming. It also saves me from having to type out the equation in the calculator. Feel free to modify the source code to your own likings make it do stupid things I dont care just have fun changing my program and feel free to show me your modifed version of my program if you like. :)
