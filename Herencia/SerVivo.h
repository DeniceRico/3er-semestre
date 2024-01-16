#ifndef SERVIVO_H
#define SERVIVO_H


class SerVivo
{
    public:
        SerVivo(bool,bool);
        void mostrarSerVivo(bool);
        bool getRespira();
        bool getComer();
        void setRespira(bool);
        void setComer(bool);
    private:
        bool respira;
        bool comer;
};

#endif // SERVIVO_H
