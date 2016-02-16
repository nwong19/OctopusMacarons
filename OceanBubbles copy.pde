/* This modification to the game is purposed for the bubbles to follow your cursor 
whereever it goes. There is an attraction that makes the bubbles come to the cursor,
however if the cursor is moved around rapidly, the dots will fling off to the walls.
The effect is made to look like water bubbles. 

N Wong
November 4, 2015
Modified game is called Ocean Bubbles
Taken off of sketch called Attraction by Jerome Herr.
The original sketch is as follows: http://openprocessing.org/sketch/218026

Changed:
Amount of bubbles
Color of background
Window size
Acceleration of dots
Dots attraction to the mouse
The way the dots look*/

int numMov = 600;      // how many dots there are on the screen
Mover[] movers = new Mover[numMov];
 
void setup() {
  size(400, 600);  // size of the window
  //smooth(8);
  background(255);
  strokeWeight(1);
  for (int i=0; i<numMov; i++) {
    movers[i] = new Mover();
  }
}
 
void draw() {
  background(207, 255, 233);  // changes the background to a light greenish blue
  for (int i=0; i<numMov; i++) {
    movers[i].run();
  }
}
 
class Mover {
 
  PVector location;  
  PVector velocity;
  PVector acceleration;
  float topSpeed, sz, d=0;
 
  Mover() {
    sz = 5;
    location = new PVector(random(sz, width-sz), random(sz, height-sz));
    velocity = new PVector(0, 0);
    //acceleration = new PVector(random(-0.01, 0.01), random(-0.02, 0.02));
    topSpeed = 600; // this determines the dots acceleration - the higher it is, the more acceleration
  }
 
  void run() {
    update();
    checkEdges();
    display();
  }
 
  void update() {
 
    PVector mouse = new PVector(mouseX, mouseY);
    PVector dir = PVector.sub(mouse, location);
    dir.normalize();
    float distance = mouse.dist(location);
    if (distance<100) {                         
      d = map(distance, 0, 1000, 0.2, 0.01);    // this makes the attraction to the mouse weaker
    }
    if (distance>100) {
      d = 0;
      velocity.mult(.99);
    }
    dir.mult(d);
    acceleration = dir;
 
    velocity.add(acceleration);
    velocity.limit(topSpeed);
    location.add(velocity);
  }
 
  void display() {
    fill(600);  // this makes the circles see-through the middle
    stroke(4);  // this makes the circles more filled in 
    ellipse(location.x, location.y, sz, sz);
  }
 
  void checkEdges() {
    if (location.x<sz/2 || location.x > width-sz/2) {
      velocity.x *= -1;
      acceleration.x *= -1;
    }
    if (location.y<sz/2 || location.y>height-sz/2) {
      velocity.y *= -1;
      acceleration.y *= -1;
    }
  }
}