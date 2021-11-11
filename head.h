struct input {
  double Time;
  int health;
};

struct output{
  union answer {string, int, double};
  double Time;
  int bonus point;
  int health;
};
