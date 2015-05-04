#include <stdlib.h>
#include <stdio.h>
 void sentence();
 void question();
 void approval();
 void character();
 void place();
 void game();
 void appeal();
 void subject();
 void reason();
 void description();
 void exclamation();
 void atime();
/*
Sentence=<Question>|<Approval>
Question=<Charachter>, where is <Place>?| Let`s play <Game>?
Approval=<Reference>, we will not go to <Place> for <Subject>, because I am <Reason>.|<Exclamation> , <Charachter> looks <Description>.|What time is it? - <Time> time!
Charachter=Finn|Princess Bubblegum|BMO|Earl of Lemongrab|The Ice King
Place=Candy Kingdom|Lumpy Space|Ice Kingdom|Mount Kragdor|Rough House
Game=Drop ball|BMO|Dodge Socks|Card War
Appeal=Bro|Brother|Man|Dude
Subject=Ancient Psychic Tandem War Elephant|The Enchiridion|Universal translator device|Armor of Zeldron|The Glasses of Nerdicon
Reason=tired|ill|too busy|too handsome|playing|hungry|eating
Description=weird|awesome|great|mathematical|mysteriously|perfectly
Exclamation=Listen|Look|Hey|Hmm 
Time=Adventure|Lunch|Lady|Incremental
*/
void sentence()
{
  int rnd =0+rand()%2;
  switch(rnd)
  {
    case 0:
      question();
      break;
    case 1:
      approval();
      break;
  }
}
void question()
{
  int rnd =rand()%2;
  switch(rnd)
  {
    case 0:
      character();
      printf(", where is ");
      place();
      printf("?\n");
      break;
    case 1:
      printf("Let`s play ");
      game();
      printf("?\n");
      break;
  }
}
void approval()
{
  int rnd =rand()%3;
  switch(rnd)
  {
    case 0:
      appeal();
      printf(", we will not go to ");
      place();
      printf(" for ");
      subject();
      printf(", because I'm ");
      reason();
      printf(".\n");
      break;
    case 1:
      exclamation();
      printf(", ");
      character();
      printf(" looks ");
      description();
      printf(".\n");
      break;
    case 2:
      printf("What time is it? - ");
      atime();
      printf(" time!\n");
      break;
  }
}
void character()
{
  int rnd =rand()%5;
  switch(rnd)
  {
    case 0:
      printf("Finn");
      break;
    case 1:
      printf("Princess Bubblegum");
      break;
    case 2:
      printf("BMO");
      break;
    case 3:
      printf("Earl of Lemongrab");
      break;
    case 4:
      printf("The Ice King");
      break;
  }
}
void place()
{
  int rnd =rand()%5;
  switch(rnd)
  {
    case 0:
      printf("Candy Kingdom");
      break;
    case 1:
      printf("Lumpy Space");
      break;
    case 2:
      printf("Ice Kingdom");
      break;
    case 3:
      printf("Mount Kragdor");
      break;
    case 4:
      printf("Rough House");
      break;
  }
}
void game()
{
  int rnd =rand()%4;
  switch(rnd)
  {
    case 0:
      printf("a Drop ball");
      break;
    case 1:
      printf("the BMO");
      break;
    case 2:
      printf("a Dodge Socks");
      break;
    case 3:
      printf("a Card War");
      break;
  }
}
void appeal()
{
  int rnd =rand()%4;
  switch(rnd)
  {
    case 0:
      printf("Bro");
      break;
    case 1:
      printf("Brother");
      break;
    case 2:
      printf("Man");
      break;
    case 3:
      printf("Dude");
      break;
  }
}
void subject()
{
  int rnd =rand()%5;
  switch(rnd)
  {
    case 0:
      printf("Ancient Psychic Tandem War Elephant");
      break;
    case 1:
      printf("The Enchiridion");
      break;
    case 2:
      printf("Universal translator device");
      break;
    case 3:
      printf("Armor of Zeldron");
      break;
    case 4:
      printf("The Glasses of Nerdicon");
      break;
  }
}
void reason()
{
  int rnd =rand()%7;
  switch(rnd)
  {
    case 0:
      printf("tired");
      break;
    case 1:
      printf("ill");
      break;
    case 2:
      printf("too busy");
      break;
    case 3:
      printf("too handsome");
      break;
    case 4:
      printf("playing");
      break;
    case 5:
      printf("hungry");
      break;
    case 6:
      printf("eating");
      break;
  }
}
void description()
{
  int rnd =rand()%6;
  switch(rnd)
  {
    case 0:
      printf("weird");
      break;
    case 1:
      printf("awesome");
      break;
    case 2:
      printf("great");
      break;
    case 3:
      printf("mathematical");
      break;
    case 4:
      printf("mysteriously");
      break;
    case 5:
      printf("perfectly");
      break;
  }
}
void exclamation()
{
  int rnd =rand()%4;
  switch(rnd)
  {
    case 0:
      printf("Listen");
      break;
    case 1:
      printf("Look");
      break;
    case 2:
      printf("Hey");
      break;
    case 3:
      printf("Hmm");
      break;
  }
}
void atime()
{
  int rnd =rand()%4;
  switch(rnd)
  {
    case 0:
      printf("Adventure");
      break;
    case 1:
      printf("Lunch");
      break;
    case 2:
      printf("Lady");
      break;
    case 3:
      printf("Incremental");
      break;
  }
}
int main()
{
  srand(time(NULL));
  sentence();
  return 0;
}
