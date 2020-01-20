#include "ft_perso.h"
#include "ft_fight.h"

int main()
{
	t_perso nicolas_bauer;
	nicolas_bauer.name = strdup("Nicolas Bauer");
	nicolas_bauer.life = 100;
	nicolas_bauer.age = 42;
	nicolas_bauer.profession = SAVE_THE_WORLD;
	t_perso anastacia;
	anastacia.name = strdup("Anastacia");
	anastacia.life = 50.0;
	anastacia.age = 42;
	anastacia.profession = SAVE_THE_WORLD;
	ft_fight(&nicolas_bauer, &anastacia, KICK);
	ft_fight(&anastacia, &nicolas_bauer, PUNCH);
	ft_fight(&nicolas_bauer, &anastacia, HEADBUTT);
	return (0);	
}

