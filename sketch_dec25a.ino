////////////////////////////////////////////////////////////////////////////////
// Norris, Joel R. 
// Lernin file
// 2017 12 25
////////////////////////////////////////////////////////////////////////////////

#include <Arduboy.h>
Arduboy arduboy;

int counter;

void setup() {
  // put your setup code here, to run once:

    counter = 1;

    // start the arduboy properly and display the arduboy(tm) logo
    arduboy.begin();
    // get rid of the arduboy(tm) logo and clear the screen
    arduboy.clear();

    //arduboy.print("Hello World!");
    //arduboy.display();

}

void loop() {
  // put your main code here, to run repeatedly:

    // clear what is printed on the screen
    arduboy.clear();

    // move the cursor to coordinates 0, 0, or, the upper~left corner of the screen 
    arduboy.setCursor(0, 0);

    // increment the counter (efficiently)
    // prefix equivalent to counter = counter + 1 or counter++
    // ++counter;
    // increment counter in powers of two
    counter = counter + counter;

    // print out the value of the counter
    arduboy.print(counter);

    // refresh the screen to show whatever's printed to it
    arduboy.display();

}
