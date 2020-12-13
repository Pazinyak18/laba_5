#include <string>
using namespace std;

class Fighter {
  public:
    Fighter();
    Fighter(string name, double hp, double damage);
    ~Fighter();

    string getName();
    void setName(string name);
    double getHp();
    void setHp(double hp);
    double getDamage();
    void setDamage(double damage);

    void fightToEnemy(Fighter* enemy);

    void print();

  private:
    string name;
    double hp;
    double damage;
};