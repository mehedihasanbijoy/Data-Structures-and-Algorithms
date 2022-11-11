#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

template <class T>
class DynArr
{
    private:
        T *arr;
        int length;

    public:
        DynArr(int);
        ~DynArr();
        T GetValue(int);
        void SetValue(int, T);
};

#endif // DYNARR_H_INCLUDED
