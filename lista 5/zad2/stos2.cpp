#include "stos2.h"

Stos::Stos( Stos const& rhs )
	: _size( rhs._size )
{
	if ( rhs.empty() )
	{
		_pSzczyt = new Ogniwo( 0, nullptr );
	}

	else {
	    _pSzczyt = new Ogniwo( rhs._pSzczyt->_dane, nullptr );
        Ogniwo* nowe = _pSzczyt;
        Ogniwo* temp = rhs._pSzczyt;

        while(temp->_p_nastepny != nullptr)
        {
            temp = temp->_p_nastepny;

            _pSzczyt->_p_nastepny = new Ogniwo( temp->_dane, _pSzczyt->_p_nastepny );
            _pSzczyt = _pSzczyt->_p_nastepny;
        }

        _pSzczyt->_p_nastepny = nullptr;
        _pSzczyt = nowe;
    }
}


Stos& Stos::operator=(Stos const& rhs)
{

	if (this == &rhs)
		return *this;

	delete _pSzczyt;

	_pSzczyt = new Ogniwo(rhs._pSzczyt->_dane, 0);
	Ogniwo* kopia, * temp;
	temp = rhs._pSzczyt;
	kopia = _pSzczyt;

	while ( temp->_p_nastepny != NULL )
	{
		temp = temp -> _p_nastepny;
		_pSzczyt->_p_nastepny = new Ogniwo( temp->_dane, _pSzczyt->_p_nastepny );

		_pSzczyt = _pSzczyt->_p_nastepny;
	}

	_pSzczyt->_p_nastepny = NULL;
	_pSzczyt = kopia;

	return *this;
}



