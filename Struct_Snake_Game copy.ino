/*
  MeggyJr_EasyDrawDots.pde
 
 Example file using the The Meggy Jr Simplified Library (MJSL)
  from the Meggy Jr RGB library for Arduino
   
   This program demonstrates how to set up and use the MJSL to
   draw some colored dots on the screen.  The top half of this file
   is documentation, the lower half is a very short example program.
   
   This example is really minimalist-- just drawing some colored dots by name.
   
   
   
 
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

struct Point
{
  int x;
  int y;
};

Point snake1 = {3,4};
Point snake2 = {4,4};

Point snakeArray[64]= {snake1, snake2};

int xapple = random(8);  
int yapple = random(8); 

int SnakeDirection = 0;
int SnakeLength = 2;

boolean gotApple = false; 
//boolean basically means 'here is an event. true or not true?'
//At the start of the game, it hasn't,
//so we set gotApple to false.
//NOTE: This code is case sensitive,
//so use all lower case for the values 'true' and 'false'.
int HowManyApples = 0;   

void setup()                    // run once, when the sketch starts
{

  MeggyJrSimpleSetup();      // Required code, line 2 of 2.

  ClearSlate();
  SetAuxLEDsBinary(B00000000);  //Set all aux LEDs off.
  
  DrawSnake();
  Spawn();
  
  DisplaySlate();

}  // End setup()


void loop()                     // run over and over again
{   
 
  DisplaySlate();
  delay(150);
  ClearSlate();
  CheckButtonsDown();
  
    
  if (Button_Up)   
     SnakeDirection = 0;     
  if (Button_Down)  
     SnakeDirection = 180;
  if (Button_Right)     
      SnakeDirection = 90;
  if (Button_Left)   
      SnakeDirection = 270;
  
  UpdateSnake();
  DrawSnake();
 
  if (snakeArray[0].x == xapple and snakeArray[0].y == yapple) 
      gotApple = true;  

  Spawn();

  DisplaySlate();
  delay(80);

}

void Die()
{
ClearSlate();
for (int n=0; n<8; n++) //turn it pixel by pixel aqua
                  {//2 begin
                  for (int m=0; m<8; m++)
                         {//3 begin
                         DrawPx(n, m, random(2));
                         DisplaySlate();
                         delay(30);
                         }  
                    SnakeLength = 2;
                    gotApple = false; 
                    HowManyApples = 0; 
                    SetAuxLEDsBinary(B00000000);
                    }
}

void UpdateSnake()
{
  for(int i = SnakeLength -1; i>0; i--)
  {
    snakeArray[i].x = snakeArray[i-1].x;
    snakeArray[i].y = snakeArray[i-1].y; 
  }    
 
  if (SnakeDirection == 0)
   {
     snakeArray[0].y = snakeArray[0].y + 1;  
      if (snakeArray[0].y == 8)   //If at the top side of board, wrap around to bottom side
          snakeArray[0].y = 0;
   }
   
   if (SnakeDirection == 90)
   {
      snakeArray[0].x = snakeArray[0].x + 1;
      if (snakeArray[0].x == 8)  //If at the right side of board, wrap around to left side
          snakeArray[0].x = 0;
   }
   
     if (SnakeDirection == 180)
   {
     if (snakeArray[0].y == 0)      //if at bottom side of board, wrap around to top side,
         snakeArray[0].y = 7;
      else
         snakeArray[0].y = snakeArray[0].y - 1;   //else, decrease y-coord by 1.
   }
   
     if (SnakeDirection == 270)
     {
       if (snakeArray[0].x == 0)      //if at left side of board, wrap around to right side,
           snakeArray[0].x = 7;
       else
           snakeArray[0].x = snakeArray[0].x - 1;   //else, decrease x-coord by 1.
          
  }  
  
}  

  

void Spawn()
{
  if (gotApple)
  {
    SnakeLength=SnakeLength+1;
    HowManyApples=HowManyApples+1;
    if (HowManyApples==1)
      SetAuxLEDsBinary(B10000000);
    if (HowManyApples==2)
      SetAuxLEDsBinary(B11000000);
    if (HowManyApples==3)
      SetAuxLEDsBinary(B11100000);
    if (HowManyApples==4)
      SetAuxLEDsBinary(B11110000);
    if (HowManyApples==5)
      SetAuxLEDsBinary(B11111100);
    if (HowManyApples==6)
      SetAuxLEDsBinary(B11111110);  
    if (HowManyApples==7)
      SetAuxLEDsBinary(B11111111);
    
    if (HowManyApples<8)
    {
      delay(20);
    }
    
    if (HowManyApples>8)
    {
        ForTheWin();
    }
    
   Tone_Start(ToneC5, 200);
   xapple=random(8);
   yapple=random(8);  
   gotApple=false;
   
  }
  
  DrawPx(xapple,yapple,DimRed);
}

void ForTheWin()
{
             ClearSlate();
             for (int n=0; n<8; n++) //turn it pixel by pixel aqua
                  {//2 begin
                  for (int m=0; m<8; m++)
                         {//3 begin
                         DrawPx(n, m, random(8));
                         DisplaySlate();
                         delay(30);
                         Tone_Start(ToneC3, 200);
                         SnakeLength = 2;
                         gotApple = false; 
                         HowManyApples = 0; 
                         SetAuxLEDsBinary(B00000000);
                         }//3 end  
                   }//2 end
                   
                     
}
    
void DrawSnake()
    
  { 
    for (int i=1; i<SnakeLength; i++)
    {
    DrawPx(snakeArray[i].x, snakeArray[i].y,DimAqua); // drawing body
    }
     if (ReadPx(snakeArray[0].x, snakeArray[0].y) == DimAqua)
    {
      Die();
    } 
    DrawPx(snakeArray[0].x,  snakeArray[0].y,Yellow); //drawing head
  }


