//
// Created by Administrator on 2023/1/11.
//

#include "class_test/Book.h"
#include "iostream"
#include <utility>

int Book::getBookId() const {
    return book_id;
}

void Book::setBookId(int bookId) {
    book_id = bookId;
}

const std::string &Book::getAuthName() const {
    return auth_name;
}

void Book::setAuthName(const std::string &authName) {
    auth_name = authName;
}

const std::string &Book::getBookDate() const {
    return book_date;
}

void Book::setBookDate(const std::string &bookDate) {
    book_date = bookDate;
}

Book::Book(int bookId, std::string authName, std::string bookDate) : book_id(bookId), auth_name(std::move(authName)),
                                                                                   book_date(std::move(bookDate)) {}

void Book::showAll(){
    std::cout<< this->book_id<< this->auth_name<< this->book_date<<std::endl;
}