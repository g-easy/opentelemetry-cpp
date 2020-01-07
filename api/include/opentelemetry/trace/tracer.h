#pragma once

#include "opentelemetry/nostd/string_view.h"

using opentelemetry::nostd::string_view;

namespace opentelemetry
{
namespace trace
{
class Tracer
{
public:
  Tracer(const string_view&, const string_view&);
private:
  const string_view name;
  const string_view version;
};
}  // namespace trace
}  // namespace opentelemetry
