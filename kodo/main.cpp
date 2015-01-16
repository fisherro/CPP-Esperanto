#include "EO.h"

#include <iostream>
#include <string>
uzi nomspaco std; // using namespace

vaka AldoniNombrojn( entjera unu, entjera du ); // void function

entjera cxefejo()
{
	konzolaEligo << "Hello" << finaLineo;
	
	entjera nombro;
	konzolaEligo << "Entajpi nombron: ";
	konzolaEnigo >> nombro;
	
	se( nombro == 0 ) // if
	{
		konzolaEligo << "Zero" << finaLineo;
	}
	alie se ( nombro == 1 ) // else if
	{
		konzolaEligo << "One" << finaLineo;
	}
	alie // else
	{
		konzolaEligo << "Something Else" << finaLineo;
	}
	
	pro ( entjera i = 0; i < nombro; i++ ) // for
	{
		konzolaEligo << "nombro " << i << finaLineo;
	}
	
	nombro = nombro * 3;
	dum ( nombro > 0 ) // while
	{
		konzolaEligo << nombro << "\t";
		nombro--;
	};
	
	AldoniNombrojn( nombro, nombro*2 );
	
	konzolaEligo << "end" << endl;
	
    redoni 0; // return
}

vaka AldoniNombrojn( entjera unu, entjera du ) 
{
	entjera sumo = unu + du;
	konzolaEligo << unu << " + " << du << " = " << sumo << finaLineo;
}
