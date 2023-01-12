//
// Created by Administrator on 2023/1/11.
//

#ifndef CPP_STUDY_BOOK_H
#define CPP_STUDY_BOOK_H
#include "string"

class Book {
private:
    int book_id;
    std::string auth_name;
    std::string book_date;
public:
    Book(int bookId, std::string authName, std::string bookDate);

public:
    int getBookId() const;

    void setBookId(int bookId);

    const std::string &getAuthName() const;

    void setAuthName(const std::string &authName);

    const std::string &getBookDate() const;

    void setBookDate(const std::string &bookDate);

    void showAll();
};


#endif //CPP_STUDY_BOOK_H
