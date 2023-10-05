using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace BookStore
{
    public class Book
    {
        public int BookId { get; set; }
        

        public string Title { get; set; }


        public decimal Price { get; set; }


        public int CategoryId { get; set; }
        

        public Category Category { get; set; }
       

        public ICollection<BookAuthor> BookAuthors { get; set; }

        public BookDetail BookDetail
        {
            get => default;
            set
            {
            }
        }
    }
}