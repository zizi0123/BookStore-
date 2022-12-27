//
// Created by 86180 on 2022/12/12.
//

#ifndef _BOOKSTORE_TRANSACTIONLOG_H
#define _BOOKSTORE_TRANSACTIONLOG_H
#include <fstream>
class BookFile;
class AccountFile;

class TransactionLog{
public:
    TransactionLog();
    ~TransactionLog();
    void cost(long long); //negative
    void earn(long long); //positive
    void ShowAll() const;
    void Show(int count);
private:
    int transaction_num;
    std::fstream iof;
    long long total;
    long long earn_total;  //positive
    long long cost_total;  //positive
};
#endif //_BOOKSTORE_TRANSACTIONLOG_H
