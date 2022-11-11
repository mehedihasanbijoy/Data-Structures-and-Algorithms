#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

const int MAX_ITEMS = 5;

template <class ItemType>
class UnsortedType{
    private:
        int length;
        ItemType arr[MAX_ITEMS];
        int currentPos;

    public:
        UnsortedType();
        void MakeEmpty();
        void ResetList();
        bool IsFull();
        bool IsEmpty();
        int LengthIs();
        void InsertItem(ItemType);
        void DeleteItem(ItemType);
        void GetNextItem(ItemType &);
        void RetrieveItem(ItemType &, bool &);
};

#endif // UNSORTEDTYPE_H_INCLUDED
