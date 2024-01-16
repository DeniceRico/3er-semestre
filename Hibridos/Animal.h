#ifndef ANIMAL_H
#define ANIMAL_H


class Animal
{
    public:
        Animal(int, bool);
        void respira(bool);
        void come();
        void camina();

        bool getRespirar(void);
        void setRespirar(bool);

    private:
        int edad;
        bool respirar;

};

#endif // ANIMAL_H
