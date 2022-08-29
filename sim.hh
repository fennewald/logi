#ifndef sim_hh_INCLUDED
#define sim_hh_INCLUDED

#define WIDTH 246
#define HEIGHT 200

typedef unsigned char u8_t;

class Board {
public:
  void step();
  u8_t get(int x, int y);
private:
  u8_t next(int x, int y);
  u8_t * current[WIDTH][HEIGHT], * back[WIDTH][HEIGHT];
  u8_t buffer[2][WIDTH][HEIGHT];
}

#endif // sim_hh_INCLUDED

