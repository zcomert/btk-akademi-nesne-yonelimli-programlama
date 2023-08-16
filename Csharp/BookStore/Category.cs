using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace BookStore
{
    public class Category
    {
        public int CategoryId
        {
            get => default;
            set
            {
            }
        }

        public string CategoryName
        {
            get => default;
            set
            {
            }
        }

        public System.Collections.Generic.ICollection<Book> Books
        {
            get => default;
            set
            {
            }
        }
    }
}