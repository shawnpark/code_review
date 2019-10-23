#ifndef GOODS_H_
#define GOODS_H_

namespace MyShopping {

class Goods{
 public:
  Goods() {}
  virtual ~Goods() {}
  void SetGoodsInfo(int index, int price);
  int GetIndex();
  int GetPrice();

 private:
  int goods_index_ = 0;
  int goods_price_ = 0;
};

} // end of namespace MyShopping

#endif  // GOODS_H_
