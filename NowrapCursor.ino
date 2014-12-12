/*
  NowrapCursor.pde
  Nowrap Blue Cursor
    Change the direction of the cursor using the
    up, down, left, and right buttons. If the dot
    tries to go off screen, a sound will play.

  by Brennan @ http://github.com/bbrown17
*/
   


#include <MeggyJrSimple.h>    // Required code, line 1 of 2.

// global variables go here
int xcoord = 0;
int ycoord = 7;

/*

IDEAS: Make the dots like a diamond so the user is more challenged.
*/

void setup()                    // run once, when the sketch starts
{
  MeggyJrSimpleSetup();      // Required code
  
}

void loop()  // run over and over again
{
  shift();
  DrawPx(xcoord,ycoord,Blue); // draw dot
  DisplaySlate();
  delay(150);
  ClearSlate();
  
}

void shift() // taken from Maze_Game
{
  CheckButtonsDown();
  if (Button_Right)
  {
    if (xcoord < 7)
      xcoord = xcoord + 1; // could also say xcoord++
  }    
  if (Button_Left)
  {
    if (xcoord > 0)
      xcoord = xcoord - 1;
  }    
    if (Button_Up)
  {
    if (ycoord < 7)
      ycoord = ycoord + 1;
  }    
  
  if (Button_Down)
  {
    if (ycoord > 0)
      ycoord = ycoord - 1;
  } 

  
}
