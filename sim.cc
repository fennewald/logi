#include "sim.hh"

void Board::step() {
  // Swap front and back buffers
  back ^= current;
  current ^= back;
  back ^= current;

  // Step for each item in self
  int x, y;

  for (y=0; y<HEIGHT; ++y) {
    for (x=0; x<WIDTH; ++x) {
    }
  }
}

u8_t Board::get(int x, int y) {
  x %= WIDTH; // Wrap around
  if (y < 0) return 255;
  if (y >= HEIGHT) return 0;
  return back[x][y];
}

u8_t Board::next(int x, int y) {
  // Opts
  /*
   * ' ' -- Open cell
   * '.' -- Small cell
   * '*'
   * '|'
   * 'I'
   * 'x'
   * '/'
   * '\'
   * ')'
   * '('
   * '['
   * ']'
   * '{'
   * '}'
   */
   int sum, r, m;

   if (sum <= 2) {
     return ' ';
   } else if (sum <= 10) {
     return '.';
   } else if (sum >= 250) {
     return '#';
   } else {
     return 'u';
   }
}

int main(void) {
}
