using namespace std;

class Zespolone
{
public:
    double _rzecz;
    double _uroj;

    Zespolone ( double rzecz = 0.0, double uroj=0.0 ): _rzecz(rzecz), _uroj(uroj) { }
    double rzecz() const { return _rzecz;}
    double uroj() const { return _uroj;}

    Zespolone operator += ( Zespolone const& a )
    {
        _rzecz += a._rzecz;
        _uroj += a._uroj;
        return *this;
    }

    Zespolone operator -= ( Zespolone const& a )
    {
        _rzecz -= a._rzecz;
        _uroj -= a._uroj;
        return *this;
    }

    Zespolone operator *= ( Zespolone const& a )
    {
        double temp = _rzecz;
        _rzecz = a._rzecz*_rzecz - a._uroj*_uroj;
        _uroj = a._rzecz*_uroj + _rzecz*a._uroj;
        return *this;
    }

    Zespolone operator /= ( Zespolone const& a )
    {
        double temp = _rzecz;
        _rzecz = a._rzecz/_rzecz - a._uroj/_uroj;
        _uroj = a._rzecz/_uroj + temp/a._uroj;
        _rzecz = (a._rzecz*_rzecz + a._uroj*_uroj) / (_rzecz*_rzecz + _uroj*_uroj);
        _uroj = (a._rzecz*_uroj + a._uroj*_rzecz) / (_rzecz*_rzecz + _uroj*_uroj);
        return *this;
    }

    friend ostream& operator << ( ostream &out, Zespolone const& a )
    {
        out << "(" << a._rzecz << " + " << a._uroj << "i)";
        return out;
    }

    friend istream& operator >> ( istream  &input, Zespolone &a )
    {
         input >> a._rzecz >> a._uroj;
         return input;
    }

};

Zespolone operator + (Zespolone const& a, Zespolone const& b)
{
    Zespolone c;
    c._rzecz = a._rzecz + b._rzecz;
    c._uroj = a._uroj + b._uroj;
    return c;
}

Zespolone operator - (Zespolone const& a, Zespolone const& b)
{
    Zespolone c;
    c._rzecz = a._rzecz - b._rzecz;
    c._uroj = a._uroj - b._uroj;
    return c;
}

Zespolone operator * (Zespolone const& a, Zespolone const& b)
{
    Zespolone c;
    c._rzecz = a._rzecz*b._rzecz - a._uroj*b._uroj;
    c._uroj = a._rzecz*b._uroj + b._rzecz*a._uroj;
    return c;
}

Zespolone operator / (Zespolone const& a, Zespolone const& b)
{
    Zespolone c;
    c._rzecz = (a._rzecz*b._rzecz + a._uroj*b._uroj) / (b._rzecz*b._rzecz + b._uroj*b._uroj);
    c._uroj = (a._rzecz*b._uroj + a._uroj*b._rzecz) / (b._rzecz*b._rzecz + b._uroj*b._uroj);
    return c;
}
