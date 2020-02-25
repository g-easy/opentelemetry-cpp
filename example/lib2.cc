#include <opentelemetry/trace/provider.h>

void f2(opentelemetry::trace::TracerProvider* p) {
  opentelemetry::trace::Tracer* const t = p->GetTracer("lib2", "0.0.1");
}
