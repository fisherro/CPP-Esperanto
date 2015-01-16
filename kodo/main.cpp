#include "EO/EO_CPP.h"

#include <iostream>
#include <string>
uzi nomspaco std; // using namespace

entjera PreniMenuanElekton();
vaka MontriMenuon();
vaka AdiciiNombrojn();
vaka SubtrahiNombrojn();

entjera cxefejo()
{
	std::konzolaEligo << "Saluton!" << finaLineo;
	bulea cxuFinita = malvera;
	
	dum ( !cxuFinita )
	{
		entjera elekto = PreniMenuanElekton();
		
		sxaltilo( elekto )
		{
			okazo 1:
				AdiciiNombrojn();
			halti;
			
			okazo 2:
				SubtrahiNombrojn();
			halti;
			
			okazo 3:
				konzolaEligo << "Gxis!" << finaLineo;
				cxuFinita = vera;
			halti;			
		}
	}
}

entjera PreniMenuanElekton()
{
	MontriMenuon();
	entjera elekto = -1;
	dum ( elekto != 1 && elekto != 2 && elekto != 3 )
	{
		konzolaEligo << "Via Elekto: ";
		konzolaEnigo >> elekto;
	}
	redoni elekto;
}

vaka MontriMenuon()
{
	konzolaEligo << finaLineo;
	konzolaEligo << "---------------------" << finaLineo;
	konzolaEligo << "1. Adicii nombrojn" << finaLineo;
	konzolaEligo << "2. Subtrahi nombrojn" << finaLineo;
	konzolaEligo << "3. Forlasi" << finaLineo;
}

vaka AdiciiNombrojn()
{
	entjera unu, du;
	konzolaEligo << "Unua Nombro: ";
	konzolaEnigo >> unu;
	konzolaEligo << "Dua Nombro: ";
	konzolaEnigo >> du;
	entjera rezulto = unu + du;
	konzolaEligo << unu << " + " << du << " = " << rezulto << finaLineo;	
}

vaka SubtrahiNombrojn()
{
	entjera unu, du;
	konzolaEligo << "Unua Nombro: ";
	konzolaEnigo >> unu;
	konzolaEligo << "Dua Nombro: ";
	konzolaEnigo >> du;
	entjera rezulto = unu - du;
	konzolaEligo << unu << " - " << du << " = " << rezulto << finaLineo;
}
