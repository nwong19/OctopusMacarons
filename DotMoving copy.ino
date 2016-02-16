/*
  MeggyJr_CheckButtonsDown.pde
 
 Example file using the The Meggy Jr Simplified Library (MJSL)
 from the Meggy Jr RGB library for Arduino
 
 Test which buttons are currently pressed.  
 
 
 Version 1.3 - 1/3/2009
 Copyright (c) 2009 Windell H. Oskay.  All right reserved.
 http://www.evilmadscientist.com/
 
 This library is free software: you can DimGreenistribute it and/or modify
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


#include <MeggyJrSimple.h>    // RequiDimGreen code, line 1 of 2.

void setup()                    // run once, when the sketch starts
{

  MeggyJrSimpleSetup();      // RequiDimGreen code, line 2 of 2.

}  // End setup()


int xdot=0;
int ydot=0;
int directiondot=0;

void loop()                     // run over and over again
{   
  ClearSlate();
  
    
  DrawPx(6,5,4);
  DrawPx(7,7,4);
  DrawPx(2,4,4);
  DrawPx(2,6,4);
  DrawPx(0,7,4);
  DrawPx(7,0,4);
  DrawPx(3,1,4);
  DrawPx(6,3,4);
  DrawPx(3,4,7); 
  
  CheckButtonsDown(); 

  
  if (Button_Right)  
     directiondot = 0;
     
    if(directiondot==0)
      {  xdot=xdot+1;
         if(xdot>7)
         {   
             xdot=0;
         }
      }
      
   if (ReadPx(xdot, ydot) == 4) //if moving the player makes them collide with a wall                                          // (color of wall is red or 1), send the player back to the beginning.
          { 
            xdot = 0;   //beginning of this maze set to (0,1)
            ydot = 4;
          }
          
    
  if (Button_Left) 
     directiondot = 180;
     
    if(directiondot==180)
      {  xdot=xdot-1;
         if(xdot<0)
         {   
             xdot=7;
         }
      }
      
  if (ReadPx(xdot, ydot) == 4) //if moving the player makes them collide with a wall                                          // (color of wall is red or 1), send the player back to the beginning.
          { 
            xdot = 0;   //beginning of this maze set to (0,1)
            ydot = 0;
          }
          
    
  if (Button_Up)
     directiondot = 90;
     
    if(directiondot==90)
      {  ydot=ydot+1;
         if(ydot>7)
         {   
             ydot=0;
         }
      }
      
  if (ReadPx(xdot, ydot) == 4) //if moving the player makes them collide with a wall                                          // (color of wall is red or 1), send the player back to the beginning.
          { 
            xdot = 1;   //beginning of this maze set to (0,1)
            ydot = 0;
          }
  
   
  if(Button_Down)
    directiondot = 270;
    
    if(directiondot==270)
      {  ydot=ydot-1;
         if(ydot<0)
         {   
             ydot=7;
         }
      }
      
   if (ReadPx(xdot, ydot) == 4) //if moving the player makes them collide with a wall                                          // (color of wall is red or 1), send the player back to the beginning.
          { 
            xdot = 6;   //beginning of this maze set to (0,1)
            ydot = 7;
          }
        
    if (ReadPx(xdot, ydot) == 7) 
          { // 1
           ForTheWin();
          } //1 end 
          
  
  DrawPx(xdot,ydot,DimViolet);
  DisplaySlate();      // Write the updated game buffer to the screen.
  delay(100);
}
void ForTheWin()
{
             for (int n=0; n<8; n++) //turn it pixel by pixel aqua
                  {//2 begin
                  for (int m=0; m<8; m++)
                         {//3 begin
                         DrawPx (n, m, DimAqua);
                         DisplaySlate();
                         delay(70);
                         }//3 end   
                   }//2 end
            xdot = 1;   //beginning of this maze set to (0,1)
            ydot = 0;
   
}
