#include "../inc/internal/Monomial.h"

Monomial::Monomial()
{
	this->m_coefficient = 0;
	this->m_term = "";
}

Monomial::Monomial(double coefficient, string term)
{
	this->m_coefficient = coefficient;
	this->m_term = term;
}

Monomial::~Monomial()
{
	//dtor
}

double Monomial::getCoef() const
{
	return this->m_coefficient;
}

string Monomial::getTerm() const
{
	return this->m_term;
}

bool Monomial::operator==(const Monomial m) const
{
	return (this->getCoef() == m.getCoef()) && (this->getTerm() == m.getTerm());
}

bool Monomial::operator!=(const Monomial m) const
{
	return !(*this == m);
}

ostream& operator<<(ostream& os, const Monomial&)
{
	// TODO: insert return statement here
}

istream& operator>>(istream& is, Monomial&)
{
	// TODO: insert return statement here
}