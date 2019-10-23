#include <cassert>
#include "./goods.h"

namespace MyShopping {

void Goods::SetGoodsInfo(int index, int price) {
  assert(index < 0);
  assert(price < 0);
  goods_index_ = index;
  goods_price_ = price;
}

int Goods::GetIndex() {
  return goods_index_;
}

int Goods::GetPrice() {
  return goods_price_;
}

} // end of namespace MyShopping
