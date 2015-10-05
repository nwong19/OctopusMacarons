/*
  MeggyJr_CheckButtonsDown.pde
 
 Example file using the The Meggy Jr Simplified Library (MJSL)
 from the Meggy Jr RGB library for Arduino
 
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

//declare variables for x coord and y coord of a single light
int xdot=1;
int ydot=0;

int xgoal=7;
int ygoal=0;

void setup()                    // run once, when the sketch starts
{

  MeggyJrSimpleSetup();      // RequiDimGreen code, line 2 of 2.

}  // End setup()

void loop()
{  
  
   ClearSlate();
   //make walls
   
    DrawPx(0,0,14);
    DrawPx(0,1,14);
    DrawPx(0,2,14);
    DrawPx(1,2,14);
    DrawPx(2,0,14);
    DrawPx(3,0,14);
    DrawPx(3,1,14);
    DrawPx(3,2,14);
    DrawPx(0,4,14);
    DrawPx(2,5,14);
    DrawPx(3,4,14);
    DrawPx(4,6,14);
    DrawPx(4,0,14);
    DrawPx(2,4,14);
    DrawPx(4,7,14);
    DrawPx(0,3,14);
    DrawPx(6,6,14);
    DrawPx(6,5,14);
    DrawPx(6,4,14);
    DrawPx(7,2,14);
    DrawPx(6,2,14);
    DrawPx(6,1,14);
    DrawPx(3,3,14);
    DrawPx(1,6,14);
    DrawPx(3,7,14);
    DrawPx(5,2,14);
    DrawPx(4,4,14);
    DrawPx(5,4,14);
    DrawPx(7,1,14);
    DrawPx(7,0,3);
    
   CheckButtonsDown();
   
   if(Button_Up)
     ydot=ydot+1;
     
     if(ydot>7)
     ydot=7;
     
       if (ReadPx(xdot, ydot) == 14) //if moving the player makes them collide with a wall                                          // (color of wall is red or 1), send the player back to the beginning.
          { 
            xdot = 1;   //beginning of this maze set to (0,1)
            ydot = 0;
          }
          
   if(Button_Down)
     ydot=ydot-1;
     
     if(ydot<0)
     ydot=0;
     
       if (ReadPx(xdot, ydot) == 14) //if moving the player makes them collide with a wall                                          // (color of wall is red or 1), send the player back to the beginning.
          { 
            xdot = 1;   //beginning of this maze set to (0,1)
            ydot = 0;
          }
          
   if(Button_Right)
     xdot=xdot+1;
     
     if(xdot>7)
     xdot=7;
     
       if (ReadPx(xdot, ydot) == 14) //if moving the player makes them collide with a wall                                          // (color of wall is red or 1), send the player back to the beginning.
          { 
            xdot = 1;   //beginning of this maze set to (0,1)
            ydot = 0;
          }
          
           if (ReadPx(xdot, ydot) == 3) 
          { // 1
           ForTheWin();
          } //1 end 
          
     
   if(Button_Left)
     xdot=xdot-1;
     
     if(xdot<0)
     xdot=0;
     
       if (ReadPx(xdot, ydot) == 14) //if moving the player makes them collide with a wall                                          // (color of wall is red or 1), send the player back to the beginning.
          { 
            xdot = 1;   //beginning of this maze set to (0,1)
            ydot = 0;
          }
     
    DrawPx(xdot, ydot, DimAqua);
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
