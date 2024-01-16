#include "Padres.h"
using namespace std;
#include <string>
Padres::Padres()
{
    apellido_madre="";
    apellido_padre="";
}
Padres::Padres(string m, string p)
{
    apellido_madre=m;
    apellido_padre=p;

}
void Padres::setApellido_m(string a_)
{
    apellido_madre=a_;

}
void Padres::setApellido_p(string p_)
{
    apellido_padre=p_;
}
string Padres::getApe_m(void)
{
    return apellido_madre;
}
string Padres::getApe_p(void)
{
    return apellido_padre;
}
