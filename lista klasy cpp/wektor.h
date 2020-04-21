#include <cstdlib>

class Wektor {

    private:
        size_t const m_rozmiar;
        int * const m_ptab;

    public:

        ~Wektor() { delete [] m_ptab; }

        Wektor(size_t n): m_rozmiar(n), m_ptab(new int [n])
        {
            for (size_t i = 0; i < this->m_rozmiar; i++)
            {
                this->m_ptab[i] = 0;
            }
        }

        size_t size() const { return m_rozmiar; }

        int & at(int n) { return m_ptab[n]; }
        int at(int n) const { return m_ptab[n]; }
};
