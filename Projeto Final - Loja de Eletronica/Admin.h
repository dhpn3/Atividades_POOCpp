#include "Vendedor.h"

class Admin: public Vendedor {
    protected:
        char senha[9];
	public:
		bool iniciarMenu();
		Admin();
        bool autenticar();
};
