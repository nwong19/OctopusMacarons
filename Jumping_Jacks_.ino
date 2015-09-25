/*
  MeggyJr_Blink.pde
 
 Example file using the The Meggy Jr Simplified Library (MJSL)
  from the Meggy Jr RGB library for Arduino
   
 Blink a damned LED.
   
   
 
 Version 1.25 - 12/2/2008
 Copyright (c) 2008 Windell H. Oskay.  All right reserved.
 http://www.evilmadscientist.com/
 
 This library is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this library.  If not, see <http://www.gnu.org/licenses/>.
 	  
 */

 
 
 
 

/*
 * Adapted from "Blink,"  The basic Arduino example.  
 * http://www.arduino.cc/en/Tutorial/Blink
 */

#include <MeggyJrSimple.h>    // Required code, line 1 of 2.

void setup()                    // run once, when the sketch starts
{
  MeggyJrSimpleSetup();      // Required code, line 2 of 2.
}

void loop()                     // run over and over again

{
  
  DrawPx(2,0,FullOn);   // Draw a dot at x=3, y=4, in yellow.
  DrawPx(2,1,FullOn);
  DrawPx(2,2,FullOn); //right leg
  DrawPx(1,1,Dark);
  DrawPx(0,0,Dark);
  
  DrawPx(3,2,FullOn);
  DrawPx(4,2,FullOn);
  DrawPx(3,3,FullOn);
  DrawPx(4,3,FullOn);//bottom
  
  DrawPx(5,2,FullOn);
  DrawPx(5,1,FullOn);
  DrawPx(5,0,FullOn);//left leg
  DrawPx(6,1,Dark);
  DrawPx(7,0,Dark);
 
  DrawPx(4,4,FullOn);
  DrawPx(3,4,FullOn);
  DrawPx(2,4,FullOn);
  DrawPx(5,5,FullOn);
  DrawPx(5,4,FullOn);
  DrawPx(2,5,FullOn);
  DrawPx(3,5,FullOn);
  DrawPx(4,5,FullOn);//chest
  DrawPx(3,1,Dark);
  DrawPx(4,1,Dark);

  DrawPx(1,4,FullOn);//right arm
  DrawPx(6,4,FullOn);//left arm
  DrawPx(1,6,Dark);
  DrawPx(6,6,Dark);
  DrawPx(1,5,Dark);
  DrawPx(6,5,Dark);
 
  
  DisplaySlate();                  // Write the drawing to the screen.
  delay(140);                  // waits for a second
  
    
  DrawPx(2,0,Dark);   // Draw a dot at x=3, y=4, in yellow.
  DrawPx(2,1,Dark); //right leg
  DrawPx(1,1,FullOn);
  DrawPx(0,0,Dark);
  
  DrawPx(5,1,Dark);
  DrawPx(5,0,Dark);//left leg
  DrawPx(6,1,FullOn);
  DrawPx(7,0,Dark);
  
  DrawPx(4,4,FullOn);
  DrawPx(3,4,FullOn);
  DrawPx(2,4,FullOn);
  DrawPx(5,5,FullOn);
  DrawPx(5,4,FullOn);
  DrawPx(2,5,FullOn);
  DrawPx(3,5,FullOn);
  DrawPx(4,5,FullOn);

  DrawPx(3,6,FullOn);
  DrawPx(3,7,Dark);
  DrawPx(4,7,Dark);
  DrawPx(4,6,FullOn);
    
  DrawPx(3,6,FullOn);
  DrawPx(3,7,FullOn);
  DrawPx(4,7,FullOn);
  DrawPx(4,6,FullOn);//head
  
  DrawPx(1,4,Dark);//right arm
  DrawPx(6,4,Dark);//left arm
  DrawPx(1,6,Dark);
  DrawPx(6,6,Dark);
  DrawPx(1,5,FullOn);
  DrawPx(6,5,FullOn);

  
  DisplaySlate();                  // Write the drawing to the screen.
  delay(140);   
   
  DrawPx(2,0,Dark);   // Draw a dot at x=3, y=4, in yellow.
  DrawPx(2,1,Dark); //right leg
  DrawPx(1,1,FullOn);
  DrawPx(0,0,FullOn);
  
  DrawPx(5,1,Dark);
  DrawPx(5,0,Dark);//left leg
  DrawPx(6,1,FullOn);
  DrawPx(7,0,FullOn);
  
  DrawPx(3,1,FullOn);
  DrawPx(4,1,FullOn);//chest
  
  DrawPx(1,4,Dark);//right arm
  DrawPx(6,4,Dark);//left arm
  DrawPx(1,6,FullOn);
  DrawPx(6,6,FullOn);
  DrawPx(1,5,Dark);
  DrawPx(6,5,Dark);

  DrawPx(3,6,FullOn);
  DrawPx(3,7,Dark);
  DrawPx(4,7,Dark);
  DrawPx(4,6,FullOn);//head

  
  DisplaySlate();                  // Write the drawing to the screen.
  delay(340);    
  
      
  DrawPx(2,0,Dark);   // Draw a dot at x=3, y=4, in yellow.
  DrawPx(2,1,Dark); //right leg
  DrawPx(1,1,FullOn);
  DrawPx(0,0,Dark);
  
  DrawPx(5,1,Dark);
  DrawPx(5,0,Dark);//left leg
  DrawPx(6,1,FullOn);
  DrawPx(7,0,Dark);

  
  DrawPx(1,4,Dark);//right arm
  DrawPx(6,4,Dark);//left arm
  DrawPx(1,6,Dark);
  DrawPx(6,6,Dark);
  DrawPx(1,5,FullOn);
  DrawPx(6,5,FullOn);
  
  DrawPx(3,6,FullOn);
  DrawPx(3,7,FullOn);
  DrawPx(4,7,FullOn);
  DrawPx(4,6,FullOn);//head

  
  DisplaySlate();                  // Write the drawing to the screen.
  delay(140);   
  
  
}

