#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class DynArr
{
    private:
        int *arr;
        int length;

    public:
        DynArr();
        DynArr(int);
        ~DynArr();
        int GetValue(int);
        void SetValue(int, int);
        void Allocate(int);
};

#endif // DYNARR_H_INCLUDED
