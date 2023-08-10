using StackApp.Contract;

namespace StackApp.Models;

public class ListStack<T> : IStack<T>
{
    private int lastIndex => _collection.Count-1;
    private List<T> _collection;
    public ListStack()
    {
        _collection = new List<T>();
    }

    public ListStack(IEnumerable<T> collection) : this()
    {
        foreach (var item in collection)
        {
            Push(item);
        }
    }

    public T Peek()
    {
        return _collection[lastIndex];
    }

    public T Pop()
    {
        var temp = _collection[lastIndex];
        _collection.RemoveAt(lastIndex);
        return temp;
    }

    public void Push(T item)
    {
        _collection.Add(item);
    }
}