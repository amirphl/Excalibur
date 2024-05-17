#include <Uri/Uri.hpp>

namespace Uri {
struct Uri::Impl {};
Uri::~Uri() = default;
Uri::Uri() : impl_(new Impl) {}
} // namespace Uri
