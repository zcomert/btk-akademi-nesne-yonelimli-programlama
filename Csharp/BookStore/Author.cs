using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace BookStore
{
    public class Author
    {
        public int AuthorId
        {
            get => default;
            set
            {
            }
        }

        public string FullName
        {
            get => default;
            set
            {
            }
        }

        public System.Collections.Generic.ICollection<BookAuthor> BookAuthors
        {
            get => default;
            set
            {
            }
        }
    }
}