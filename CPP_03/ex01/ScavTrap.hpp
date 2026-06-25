
class ScavTrap : public ClapTrap
{
	private :
		std::string name;
		size_t hp;
		size_t mana;
		size_t ad;
		bool gatemode;
	public :
		void guardGate(void);
		ScavTrap(std::string name);
		~ScavTrap(void);
};