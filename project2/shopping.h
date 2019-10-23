#ifndef SHOPPING_H_
#define SHOPPING_H_

#include <vector>
#include "./goods.h"

namespace MyShopping {

class Shopping{
 public:
  Shopping();
  virtual ~Shopping();
  void PushList(const Goods& object);
  Goods GetLastElement();
  void PrintList();
  void SortByPrice();
  void SortByIndex();

 private:
  std::vector<Goods> shopping_list_;
};

} // end of namespace MyShopping

#endif  // SHOPPING_H_
