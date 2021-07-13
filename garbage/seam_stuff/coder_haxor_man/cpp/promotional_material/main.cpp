#include <windows.h>

const char* title = "Upcoming game promotional material";

const char* messages[] = {
  "Don't forget to download forosotie's latest game",
  "\"Better then your mom\"\n- Albert Einstein",
  "Visuals beyond your wildest dreams\nreleasing alongside avatar 2",
  "All the competitors can suck a fat one",
  "Fast paced! Or not, I'm on the marketing team not the dev team",
  "Literally the best game is coming up!!!!!",
  "download SOON available",
  "Get it while it's hot"
};

int main(void)
{
  int length = sizeof(messages) / sizeof(messages[0]);
  int m;
  
  while(true) {
    m = rand() % length;
    
    MessageBox(NULL,
	       messages[m],
	       title,
	       MB_OK);

    Sleep((rand() % 60 + 60) * 1000);
  }

  return 0;
}
