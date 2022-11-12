#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED

const int MAX_ITEMS = 5;

template <class ItemType>
class SortedType
{
    private:
        int length;
        ItemType info[MAX_ITEMS];
        int currentPos;

    public :
        SortedType();
        void MakeEmpty();
        bool IsFull();
        bool IsEmpty();
        int LengthIs();
        void InsertItem(ItemType);
        void DeleteItem(ItemType);
        void RetrieveItem(ItemType&, bool&);
        void ResetList();
        void GetNextItem(ItemType&);
};


#endif // SORTEDTYPE_H_INCLUDED
