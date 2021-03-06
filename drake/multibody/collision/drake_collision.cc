#include "drake/multibody/collision/drake_collision.h"

#ifdef BULLET_COLLISION
#include "drake/multibody/collision/bullet_model.h"
#endif
#include "drake/multibody/collision/unusable_model.h"

using std::unique_ptr;

namespace DrakeCollision {

const bitmask ALL_MASK(bitmask(0).set());
const bitmask NONE_MASK(0);
const bitmask DEFAULT_GROUP(1);

unique_ptr<Model> newModel() {
#ifdef BULLET_COLLISION
  return unique_ptr<Model>(new BulletModel());
#endif
  return unique_ptr<Model>(new UnusableModel());
}

}  // namespace DrakeCollision
