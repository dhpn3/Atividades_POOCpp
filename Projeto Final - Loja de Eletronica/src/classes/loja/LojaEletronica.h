#include "..\admin\Admin.h"
#include "..\caixa\Caixa.h"

class LojaEletronica {
	private: 
		Admin admin;
		Caixa caixa;
		
	public:
		void iniciarMenu();
		void logo();
};
