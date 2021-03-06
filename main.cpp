#include "ant.h"
#include "consola.h"
#include "misc.h"
#include "world.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
  string cmd;
  Universe *u = new Universe();
  World *world = new World(30, 30, u);
  u->add_world(world, "default");

  Consola::clrscr();
  Consola::setBackgroundColor(0);
  Consola::setTextColor(7);

  cout << "Digite [help] para ver a lista de comandos disponiveis" << endl
       << endl;
  while (1) {
    getline(cin, cmd);
    if (cmd != "") {
      handle_command(cmd, world);
    }
  }

  return 0;
}
