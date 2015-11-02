/*
  MeggyJr_Blink.pde
 
 Example file using the The Meggy Jr Simplified Library (MJSL)
  from the Meggy Jr RGB library for Arduino

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

#include <MeggyJrSimple.h>    // Required code, line 1 of 2.

int xdot=4;
int ydot=0;

int xbombs1[8]= {0,0,0,0};
int ybombs1[8]= {0,2,4,6};

int xbombs2[8]= {0,0,0,0};
int ybombs2[8]= {1,3,5,7};


void setup()                    // run once, when the sketch starts
{
  MeggyJrSimpleSetup();      // Required code, line 2 of 2.
  
  ClearSlate();                    // make screen blank
  SetAuxLEDsBinary(B00000000);    // all AUXlights are off
  
  DisplaySlate();
} // End setup()

void loop()                     // run over and over again
{
  ClearSlate();   // makes the dot from having color over every coordinate it runs over
  CheckButtonsDown();
  
  if(Button_Up)        
  ydot=ydot+1; //increases the y coordinate dot by one 

         if(ydot>7)
          ydot=7;      //stops the dot from going off-screen

  if(Button_Down)       
  ydot=ydot-1;  
  
         if(ydot<0)
         ydot=0;      //stops the dot from going off-screen

  if(Button_Right)   
  xdot=xdot+1; 

         if (xdot>7)
         xdot=7;
         
  if(Button_Left)   
  xdot=xdot-1; 
 
         if(xdot<0)
         xdot=0;
    
  DrawBombers();               // the Bombers is the row of the y-axi
  DrawObstacles();
  DrawBombs(); 
  
// collision code

  if (ReadPx(xdot,ydot) == 1) // check for collision with bomber or bomb
  {
    xdot = 4;
    ydot = 0;
  }  
  
   if (ReadPx(xdot,ydot) == 18) //check for collision with obstacle
  {
    xdot = 4;
    ydot = 0;
  }
  
  DrawPlayer();
  DisplaySlate(); 
  delay(20);
  
  UpdateBombs();   
  
}  // end of main loop 

void DrawObstacles()
{
  EditColor(18,15,11,1);  // obstacles (green)
  DrawPx(5,4,18);              // obstacles (green)
  DrawPx(3,1,18);
  DrawPx(4,6,18);
  DrawPx(6,2,18);
  DrawPx(7,3,18);
  DrawPx(2,5,18);
  DrawPx(2,2,18);
  DrawPx(3,4,18);
  DrawPx(1,3,18);
  DrawPx(4,3,18);
  
} // end of draw obstacles

void DrawBombers()             // bombers drawing
{
  DrawPx(0,0,1);
  DrawPx(0,1,1);
  DrawPx(0,2,1);
  DrawPx(0,3,1);
  DrawPx(0,4,1);
  DrawPx(0,5,1);
  DrawPx(0,6,1);
  DrawPx(0,7,1);
  
}  //end of draw bombers
 

void UpdateBombs()
{
  for (int i=0; i<4; i++) //this updates the x coord of bomb array 1 so it moves right across the game slate
  {
    xbombs1[i] = xbombs1[i] + 1;
  }
  
   if (xbombs1[0] > 7) //when the first wave of bombs reaches the far right
       {
       for (int i=0; i<4; i++) 
       xbombs1[i] = 0; // this is for the first xbomb looping
       }  
    
   
   if(xbombs1[0] == 0)
       {
       for (int i=0; i<4; i++)
           {
           xbombs2[i] = xbombs2[i] + 1; //the xbombs set goes marching across the screen
           }
       }  
        
   if(xbombs2[0] > 7) //makes the second set of bombs loop 
       {
       for (int i=0; i<4; i++)
       xbombs2[i] = 0; //set the x-integer back to 0
       }  
       
   if(ydot == 7)
     {
       ForTheWin(); //go to the end of the game, basically the 'win' screen
     }
     
delay(500);
}


void ForTheWin()
{
             ClearSlate();
             for (int n=0; n<8; n++) //turn it pixel by pixel 
                  {//2 begin
                  for (int m=0; m<8; m++)
                         {//3 begin
                         DrawPx(n, m, random(8)); //the colors are random, there are 8 different colors in the pallet
                         DisplaySlate();
                         delay(30);
                         SetAuxLEDsBinary(B11111111);                         
                         }//3 end
                   }//2 end
                   
                     
}
     

void DrawBombs()
{
  for (int i=0; i<4; i++)
       {
         DrawPx(xbombs1[i], ybombs1[i], Red);//color of the first set of bombs
       } 
       
  for (int i=0; i<4; i++)
       {
         DrawPx(xbombs2[i], ybombs2[i], Red);//color of the second set of bombs
       }  
}

void DrawPlayer()
{
   EditColor(14,3,5,16);//color of the player is blue
   DrawPx(xdot,ydot,14);
 }
 
 
/*void UpdatePlayer()
{
  delay(500);
}
 */
 
