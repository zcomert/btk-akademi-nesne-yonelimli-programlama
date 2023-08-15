using System.Collections;
using StackApp.Contract;

namespace StackApp.Models;

public class ListStack<T> : IStack<T>
{
    private List<T> _collection;
    private int _lastIndex => _collection.Count-1;
    public ListStack()
    {
        _collection = new List<T>();
    }

    public ListStack(IEnumerable<T> collection)
        : this()
    {
        foreach (var item in collection)
        {
            Push(item);
        }
    }

    public T Peek()
    {
        return _collection[_lastIndex];
    }

    public T Pop()
    {
        var temp = _collection[_lastIndex];
        _collection.RemoveAt(_lastIndex);
        return temp;
    }

    public void Push(T item)
    {
        _collection.Add(item);
    }
}