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
  
  DrawPx(0,1,Blue);
  DrawPx(0,2,Blue); 
  DrawPx(0,3,Blue); 
  DrawPx(0,4,Blue);
  DrawPx(0,5,Blue);
  DrawPx(1,3,Blue); 
  DrawPx(2,2,Blue); 
  DrawPx(3,1,Blue); 
  DrawPx(3,2,Blue); 
  DrawPx(3,3,Blue); 
  DrawPx(3,4,Blue); 
  DrawPx(3,5,Blue); 

  DrawPx(4,1,DimViolet); 
  DrawPx(4,2,DimViolet); 
  DrawPx(4,3,DimViolet); 
  DrawPx(4,4,DimViolet); 
  DrawPx(4,5,DimViolet); 
  DrawPx(5,2,DimViolet); 
  DrawPx(6,2,DimViolet);
  DrawPx(7,1,DimViolet);
  DrawPx(7,2,DimViolet);
  DrawPx(7,3,DimViolet);
  DrawPx(7,4,DimViolet);
  DrawPx(7,5,DimViolet);
  

  DisplaySlate();                  // Write the drawing to the screen.
  delay(20000);                  // waits for a second
  
  ClearSlate();                 // Erase drawing
  DisplaySlate();                  // Write the (now empty) drawing to the screen.
   
  delay(100);                  // waits for a second
  
}
 



