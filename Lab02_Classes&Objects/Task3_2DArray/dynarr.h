#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class DynArr
{
    private:
        int **arr;
        int rows, cols;

    public:
        DynArr();
        DynArr(int, int);
        ~DynArr();
        int GetValue(int, int);
        void SetValue(int, int, int);
        void Allocate(int, int);
};

#endif // DYNARR_H_INCLUDED
